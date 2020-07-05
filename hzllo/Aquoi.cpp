//
//  Aquoi.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Aquoi.hpp"
#include "Poisson.hpp"
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;



//constructeur
Aquoi::Aquoi()
{
    a_numPokePoisson=0;
}


//methode

int Aquoi::addP(Poisson p)
{
    int done=0;
    a_poisson.push_back(p);
    done=1;
    return done;
}




int Aquoi::addPoisson1(Poisson p)
{
    int done=0;
    
    //add poisson 1er aquoi vide
    if(a_poisson.empty()==true)
    {
        a_poisson.push_back(p);
        done=1;
        
    }
    return done;
}
    


int Aquoi::addPoisson2(Poisson p)
{
    int done=0;
    //add 2eme poissons
    if(a_poisson.size()==1)
    {
        Poisson mp=a_poisson[0];
        int id=mp.getId();
        
        if(p.getId()==id)
        {
            a_poisson.push_back(p);
            done=1;
        }
    }
    return done;
}
/*
void Aquoi::addPoisson(Poisson p)
{
    
    
    //add poisson 1er aquoi vide
    if(a_poisson.size()==0)
    {
        a_poisson.push_back(p);
    }
    
    
    
    //add 2eme poissons
    else if(a_poisson.size()==1)
    {
        Poisson mp=a_poisson[0];
        int id=mp.getId();
        
        if(p.getId()==id)
        {
            a_poisson.push_back(p);
        }
    }
    
}
*/


void Aquoi::modifGoldJour()
{
    if(a_poisson.size()==2)
    {
        Poisson mp=a_poisson[1];
        a_goldJour=mp.getPrix();
    }
    else
    {
        a_goldJour=0;
    }
}



int Aquoi::getGoldJour()
{
    return a_goldJour;
}


int Aquoi::getNumPoisson()
{
    int id=0;
    
    if(a_poisson.size()>0)
        {
            Poisson mp =a_poisson[0];
            id=mp.getId();
        }
    
    return id;
}


int Aquoi::getQtt()
{
    return a_poisson.size();
}

string Aquoi::getNomPoissonA()
{
    string nom;
    if(a_poisson.size()>0)
    {
    Poisson mp=a_poisson[0];
    nom = mp.getNomPoisson();
    }
    return nom;
}

bool Aquoi::testVide()
{
    bool testVide;
    testVide=a_poisson.empty();
    return testVide;
}
