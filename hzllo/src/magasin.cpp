//
//  magasin.cpp
//  hzllo
//
//  Created by UNAL COLIN on 16/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "magasin.hpp"
#include "Joueur.hpp"
#include "Canne.hpp"
#include "Musee.hpp"
#include "Bateau.hpp"
#include "Poisson.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

Joueur magasin (Joueur j)
{
    int choiMag;
    int confirmationAchat;
    
    int iValid;
    
    int idCanneForce;
    int idCanneVitesse;
    int idBateauateau;
    int idAppat;
    int debugAppat=0;
    
    int exit=0;
    
    cout<<"Adiou ! Bienvenu au Super Fishing Shop !!!"<<endl;
    cin.ignore();
    cout<<"J'ai tout ce qu'il te faut pour pesquer"<<endl;
    cin.ignore();
    cout<<"Si tu tabanege, n'hésite pas tu en aura toujours l'utilité !"<<endl;
    cin.ignore();
    
    
    srand((unsigned int)time(0));
    int randText= 1 + rand() % 12;
    
    if(randText==1)
    {
        cout<<"Le poisson le plus rare de du risseau est l'aneau unique'"<<endl;
        cin.ignore();
    }
    else if(randText==2)
    {
        cout<<"Le poisson le plus rare de l'etang des Delacroix est le requin du terroir"<<endl;
        cin.ignore();
    }
    else if(randText==3)
    {
                cout<<"Le poisson le plus rare de la marre est la carpe koi"<<endl;
        cin.ignore();
    }
    else if(randText==4)
    {
                cout<<"Le poisson le plus rare dl la St Criquet est le Magikarpe"<<endl;
        cin.ignore();
    }
    else if(randText==5)
    {
                        cout<<"Le poisson le plus rare de la riviere Testompe est la palourde doree"<<endl;
        cin.ignore();
    }
    else if(randText==6)
    {
                        cout<<"Il existe une canne qui appartien au dieu des geek"<<endl;
        cin.ignore();
    }
    else if(randText==7)
    {
                        cout<<"Le ricard s'achette dans la 6eme Zone du jeux"<<endl;
        cin.ignore();
    }
    else if(randText==8)
    {
                        cout<<"Le muse permet de generer de l'argent passivement !"<<endl;
        cin.ignore();
    }
    else if(randText==9)
    {
                        cout<<"Entre votre texte ici"<<endl;
        cin.ignore();
    }
    
    
    
while(exit==0)
{
    cout<<"Portefeuille : "<< j.getGold() <<endl;
    cin.ignore();
    
    cout<<"1 : Upgrade de la canne solide"<<endl;
    cout<<"2 : Mes supers cannes d'agilitee"<<endl;
    cout<<"3 : Les bateaux"<<endl;
    cout<<"4 : Les differents appats"<<endl;
    cout<<"5 : Agrandir le musee"<<endl;
    cout<<"6 : acheter un nouvel aquoirium"<<endl;
    cout<<"7 : partir (sorti définitive)"<<endl;
    if(j.getDev() == true)
        cout<<"8 : Salle des dévellopeurs"<<endl;
    
    cin>>choiMag;
    iValid = 1 ;
    while (iValid == 1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout<<"Erreur!"<<endl;
            cin>>choiMag;
        }
        else
            iValid = 0;
    }
    
    confirmationAchat=0;
    
    switch (choiMag)
    {
        case 1:
        {
            Canne canJF;
            canJF=j.useCanneF();
            idCanneForce=1+canJF.getId();
            Canne newF(idCanneForce,1);
            cout<<"J'ai cette tres SOLIDE canne a te proposer :"<<endl;
            cin.ignore();
            cout<<"C'est une canne de categorie : "<< newF.getId()<<endl;
            cout<<"Son prix est de : "<< newF.getPrix()<<endl;
            cin.ignore();
            
            if(j.getGold()>=newF.getPrix())
            {
                cout<<"Ca t'interresse ??"<<endl;
                cin.ignore();
                cout<<"1 : oui"<<endl;
                cout<<"2 : non"<<endl;
                
                
                cin>>confirmationAchat;

                iValid = 1 ;
                while (iValid == 1)
                {
                    if (cin.fail())
                    {
                            cin.clear();
                            cin.ignore();
                            cout<<"Erreur!"<<endl;
                            cin>>confirmationAchat;
                    }
                    else
                        iValid = 0;
                }
                
                if(confirmationAchat==1)
                {
                    j.supGold(newF.getPrix());
                    j.addCanneF(newF);
                    cout<<"Merci pour ton achat, tu va te regaler !"<<endl;
                    cin.ignore();
                }
            }
            else
            {
                cout<<"Humm, malheureusment tu n'as pas assez"<<endl;
                cin.ignore();
            }
            
            newF.~Canne();
            break;
         }
            
        case 2:
                
            {
                Canne canJV;
                canJV=j.useCanneV();
                idCanneVitesse=1+canJV.getId();
                Canne newV(1,idCanneVitesse);
                cout<<"J'ai cette tres belle canne a te proposer :"<<endl;
                cin.ignore();
                cout<<"Fine est souple comme je les aimes"<<endl;
                cin.ignore();
                cout<<"C'est une canne de categorie : "<< newV.getId()<<endl;
                cout<<"Son prix est de : "<< newV.getPrix()<<endl;
                cin.ignore();
                
                if(j.getGold()>=newV.getPrix())
                {
                    cout<<"Ca t'interresse ??"<<endl;
                    cin.ignore();
                    cout<<"1 : oui"<<endl;
                    cout<<"2 : non"<<endl;
                    
                    
                    cin>>confirmationAchat;
                    iValid = 1 ;
                    while (iValid == 1)
                    {
                            if (cin.fail())
                            {
                                    cin.clear();
                                    cin.ignore();
                                    cout<<"Erreur!"<<endl;
                                    cin>>confirmationAchat;
                            }
                            else
                                    iValid = 0;
                    }
                    
                    if(confirmationAchat==1)
                    {
                        j.supGold(newV.getPrix());
                        j.addCanneV(newV);
                        cout<<"Merci pour ton achat, tu va te regaler !"<<endl;
                        cin.ignore();
                    }
                }
                else
                {
                    cout<<"Humm, malheureusment tu n'as pas assez"<<endl;
                    cin.ignore();
                }
                
                newV.~Canne();
                break;
             }
            
        case 3:
                
            {
                Bateau batJ;
                batJ=j.useBat();
                idBateauateau= 1+batJ.getId();
                Bateau newB(idBateauateau);
                cout<<"A, tu cherche un nouveau bateau ?"<<endl;
                cin.ignore();
                cout<<"Explorer de nouvelles eau est l'essance de la peche"<<endl;
                cin.ignore();
                cout<<"C'est un bateau de type : "<< newB.getId()<<endl;
                cout<<"Son prix est de : "<< newB.getPrix()<<endl;
                cin.ignore();
                
                if(j.getGold()>=newB.getPrix())
                {
                    cout<<"Ca t'interresse ??"<<endl;
                    cin.ignore();
                    cout<<"1 : oui"<<endl;
                    cout<<"2 : non"<<endl;
                    
                    
                    cin>>confirmationAchat;
                    iValid = 1 ;
                    while (iValid == 1)
                    {
                        if (cin.fail())
                        {
                            cin.clear();
                            cin.ignore();
                            cout<<"Erreur!"<<endl;
                            cin>>confirmationAchat;
                        }
                        else
                            iValid = 0;
                    }
                    
                    if(confirmationAchat==1)
                    {
                        j.supGold(newB.getPrix());
                        j.upBateau(newB);
                        cout<<"Merci pour ton achat, tu va te regaler !"<<endl;
                        cin.ignore();
                    }
                }
                else
                {
                    cout<<"Humm, malheureusment tu n'as pas assez"<<endl;
                    cin.ignore();
                }
                
                newB.~Bateau();
                break;
             }
            
        case 7:
        {
            cout<<"Tu souhaite partir ? Pas de probleme"<<endl;
            cin.ignore();
            cout<<"J'espere tu revoir bientot ! Et la prochaine fois,"<<endl;
            cin.ignore();
            cout<<"N'oublie pas le ricard !"<<endl;
            cin.ignore();
            cout<<"Qui sais, je pourais te faire un prix"<<endl;
            cin.ignore();
            exit=1;
            
            break;
        }
            
        case 4:
        {
            cout<<"Voici la liste de tout les appats que tu a debloque :"<<endl<<endl;
            cin.ignore();
            
            for(int i=0; i<j.tailTab(); i++)
            {
                Poisson poke = j.getPoissonPoke(i);
                
                if(poke.getCapture()==true)
                {
                    cout<<"Appat n° "<<poke.getId()<<" : "<<poke.getNomPoisson()<<endl;
                    
                }
            }
            cout<<"Choisi le n° de l'appat que tu veux acheuter :"<<endl;
            cout<<"0 : ne pas acheter d'appat"<<endl;
            
            
            cin>>idAppat;
            iValid = 1 ;
            while (iValid == 1)
            {
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore();
                    cout<<"Erreur!"<<endl;
                    cin>>idAppat;
                }
                else
                    iValid = 0;
            }
            
            
            if(idAppat>0)
            {
                Appat a(idAppat);
                
                if(j.getGold()>=a.getPrix())
                {
                    cout<<"Cet appat t'interresse ??"<<endl;
                    cout<<"Il coute "<< a.getPrix() <<endl;
                    cin.ignore();
                    cout<<"1 : oui"<<endl;
                    cout<<"2 : non"<<endl;
                    
                    
                    cin>>confirmationAchat;
                    iValid = 1 ;
                    while (iValid == 1)
                    {
                        if (cin.fail())
                        {
                            cin.clear();
                            cin.ignore();
                            cout<<"Erreur!"<<endl;
                            cin>>confirmationAchat;
                        }
                        else
                            iValid = 0;
                    }
                    
                    if(confirmationAchat==1)
                    {
                        j.supGold(a.getPrix());
                        
                        if(j.verifyAppat(idAppat)==1)
                        {
                            //if appat posseder = qtt +1
                            j.addQttAppat(idAppat);
                        }
                        else
                        {
                            //if appat non posseder = add appat au tab
                            j.addAppatTab(idAppat);
                        }
                    
                        cout<<"Haaa ca va en pêcher du poisson avec ca"<<endl;
                        cin.ignore();
                    }
                }
                else
                {
                    cout<<"Humm, malheureusment tu n'as pas assez"<<endl;
                    cin.ignore();
                }
            }
            break;
        }
        case 5:
        {
            Musee mj=j.getMusee();
            
            cout<<"C est donc le muse que tu veux agrandir ..."<<endl;
            cin.ignore();
            cout<<"Tu a un muse de taille :"<< mj.getTaille() << endl;
            cin.ignore();
            cout<<"C est 250 pieces pour 3 de taille suplementaire"<<endl;
            cin.ignore();
            
            //verif gold
            if(j.getGold()>=250)
            {
                
                cout<<"Ca t'interresse ??"<<endl;
                cin.ignore();
                cout<<"1 : oui"<<endl;
                cout<<"2 : non"<<endl;
                
                
                cin>>confirmationAchat;
                iValid = 1 ;
                while (iValid == 1)
                {
                        if (cin.fail())
                        {
                                cin.clear();
                                cin.ignore();
                                cout<<"Erreur!"<<endl;
                                cin>>confirmationAchat;
                        }
                        else
                                iValid = 0;
                }
                
                if(confirmationAchat==1)
                {
                    j.supGold(250);
                    mj.upTaille();
                    cout<<"Un beau muse est un grand muse !"<<endl;
                    cin.ignore();
                    j.addMusee(mj);
                }
                else
                {
                    cout<<"Tampis ..."<<endl;
                    cin.ignore();
                }
                
            }
            
            else
            {
                cout<<"Humm, malheureusment tu n'as pas assez"<<endl;
                cin.ignore();
            }

            break;
        }
            
        case 6:
        {
            Musee maj=j.getMusee();
            
            cout<<"Tu compte acheter un nouvel aquoirium ?"<<endl;
            cin.ignore();
            cout<<"Il te reste "<< (maj.getTaille()-maj.getnbAquoi())<<" place d'aquoirum "<< endl;
            cin.ignore();
            cout<<"Pour 50 pieces tu peux partir avec un aquoirium"<<endl;
            cin.ignore();
            
            //verif gold
            if( (maj.getTaille()-maj.getnbAquoi()) > 0 )
            {
                
            
            
            if(j.getGold()>=50)
            {
                
                cout<<"Ca t'interresse ??"<<endl;
                cin.ignore();
                cout<<"1 : oui"<<endl;
                cout<<"2 : non"<<endl;
                
                
                cin>>confirmationAchat;
                iValid = 1 ;
                while (iValid == 1)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore();
                        cout<<"Erreur!"<<endl;
                        cin>>confirmationAchat;
                    }
                    else
                        iValid = 0;
                }
                
                if(confirmationAchat==1)
                {
                    j.supGold(50);
                    maj.addAquoi();
                    cout<<"Un bon muse est un muse bien garnit !"<<endl;
                    cin.ignore();
                    
                    
                    j.addMusee(maj);
                }
                else
                {
                    cout<<"Tampis ..."<<endl;
                    cin.ignore();
                }
                
            }
            
            else
            {
                cout<<"Humm, malheureusment tu n'as pas assez"<<endl;
                cin.ignore();
            }
                
                
            }
            else
            {
                cout<<"Tu n'as plus de place dans ton musee ..."<<endl;
                cin.ignore();
            }

            break;
        }

        case 8:
        {
            cout<<"Tu es un développeur ! Combien d'argent veux-tu ?"<<endl;
            int argentSupp = 0;

            cin>>argentSupp;
            j.addGold(argentSupp);
            j.infoJoueur();

            break;
        }
        
        default:
        break;
    }
}

    return j;
}