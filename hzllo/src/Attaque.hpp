//
//  Attaque.hpp
//  hzllo
//
//  Created by UNAL COLIN on 15/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Attaque_hpp
#define Attaque_hpp

#include <stdio.h>
#include <string>
#include <list>
#include "Poisson.hpp"
#include "Joueur.hpp"



class Attaque
{
    public:
    
    //constructeur
 
    Attaque(int a,Canne c);
    
    Attaque(int a,Poisson p);
    
    //destructeur
    
     ~Attaque();
    
    
    //methode
    int getType();
    int getX();
    std::string getNom();
    
    
   
    private:

    //atribut
    int a_type;
    int a_x;
    std::string a_nom;
    int a_randType;
    
    
    
};

#endif /* Attaque_hpp */
