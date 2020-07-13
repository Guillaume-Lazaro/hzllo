//
//  Bateau.hpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Bateau_hpp
#define Bateau_hpp

#include <stdio.h>
#include <string>

class Bateau
{
    public:
    
    //constructeur
    Bateau();
    Bateau(int a);
    
    
    //destructeur
    ~Bateau();
    
    //methode
    std::string getName();
    int getPrix();
    int getZone();
    int getId();
    
   
    private:

    //atribut
    int b_id;
    std::string b_nom;
    int b_prix;
    
    //possession
    bool b_find;
    
    //zone possible
    int b_forceZone;
    
};

#endif /* Bateau_hpp */
