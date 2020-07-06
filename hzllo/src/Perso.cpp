//
//  Perso.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//
#include <iostream>
using namespace std;
#include "Perso.hpp"

Personnage::Personnage()
{
    m_vie = 100;
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage
    
    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

bool Personnage::estVivant()
{
    if (m_vie > 0) //Plus de 0 de vie ?
    {
        cout<<"toujour vivant "<< endl;
        
        return true; //VRAI, il est vivant !
    }
    else
    {
        cout<<"mort "<< endl;
        return false; //FAUX, il n'est plus vivant !
    }
}
