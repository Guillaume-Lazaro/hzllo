//
//  foncombat.cpp
//  hzllo
//
//  Created by UNAL COLIN on 14/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "foncombat.hpp"
#include "Tournois.hpp"
#include "Poisson.hpp"
#include "Joueur.hpp"
#include "Attaque.hpp"
#include "Bateau.hpp"
#include "Musee.hpp"
#include "Zone.hpp"
#include "foncTournois.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

Joueur combat (Joueur j,int t,Monde m)
{
    //initialisation
    int capture=0;
    int escape=0;
    int choixCanne;
    int tour=1;
    int iValid;
    int choiAddMus=0;
    int captMus=0;
   
    // Zone z;
    Canne canne;
    Bateau batJ=j.useBat();
    Musee musee=j.getMusee();

    int choiZone=1;
    int resJoueur=0;
    int typJoueur=0;
    int resPoisson=0;
    int typPoisson=0;
    
    int numAtJoueur=0;
    int numAtPoisson=0;
    int randP=0;
    int useApp=0;
    int appatPoisson=9;
    
    int comptRandForce=0;
    int randEscape=0;
    int pRand=0;
    float recompance;
    int fatigue;
    
    cout<<"C est l'heure de la peche !"<<endl;
    cin.ignore();
    
    //choix Zone
    if(batJ.getZone()>1)
    {
        cout<<"Choisissez votre zone de peche :"<<endl;
        cin.ignore();
        
        cout<<"1 : La mare de votre grand pere"<<endl;
        cout<<"2 : le ruisseau"<<endl;
        cout<<"3 : L'étang des Delacroix"<<endl;

        if(batJ.getZone()>5)
        {
            cout<<"4 : Le lac de St Criquet"<<endl;
        }
        if(batJ.getZone()>12)
        {
            cout<<"5 : La riviere Testompe"<<endl;
        }
        if(batJ.getZone()>22)
        {
            cout<<"6 : L'estuaire Sampont"<<endl;
        }
        cout<<"Choisissez votre zone de peche pour la journee :"<<endl;
            
        //verif
        cin>>choiZone;
        iValid = 1 ;
        while (iValid == 1)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout<<"Erreur!"<<endl;
                cin>>choiZone;
            }
            else
                iValid = 0;
        }
    }

    //creation liste poisson
    Zone z(choiZone);
    //    ou    z.addPoisson(choiZone);
    
    //choix de la canne
    cout<<endl<<"Selectionez la canne a utiliser :"<<endl;
    cin.ignore();
    cout<<"1 : Canne de force"<<endl;
    cout<<"2 : Canne d'abilitee"<<endl;
    
    cin>>choixCanne;
    iValid = 1 ;
    while (iValid == 1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout<<"Erreur!"<<endl;
            cin>>choixCanne;
        }
        else
            iValid = 0;
    }
    
    // Switch ? enum ?
    if(choixCanne==1)
    {
        canne=j.useCanneF();
        cout<<"Vous avez choisi la canne de force."<<endl<<endl;
        cin.ignore();
    }
    else if(choixCanne==9)
    {
        Canne dieu(15,15);
        canne=dieu;
        cout<<"Vous avez choisi la canne de dieu."<<endl<<endl;
        cin.ignore();
    }
    else
    {
        canne=j.useCanneV();
        cout<<"Vous avez choisi la canne d'abilitee."<<endl<<endl;
        cin.ignore();
    }
    
    //choix appat
    if(j.getTailleTabAppat()>0)
    {
        cout<<"Vouslez vous utiliser un appat ? "<<endl<<endl;
        cin.ignore();
        cout<<"1 : oui "<<endl;
        cout<<"2 : non "<<endl;
            
        cin>>useApp;
        iValid = 1 ;
        while (iValid == 1)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout<<"Erreur!"<<endl;
                cin>>useApp;
            }
            else
                iValid = 0;
        }
        
        if(useApp==1)
        {
            cout<<"Attention, meme avec un appat, "<<endl;
            cout<<"la meteo est un facteur plus important que l'appat "<<endl<<endl;
            cin.ignore();
            
            //liste
            cout<<"Liste de tes appats : "<<endl;
            j.listZoneAppat(choiZone);
            //choi :
            cout<<endl<<"Entre le numero de l'appat a utiliser "<<endl;
            cout<<"Tape 0 si tu a change d'avis ou si tu n'en a pas ! "<<endl;
            
            cin>>useApp;
            iValid = 1 ;
            while (iValid == 1)
            {
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore();
                    cout<<"Erreur!"<<endl;
                    cin>>useApp;
                }
                else
                    iValid = 0;
            }
            
            if(useApp==0)
            {
                //what ?
            }
            if(useApp!=0)
            {
                appatPoisson=j.supQttAppat(useApp);
            }
        }
    }
    
    // Poisson random
    int numP;
    Poisson p;
    
    //verif meteo poisson + rand %
    do
    {
        srand((int)time(0));
        pRand= 1 + rand() % 99;
        
        if(pRand<30)
        {
            numP=0;
        }
        else if(pRand>29 && pRand<55)
        {
            numP=1;
        }
        else if(pRand>54 && pRand<75)
        {
            numP=2;
        }
        else if(pRand>74 && pRand<93)
        {
            numP=3;
        }
        else
        {
            numP=4;
        }
        
        //test appat
        if(appatPoisson!=9)
        {
            numP=appatPoisson;
            appatPoisson=9;
        }
        p=z.getPoisson(numP);
        
    } while(m.getMeteoMonde()==p.getMeteo());
    
    
    cout<<"lancer : "<< pRand <<endl;
    // cout<<"Random : "<< numP <<endl;
    
    cout<<"Preparation de la peche dans "<< z.getName() <<endl;
    cin.ignore();
    
    cout<<"Que la peche commance ! "<<endl<<endl;
    cin.ignore();
    
    
    //combat boucle
    while (escape==0)
    {
        cout<<"Tour de peche n°"<< tour << endl<<endl;
        cin.ignore();
        //action joueur
        cout<<"1 : laisser du moue"<<endl;
        cout<<"2 : fatiguer le poisson(force)"<<endl;
        cout<<"3 : mouliner(vitesse)"<<endl;
        cout<<"4 : tenter de le sortir"<<endl;
        
        cin>>numAtJoueur;
        iValid = 1 ;
        while (iValid == 1)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout<<"Erreur!"<<endl;
                cin>>numAtJoueur;
            }
            else
                iValid = 0;
        }
        
        Attaque atJ(numAtJoueur,canne);
        //resultat action joueur
        typJoueur=atJ.getType();
        resJoueur=atJ.getX();
        
        // action poisson
        if(p.getCaractere()==1)
        {
            srand((unsigned int)time(0));
            randP= 1 + rand() % 99;
            
            if(randP>9)
            {
                numAtPoisson=1;
            }
            else
            {
                numAtPoisson=2;
            }
        
            Attaque atP(numAtPoisson,p);
            
            //resultat action poisson
            typPoisson=atP.getType();
            resPoisson=atP.getX();
            //ddestruc attaque p
            atP.~Attaque();
        }
        
        
        
        if(p.getCaractere()==2)
        {
            randP+=1;
            
            if(randP>2)
            {
                randP=1;
            }
            
            if(randP==1)
                {
                    numAtPoisson=1;
                }
            else
                {
                    numAtPoisson=2;
                }
            
            Attaque atP(numAtPoisson,p);
            
            //resultat action poisson
            typPoisson=atP.getType();
            resPoisson=atP.getX();
            //destruc attaque p
            atP.~Attaque();
        }
        
        
        
        
        
        if(p.getCaractere()==3)
        {
            srand((unsigned int)time(0));
            randP= 1 + rand() % 99;
            
            if(randP>9)
                {
                    numAtPoisson=1;
                }
            else
                {
                    numAtPoisson=2;
                }
            
            Attaque atP(numAtPoisson,p);
            
            //resultat action poisson
            typPoisson=atP.getType();
            resPoisson=atP.getX();
            //ddestruc attaque p
            atP.~Attaque();
            
            
            //modif force comportement
            
            if(comptRandForce == 0)
            {
                comptRandForce=atP.getX();
            }
            resPoisson+=comptRandForce;
            comptRandForce -= 2 ;
            
            if(comptRandForce <= 0 )
            {
                comptRandForce = 1 ;
            }
            
            
        }
        
        
        
        
        if(p.getCaractere()==4)
        {
            srand((unsigned int)time(0));
            randP= 1 + rand() % 99;
            
            if(randP>9)
                {
                    numAtPoisson=1;
                }
            else
                {
                    numAtPoisson=2;
                }
            
            Attaque atP(numAtPoisson,p);
            
            //resultat action poisson
            typPoisson=atP.getType();
            resPoisson=atP.getX();
            //ddestruc attaque p
            atP.~Attaque();
            
            //modif force comportement
            resPoisson+=comptRandForce;
            comptRandForce+=2;
            if(comptRandForce > atP.getX())
            {
                comptRandForce=atP.getX();
            }
            
            
        }
        
        
        //resultat comparaison action
        
        //mou vs mou
        if(typJoueur==0 && typPoisson==0)
            {
                cout<<"Le poisson a l'aisser du moue !"<<endl;
                cin.ignore();
                
                //recup vie
                p.prendVie(p.getRegen());
                
                //verif
                if (p.getPvMax()>p.getPv())
                    {
                        p.pvOrigine();
                    }
                
                cout<<"Il recupere : "<< p.getRegen() <<"de fatigue !"<<endl;
                cin.ignore();
            }
        
        
        //mou vs force
        if(typJoueur==0 && typPoisson==1)
            {
                cout<<"Le poisson a tirrer sur la ligne ! (force)"<<endl;
                cin.ignore();
                
                p.prendDegat(p.getRegen());
                
                srand((unsigned int)time(0));
                randEscape= 1 + rand() % 99;
                
                if(randEscape<15)
                {
                    escape=1;
                }
                
                cout<<"Il perd : "<< p.getRegen() <<"de fatigue !"<<endl;
                cin.ignore();
                
                if(escape==1)
                {
                    cout<<"Mais il reussi a s'echaper ..."<<endl;
                    cin.ignore();
                    cout<<"Dommage ... Vous pourez toujours retenter demain !"<<endl<<endl;
                    cin.ignore();
                }
            }
        
        
        //mou vs escape
        if(typJoueur==0 && typPoisson==2)
            {
                cout<<"Le poisson a essayer de s'echaper ! (vitesse)"<<endl;
                cin.ignore();
                
                p.prendDegat(p.getRegen());
                
                srand((unsigned int)time(0));
                randEscape= 1 + rand() % 99;
                
                if(randEscape<15)
                {
                    escape=1;
                }
                
                cout<<"Il perd : "<< p.getRegen() <<"de fatigue !"<<endl;
                cin.ignore();
                
                if(escape==1)
                {
                    cout<<"Mais il reussi a s'echaper ..."<<endl;
                    cin.ignore();
                    cout<<"Dommage ... Vous pourez toujours retenter demain !"<<endl<<endl;
                    cin.ignore();
                }
            }
        
        
        //fatigue vs mou
        if(typJoueur==1 && typPoisson==0)
            {
                cout<<"Le poisson a l'aisser du moue !"<<endl;
                cin.ignore();
                
                p.prendDegat(resJoueur-p.getResist());
                p.perdForce(1);
                
                cout<<"Il perd : "<< resJoueur-p.getResist() <<" de fatigue !"<<endl;
                cin.ignore();
            }
        
        
        //fatigue vs tirer
        if(typJoueur==1 && typPoisson==1)
            {
                cout<<"Le poisson a tirrer sur la ligne ! (force)"<<endl;
                cin.ignore();
                
                if((2*resPoisson)>resJoueur)
                {
                    escape=1;
                }
                
                else
                {
                    p.prendDegat(resJoueur-p.getResist());
                    p.perdForce(1);
                    cout<<"Il perd : "<< resJoueur-p.getResist() <<" de fatigue !"<<endl;
                    cin.ignore();
                    srand((unsigned int)time(0));
                    randEscape= 1 + rand() % 99;
                    if(randEscape<32)
                    {
                        escape=1;
                    }
                }
                
                if(escape==1)
                {
                    cout<<"Mais il reussi a s'echaper ..."<<endl;
                    cin.ignore();
                    cout<<"Dommage ... Vous pourez toujours retenter demain !"<<endl<<endl;
                    cin.ignore();
                }
                
            }
        
        
        //fatigue vs escape
        if(typJoueur==1 && typPoisson==2)
            {
                cout<<"Le poisson a essayer de s'echaper ! (vitesse)"<<endl;
                cin.ignore();
                
                if(resPoisson>resJoueur)
                {
                    escape=1;
                }
                
                else
                {
                    p.prendDegat(resJoueur-p.getResist());
                    p.perdVit(1);
                    cout<<"Il perd : "<< resJoueur-p.getResist() <<" de fatigue !"<<endl;
                    cin.ignore();
                    srand((unsigned int)time(0));
                    randEscape= 1 + rand() % 99;
                    if(randEscape<6)
                    {
                        escape=1;
                    }
                }
                
                if(escape==1)
                {
                    cout<<"Mais il reussi a s'echaper ..."<<endl;
                    cin.ignore();
                    cout<<"Dommage ... Vous pourez toujours retenter demain !"<<endl<<endl;
                    cin.ignore();
                }
            }
        
        
        //mouline vs mou
        if(typJoueur==2 && typPoisson==0)
            {
                cout<<"Le poisson a l'aisser du moue !"<<endl;
                cin.ignore();
                
                p.prendDegat(resJoueur-p.getResist());
                p.perdVit(1);
                
                cout<<"Il perd : "<< resJoueur-p.getResist() <<" de fatigue !"<<endl;
                cin.ignore();
            }
        
        
        //mouline vs tiere
        if(typJoueur==2 && typPoisson==1)
            {
                cout<<"Le poisson a tirrer sur la ligne ! (force)"<<endl;
                cin.ignore();
                
                if(resPoisson>resJoueur)
                {
                    escape=1;
                }
                
                else
                {
                    p.prendDegat(resJoueur-p.getResist());
                    p.perdVit(1);
                    cout<<"Il perd : "<< resJoueur-p.getResist() <<" de fatigue !"<<endl;
                    cin.ignore();
                    srand((unsigned int)time(0));
                    randEscape= 1 + rand() % 99;
                    if(randEscape<6)
                        {
                            escape=1;
                        }
                }
                
                if(escape==1)
                {
                    cout<<"Mais il reussi a s'echaper ..."<<endl;
                    cin.ignore();
                    cout<<"Dommage ... Vous pourez toujours retenter demain !"<<endl<<endl;
                    cin.ignore();
                }
                
            }
        
        
        //mouline vs escape
        if(typJoueur==2 && typPoisson==2)
            {
                cout<<"Le poisson a essayer de s'echaper ! (vitesse)"<<endl;
                cin.ignore();
                
                if((2*resPoisson)>resJoueur)
                {
                    escape=1;
                }
                
                else
                {
                    p.prendDegat(resJoueur-p.getResist());
                    p.perdVit(1);
                    cout<<"Il perd : "<< resJoueur-p.getResist() <<" de fatigue !"<<endl;
                    cin.ignore();
                    srand((unsigned int)time(0));
                    randEscape= 1 + rand() % 99;
                    if(randEscape<35)
                    {
                        escape=1;
                    }
                }
                
                if(escape==1)
                {
                    cout<<"Mais il reussi a s'echaper ..."<<endl;
                    cin.ignore();
                    cout<<"Dommage ... Vous pourez toujours retenter demain !"<<endl<<endl;
                    cin.ignore();
                }
            }
        
        // test capture !
        if(typJoueur==3)
            {
                
                if(p.getPv()<=resJoueur)
                    {
                        cout<<"Vous reussisez a sortir le poisson de l'eau !"<<endl;
                        cin.ignore();
                        escape=1;
                        capture=1;
                    }
                
                else
                    {
                        cout<<"Hummm ... Encore rate ... Le poisson c est echape"<<endl;
                        cin.ignore();
                        cout<<"Dommage ... Vous pourez toujours retenter demain !"<<endl<<endl;
                        cin.ignore();
                        escape=1;
                    }
            }
        
        //compteur de tour
        fatigue = p.getPvMax()-p.getPv();
        if(fatigue>0)
        {
        cout<<"Fatigue actuelle du poisson : "<< fatigue <<endl;
        }
        if(fatigue<0)
        {
            fatigue=0;
        }

        tour +=1;

        
        
    
    }
    
    
    //recompance
    if (capture==1)
    {
        
        cout<<"Bravo ! Vous avez peche : "<<endl<< p.getNomPoisson()<<endl;
        cin.ignore();
        
        p.calculPrix();
        cout<< "Son poid est de : "<<p.getPoid()<<" gammes !"<<endl;
        cout<<"Son prix a la vente est de : "<<p.getPrix()<<" gold !"<<endl;
        
        
        recompance = p.getPrix();
        j.addGold(recompance);
        
        //addpokedex
        int testId=j.verifyDex(p);
        
        if (testId==0)
        {
            p.capture();
            j.addPoissonPoke(p);
        }
        
        if(t==1)
        {
            j.addPoissonTab(p);
        }

        
        //add musee si aquoirium dispo

        
        if(musee.getnbAquoi()>0)
        {
            
            cout<<"Voulez vous ajouter ce poisson au musée ?"<<endl;
            cout<<"1 : oui"<<endl;
            cout<<"2 : non"<<endl;
            
            
            
            cin>>choiAddMus;
            iValid = 1 ;
            while (iValid == 1)
            {
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore();
                    cout<<"Erreur!"<<endl;
                    cin>>choiAddMus;
                }
                else
                    iValid = 0;
            }
            
            // manque verif aquoi vide dispo
            
            if(choiAddMus==1)
            {
                captMus=musee.addPoissonMusee(p);
                
                if(captMus==1)
                {
                    cout<<"Vous avez deja ce poisson dans votre muse ou vous n'avez plus de place"<<endl;
                    cin.ignore();
                    j.supGold(recompance);
                }
                else
                {
                    cout<<"Le poisson a etait ajoute au musee !!!"<<endl;
                    cin.ignore();
                }

                j.addMusee(musee);
                
            }
        }
    }
    p.~Poisson();
    return j;
}
