//
//  Zone.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Zone.hpp"
#include "Poisson.hpp"
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include "Joueur.hpp"
#include <list>

#include <vector>



//constructeur base

Zone::Zone()
{
    
}

Zone::Zone(int z)
{
    
    z_forceZone=z;
    
    for(int i=1; i<6;i++)
    {
        Poisson p(i,z);
        z_poissonTab.push_back(p);
    }
    
    if(z==1)
    {
        z_nomZone="La mare de votre grand pere";
    }
    if(z==2)
    {
        z_nomZone="le ruisseau";
    }
    if(z==3)
    {
        z_nomZone="L'étang des Delacroix";
    }
    if(z==4)
    {
        z_nomZone="Le lac de St Criquet";
    }
    if(z==5)
    {
        z_nomZone="La riviere Testompe";
    }
    if(z==6)
    {
        z_nomZone="L'estuaire Sampont";
    }
}

//contructeur surcharge



list <Poisson> Zone::lectList()
{
    return z_listPoisson;
}





//tab poisson par zone (5max)
void Zone::addPoisson(int numZone)
{
    for(int i=1; i<6;i++)
    {
        Poisson p(i,numZone);
        z_poissonTab.push_back(p);
    }
}


string Zone::getName()
{
    return z_nomZone;
}



Poisson Zone::getPoisson(int pRand)
{
    Poisson p = z_poissonTab [pRand];
    return p;
}

int Zone::getZone()
{
    return z_forceZone;
}
