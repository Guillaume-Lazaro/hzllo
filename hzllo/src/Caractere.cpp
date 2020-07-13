//
//  Caractere.cpp
//  hzllo
//
//  Created by UNAL COLIN on 14/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Caractere.hpp"
#include <iostream>
using namespace std;


Caractere::Caractere()
{
    
}

string Caractere::getName()
{
    return c_nom;
}

int Caractere::getId()
{
    return c_id;
}


//utilisation
int Caractere::tire()
{
    return c_forceRenv;
}

int Caractere::fuit()
{
    return c_vitRenv;
}

int Caractere::moue()
{
    return c_pvRenv;
}

