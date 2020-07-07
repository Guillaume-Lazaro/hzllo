//
//  foncTournois.cpp
//  hzllo
//
//  Created by UNAL COLIN on 18/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "foncTournois.hpp"
#include "Monde.hpp"
#include "Poisson.hpp"
#include "Bateau.hpp"
#include "Joueur.hpp"
#include "Zone.hpp"
#include "Appat.hpp"
#include "Tournois.hpp"
#include "foncombat.hpp"
#include "magasin.hpp"
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>


Joueur eventTournois (Monde m, Joueur j)
{
    
    cout << "Bienvenu au tournois hebdomadaire !"<<endl;
    cin.ignore();
    
    cout << "Voici les infos du tournois :"<<endl;
    cin.ignore();
    
    
    Tournois t;
    int tournois=1;
    int resultatTournois=0;
    int participation=0;
    int mag=0;
    int iValid;
    
    m.selecPoissonT(j);
    
    t.addPoissonT(m.getPoissonTournois());
    t.addType(m);
    t.addFrais();
    t.addRecGoldTournois(1);
    
    t.getNameInfoTournois();
    
    cout << "Passer au magasin avant le tournois ?"<<endl;
     cout << "1 : oui"<<endl;
     cout << "2 : non"<<endl;
    
    
    
    
    cin>>mag;
    
    iValid = 1 ;
    while (iValid == 1)
    {
            if (cin.fail())
            {
                    cin.clear();
                    cin.ignore();
                    cout<<"Erreur!"<<endl;
                    cin>>mag;
            }
            else
                    iValid = 0;
    }
    
    
    
    
    if(mag==1)
    {
        j=magasin(j);
    }
    
    
    cout << "Voulez vous participez AU TOURNOIS ?"<<endl;
    cin.ignore();
    cout << "1 : oui"<<endl;
    cout << "2 : non"<<endl;
    
    
    
    cin>>participation;
    iValid = 1 ;
    while (iValid == 1)
    {
            if (cin.fail())
            {
                    cin.clear();
                    cin.ignore();
                    cout<<"Erreur!"<<endl;
                    cin>>participation;
            }
            else
                    iValid = 0;
    }
    
    
    
    if(j.getGold()<t.getFrais())
    {
        cout << "Ha mais t'as pas assez de thune"<<endl;
        cin.ignore();
        participation=2;
    }
    
    if(participation==1)
    {
    
    t.payeTournois(j);
    cout << "Ok super !!!!"<<endl;
    cin.ignore();
        
    cout << "Que le tournois COMMANCE !!!"<<endl;
    cin.ignore();
        
    cout << "1ere tentative !"<<endl;
    cin.ignore();
    
    j=combat(j,tournois,m);
    
    
    cout << "2eme tentative !"<<endl;
    cin.ignore();
    
    j=combat(j,tournois,m);
    
    
    cout << "3eme tentative !"<<endl;
    cin.ignore();
    
    j=combat(j,tournois,m);
    
    
    
    
    
    
    if(t.getTypeT()==1)
    {
        t.testResultatNb(m.getPoissonTournois(), j);
        resultatTournois=t.getResultat();

    }
    else
    {
        t.testResultatPoid(m.getPoissonTournois(), j);
        resultatTournois=t.getResultat();

    }
    
    
    cout<<endl << "Recuperation des scores de tout les participants ..."<<endl;
    cin.ignore();
        cout<<endl << "........................"<<endl;
        cin.ignore();
        cout<<endl << "Le jury fais signe de s'avancer, ils va annoncer le resultat :"<<endl;
        cin.ignore();
        
        
        
    if(t.getResultat()==0)
    {
        cout << "Dommage, vous n'etes pas sur le podium ..."<<endl;
        cin.ignore();
    }
    if(t.getResultat()==1)
    {
        cout<<endl << "Bravo ! Vous etes arrive 1er !!!"<<endl;
        cin.ignore();
    }
    if(t.getResultat()==2)
    {
        cout << "Bravo ! Vous etes arrive 2eme !!!"<<endl;
        cin.ignore();
    }
    if(t.getResultat()==3)
    {
        cout << "Bravo ! Vous etes arrive 3eme !!!"<<endl;
        cin.ignore();
    }
        
        
        cout << "Voici votre recompance : "<<endl;
        
        t.addRecGoldTournois(t.getResultat());
        t.addRecGoldJoueur(j);
        cout << t.getRecGold()<<endl;
        cin.ignore();
        
        
        
        
        
        //add appat si 1er
        int randAppat=0;
        
        if(t.getResultat()==1)
        {
            cout<<endl << "Comme tu est arrive 1er, tu a un cado surpise"<<endl;
            cin.ignore();
            srand((int)time(0));
            randAppat= 1 + rand() % 4;
            
            switch (randAppat)
            {
                case 1 :
                {
                    randAppat=5;
                    break;
                    }
                    
                    case 2 :
                {
                    randAppat=10;
                    break;
                    }
                    
                    case 3 :
                {
                    randAppat=15;
                    break;
                    }
                    
                    case 4 :
                {
                    randAppat=20;
                    break;
                    }
                    
                    case 5 :
                {
                    randAppat=25;
                    break;
                    }
            }
            
            
            
            if(j.verifyAppat(randAppat)==1)
                           {
                               //if appat posseder = qtt +1
                               j.addQttAppat(randAppat);
                           }
                   else
                           {
                               //if appat non posseder = add appat au tab
                               j.addAppatTab(randAppat);
                           }
            cout << "L'appat en question est :"<<endl;
            cin.ignore();
            Appat a(randAppat);
            a.getInfo();
            
        }
 
    }
    
    else
    {
       cout << "Dommage, ça serra pour la prochaine fois ! "<<endl;
       cin.ignore();
    }
    
    
    
    //vide le tableau des poisson capturer du tournois
    for(int i=0; i<j.getTailleTabTournois(); i++)
    {
        j.supPoissonTournois();
    }
    return j;
    
}
