//
//  Canne.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Canne.hpp"
#include <iostream>
using namespace std;

Canne::Canne()
{
   c_id=1;
   std::string c_nom="canne rudimentaire";
   //possession
   c_find=true;
   //combat
   c_force=6;
   c_vit=5;
}

Canne::Canne(int a,int b)
{
    c_id=a*b;
    //combat
    c_prix=4*a*b*a*b*a*b;
    c_force=4*a*a;
    c_vit=3*b*b;
}

//destructeur
Canne::~Canne() { }

int Canne::getForce()
{
    return c_force;
}

int Canne::getPrix()
{
    return c_prix;
}

int Canne::getVit()
{
    return c_vit;
}

int Canne::getId()
{
    return c_id;
}