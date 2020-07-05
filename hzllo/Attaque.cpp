//
//  Attaque.cpp
//  hzllo
//
//  Created by UNAL COLIN on 15/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Attaque.hpp"
#include "foncombat.hpp"
#include "Poisson.hpp"
#include "Joueur.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


//constructeur attaque joueur
Attaque::Attaque(int a,Canne c)
{
    if(a==1)
        {
            a_nom="laisse de la moue";
            a_x=0;
            a_type=0;
        }
    
    if(a==2)
        {
            a_nom="fatigue";
            a_x=c.getForce();
            a_type=1;
        }
    
    if(a==3)
        {
            a_nom="mouline";
            a_x=c.getVit();
            a_type=2;
        }
    
    if(a==4)
        {
            a_nom="tante de sortir le poisson";
            a_x=c.getForce()+c.getVit();
            a_type=3;
        }
}

 
 
 
 


//constructeur attaque poisson
 
Attaque::Attaque(int a,Poisson p)
{
    
    if(a==1)
    {
        a_type=p.getType();
    
        if(a_type==1)
        {
            a_nom="tire";
            a_x=p.getForce();
        }
    
        if(a_type==2)
        {
            a_nom="tente de s'echaper";
            a_x=p.getVit();
        }
 
 
 
 
        if(a_type==3)
        {
            srand((unsigned int)time(0));
            a_type= 1 + rand() % 2;
            
 
            if(a_type == 1)
                {
                    a_nom="tire";
                    a_x=p.getForce();
                }
            
            if(a_type ==2)
                {
                    a_nom="tente de s'echaper";
                    a_x=p.getVit();
                }
            
        }
    }
    
    else if(a==2)
    {
        a_nom="laisse de la moue";
        a_x=0;
        a_type=0;
    }
 
 
 
}


//destructeur

Attaque::~Attaque()
{
   
}



//methodes
int Attaque::getType()
{
    return a_type;
}
int Attaque::getX()
{
    return a_x;
}
std::string Attaque::getNom()
{
    return a_nom;
}
