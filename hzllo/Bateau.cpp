//
//  Bateau.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Bateau.hpp"
#include <iostream>
using namespace std;


Bateau::Bateau()
{
    b_id=1;
    b_nom="Barque";
    
    //possession
    b_find=true;
    //zone possible
    b_forceZone=1;
}

Bateau::Bateau(int a)
{
    b_id=a;
    b_nom="Barque";
    
    //possession
    b_find=true;
    //zone possible
    b_forceZone=a*a;
    b_prix=a*a*a*a*a;
}

int Bateau::getId()
{
    return b_id;
}

int Bateau::getPrix()
{
    return b_prix;
}

int Bateau::getZone()
{
    return b_forceZone;
}



Bateau::~Bateau()
{
   
}
