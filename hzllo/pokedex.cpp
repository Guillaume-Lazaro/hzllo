//
//  pokedex.cpp
//  hzllo
//
//  Created by UNAL COLIN on 16/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "pokedex.hpp"
#include "Poisson.hpp"
#include "Joueur.hpp"
#include <iostream>
using namespace std;

void pokedex(Joueur j)
{
    cout<<"----- POISSONDEX -----"<<endl<<endl;
    
    int iValid;
    int choiDex=0;
    int exit=0;
    
    while(exit==0)
    {
        cout<<"1 : Universitee des pecheurs"<<endl;
        cout<<"2 : Universitee des poissons"<<endl;
        cout<<"3 : Les zones"<<endl;
        cout<<"4 : Poissondex"<<endl;
        cout<<"5 : Retour a la cabane"<<endl;
        
        cin>>choiDex;
                
        iValid = 1 ;
        while (iValid == 1)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout<<"Erreur!"<<endl;
                cin>>choiDex;
            }
            else
                iValid = 0;
        }
        
        if(choiDex==1)
        {
            cout<<endl<<"Bienvenu a l'universsitee des pecheur !"<<endl;
            cin.ignore();
            cout<<"Presentation des differentes technique de peche"<<endl;
            cin.ignore();
            
            cout<<"Tres important, avant tout :"<<endl;
            cin.ignore();
            cout<<"Il est primordial d'annaliser le caractere et le type du poisson !"<<endl;
            cin.ignore();
            
            
            cout<<"1 : l'action l'aisser du moue :"<<endl;
            cout<<"Le but est de pouvoir annaliser le comportement du poisson"<<endl;
            cout<<"aillant pour objectif de l'annaliser"<<endl;
            cout<<"Si le poisson se debat pendant cette phase, il se fatigue"<<endl;
            cout<<"se qui est a votre avantage"<<endl<<endl;
            cin.ignore();
            
            cout<<"2 : l'action fatiguer le poisson :"<<endl;
            cout<<"Le but est de pouvoir utiliser la force"<<endl;
            cout<<"cette technique le fatigue"<<endl;
            cout<<"et elle a un aspect cacher :"<<endl;
            cout<<"elle permet de diminuer la force du poisson en plus de sa fatique"<<endl<<endl;
            cin.ignore();
            
            cout<<"3 : l'action mouliner :"<<endl;
            cout<<"Le but est d'etre plus rapide que la cible'"<<endl;
            cout<<"cette technique le fatigue"<<endl;
            cout<<"et elle a un aspect cacher :"<<endl;
            cout<<"elle permet de diminuer sa vitesse en plus de sa fatique"<<endl<<endl;
            cin.ignore();
            
            cout<<"4 : l'action Capturer :"<<endl;
            cout<<"Le but est d'atraper la cible'"<<endl;
            cout<<"cette technique est quit ou double"<<endl;
            cout<<"au moindre echec le poisson sechape"<<endl;
            cout<<"elle est calculer sur la force + la vitesse de votre canne"<<endl<<endl;
            cin.ignore();
            
            
        }
        if(choiDex==2)
        {
            cout<<endl<<"Bienvenu a l'universsitee des poissons !"<<endl;
            cin.ignore();
            cout<<"Presentation des differentes abilitees des Poissons"<<endl;
            cin.ignore();
            
            cout<<"Tres IMPORTANT :"<<endl;
            cin.ignore();
            cout<<"Les poissons ont different caractere"<<endl;
            cin.ignore();
            cout<<"Et ont different type (vitesse ou force)"<<endl;
            cin.ignore();
            cout<<"leurs type est caracterisee par les actions qu'ils effectuent"<<endl;
            cin.ignore();
            cout<<"Le caractere est plus complexe a saisir"<<endl;
            cout<<"le caractere represente le choi entre : "<<endl;
            cout<<"Laisser du moue ou faire son action type"<<endl;
            cin.ignore();
            cout<<"Attention il y a une autre caracteristique liee au caractere :"<<endl;
            cout<<"C est un multiplicateur pour son action qui peut etre :"<<endl;
            cin.ignore();
            cout<<"Stable"<<endl;
            cout<<"Crechendo"<<endl;
            cout<<"Decrechendo"<<endl;
            cout<<"Lunatique(sinusoidal)"<<endl;
            cin.ignore();
            
            cout<<"il est primordial d'annaliser le caractere et le type du poisson !"<<endl;
            cin.ignore();
            
            
            cout<<"1 : l'action l'aisser du moue :"<<endl;
            cout<<"Le poisson recupere et se repose"<<endl;
            cout<<"il ellimine un peu de fatigue"<<endl;
            cout<<"C est le moment ou il est le plus vulnerable"<<endl;
            cout<<"se qui est a votre avantage"<<endl<<endl;
            cin.ignore();
            
            cout<<"2 : l'action Tirer du poisson :"<<endl;
            cout<<"il essait de se degager par la force"<<endl;
            cout<<"cette technique le fatigue"<<endl;
            cout<<"il a beaucoup de chance de sechaper si"<<endl;
            cout<<"vous utilisez la force vous aussi !"<<endl<<endl;
            cin.ignore();
            
            cout<<"3 : l'action echapatoire :"<<endl;
            cout<<"son but est d'utiliser la vitesse pour s'enfuir'"<<endl;
            cout<<"cette technique le fatigue"<<endl;
            cout<<"Si vous tentez de mouliner,"<<endl;
            cout<<"le poisson aura de grande chance de s'echaper !"<<endl<<endl;
            cin.ignore();
        }
            
            
        if(choiDex==3)
        {
            cout<<endl<<"Il existe differentes zone dans le jeu"<<endl;
            cin.ignore();
            cout<<"Elles sont accessibles avec de nouveau bateau"<<endl;
            cin.ignore();
            cout<<"il existe des zone specialisés"<<endl;
            cout<<"Des zones ou les poissons sont tous fort"<<endl;
            cout<<"Et d'autre ou ils sont tous rapide"<<endl;
            cin.ignore();
            cout<<"voici la liste des zone"<<endl;
            cin.ignore();
            
            cout<<"1 : La mare de votre grand pere"<<endl;
            cout<<"2 : le ruisseau"<<endl;
            cout<<"3 : L'étang des Delacroix"<<endl;
            cout<<"4 : Le lac de St Criquet"<<endl;
            cout<<"5 : La riviere Testompe"<<endl;
            cout<<"6 : L'estuaire Sampont"<<endl;
            cin.ignore();
            
            cout<<"A vous de les decouvrir !"<<endl;
            cin.ignore();
        }
        
        if(choiDex==4)
        {
            cout<<endl<<"Voici la liste de tout poissons que vous avez capturer :"<<endl<<endl;
            cin.ignore();
            
            for(int i=0; i<j.tailTab(); i++)
            {
                Poisson poke = j.getPoissonPoke(i);
                
                if(poke.getCapture()==true)
                {
                poke.getInfo(poke,i);
                }
                
            }
            
            //j.parcourPokedex();
            cin.ignore();
        }
            
        if(choiDex==5)
        {
            cout<<endl<<"Vous avez choisi de sortir du PoissonDex"<<endl<<endl;
            cin.ignore();
            exit=1;
        }
    }
    
    //liste tout les poissons decouvert (dans joueur)
    // parcour liste trier par ID (??? pour les inconues)

    //info sur un poisson decouvert en particulier
    // p.getInfo(id);
    
}
