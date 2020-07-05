//
//  Monde.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Monde.hpp"
#include "Poisson.hpp"
#include "Bateau.hpp"
#include "Joueur.hpp"
#include "Zone.hpp"
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>

Monde::Monde()
{
   m_jour=0;
   m_meteo=1;
   
   //tournois
   m_jourTournois=7;
   m_typeTournois=0;
}


string Monde::getNameMonde()
{
    return m_nom;
}

void Monde::addNomMonde(string a)
{
    m_nom=a;
}

void Monde::upJour()
{
    m_jour+=1;
}

void Monde::infoMonde()
{
    cout<<"//////////////////////////"<<endl;
    cout<<"Calandrier : jour n°"<< m_jour <<endl;
    cout<<"Meteo du jour : ";
    if(m_meteo==1)
    {
        cout<<"grand soleil !"<<endl;
    }
    if(m_meteo==2)
    {
        cout<<"nuageux"<<endl;
    }
    if(m_meteo==3)
    {
        cout<<"averse"<<endl;
    }
    if(m_meteo==4)
    {
        cout<<"pluie batante"<<endl;
    }
    cout<<"Prochain tournois : le "<< m_jourTournois << endl;
    cout<<"//////////////////////////"<<endl;
}

void Monde::randMeteo()
{
    srand((unsigned int)time(0));
    m_meteo= 1 + rand() % 3;
}

void Monde::randTypeTournois()
{
    srand((unsigned int)time(0));
    m_typeTournois=1+ rand() % 1;
}

void Monde::nextTournois()
{
    srand((unsigned int)time(0));
    m_jourTournois += 3;
    m_jourTournois += rand() % 7;
}

int Monde::getJourTournois()
{
   return m_jourTournois;
}

int Monde::getTypeTournois()
{
   return m_typeTournois;
}

int Monde::getmJour()
{
    return m_jour;
}


void Monde::selecPoissonT(Joueur j)
{
    Bateau batJ=j.useBat();

    int a=batJ.getZone();
    
    int zRand=1;
    
        if(batJ.getZone()==1)
        {
                zRand= a;
        }
        if(batJ.getZone()>1)
        {
                srand((int)time(0));
                zRand= 1+ rand() % 2;
        }
        if(batJ.getZone()>5)
           {
                   srand((int)time(0));
                   zRand= 1+ rand() % 3;
           }
        if(batJ.getZone()>12)
           {
                   srand((int)time(0));
                   zRand= 1+ rand() % 4;
           }
        if(batJ.getZone()>22)
           {
                   srand((int)time(0));
                   zRand= 1+ rand() % 5;
           }
    
    
    Zone z(zRand);
    
    int pRand;
    srand((int)time(0));
    pRand= 1 + rand() % 4;
    Poisson p=z.getPoisson(pRand);
 
    m_poissonT=p;
}

Poisson Monde::getPoissonTournois()
{
    return m_poissonT;
}

int Monde::getMeteoMonde()
{
    return m_meteo;
}


void Monde::changeJTournois()
{
    if(m_jour>m_jourTournois)
    {
        srand((unsigned int)time(0));
        m_jourTournois += 3;
        m_jourTournois += rand() % 7;
    }
}
