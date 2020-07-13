//
//  Canne.hpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Canne_hpp
#define Canne_hpp

#include <stdio.h>
#include <string>

class Canne
{
    public:
    
    //constructeur
    Canne();
    Canne(int a, int b);
    
    //destructeur
    ~Canne();
    
    //methode
    std::string getName();
    int getPrix();
    int getForce();
    int getVit();
    int getId();
    
    private:

    //atribut
    int c_id;
    std::string c_nom;
    int c_prix;
    
    //possession
    bool c_find;
    
    //combat
    int c_force;
    int c_vit;
};
#endif /* Canne_hpp */
