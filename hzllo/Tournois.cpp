//
//  Tournois.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Tournois.hpp"
#include "Joueur.hpp"
#include <list>
#include "Canne.hpp"
#include "Bateau.hpp"
#include "Appat.hpp"
#include "Poisson.hpp"
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

#include <iostream>
using namespace std;

// constructeur
Tournois::Tournois()
{
    
}

void Tournois::getNameInfoTournois()
{
    cout<<"/// INFO TOURNOIS ///"<<endl;
    cout<<"Prix d'entre : "<< t_frais <<endl;
    cout<<"Type du tournois : "<< endl;
        if(t_typeTournois==1)
        {
            cout<<"Atrapez en un maximum !"<<endl<<endl;
        }
        else
        {
            cout<<"Atrapez le plus gros !"<<endl<<endl;
        }
    cout<<"Poisson du tounrois : "<< t_poisson.getNomPoisson() << endl;
    cout<<"La recompance est : "<< t_recGold <<" pieces" << endl;

    cout<<"/// Bonne chance ///"<<endl;
    cin.ignore();
}


void Tournois::payeTournois(Joueur j)
{
    j.supGold(t_frais);
}


void Tournois::testResultatPoid(Poisson p, Joueur j)
{
    int res=0;
    int place=0;
    
    int testIdA=0;
    int testIdB=0;
    
    int testPoidB=0;
    
    testIdA=p.getId();
    
    for(int i=0; i<j.getTailleTabTournois(); i++)
    {
        Poisson mp = j.getPoissonRes(i);
        testIdB=mp.getId();
        
        
        if(testIdA==testIdB)
        {
            testPoidB=mp.getPoidRand();
                if(res<testPoidB)
                {
                    res=testPoidB;
                }
        }
    }
    
    if(res<50)
    {
        place=0;
    }
    else if(res>69)
    {
        place=1;
    }
    else
    {
        srand((unsigned int)time(0));
        place= 1 + rand() % 2;
    }
    
    
    
    t_resultat=place;
}


void Tournois::testResultatNb(Poisson p,Joueur j)
{
    int res=0;
    int place=0;
    
    int testIdA=0;
    int testIdB=0;
    
    testIdA=p.getId();
    
    for(int i=0; i<j.getTailleTabTournois(); i++)
    {
        Poisson mp = j.getPoissonRes(i);
        testIdB=mp.getId();
        
        
        if(testIdA==testIdB)
        {
            res+=1;
        }
        
    }
    
    if(res<1)
    {
        place=0;
    }
    else if(res>1)
    {
        place=1;
    }
    else
    {
        srand((unsigned int)time(0));
        place= 1 + rand() % 2;
    }

    t_resultat=place;
}



int Tournois::getResultat()
{
    return t_resultat;
}

void Tournois::addRecGoldJoueur(Joueur j)
{
    j.addGold(t_recGold);
}

int Tournois::getFrais()
{
    int a=t_frais;
    return a;
}

void Tournois::addPoissonT(Poisson p)
{
    t_poisson=p;
}

void Tournois::addType(Monde m)
{
    m.randTypeTournois();
    t_typeTournois=m.getTypeTournois();
}

void Tournois::addFrais()
{
    t_frais=t_poisson.getPrix();
}


void Tournois::addRecGoldTournois(int place)
{
    if(place==1)
    {
         t_recGold=13*t_poisson.getPrix();
    }
    if(place==2)
    {
         t_recGold=7*t_poisson.getPrix();
    }
    if(place==3)
    {
         t_recGold=4*t_poisson.getPrix();
    }
   
}


void Tournois::addPoissonTab(Poisson p)
{
    t_tournoisTab.push_back(p);
}


Poisson Tournois::getPoissonRes(int a)
{
    Poisson mp = t_tournoisTab [a];
    return mp;
}

int Tournois::getTypeT()
{
    return t_typeTournois;
}

int Tournois::getRecGold()
{
    return t_recGold;
}
