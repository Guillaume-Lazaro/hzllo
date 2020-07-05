//
//  Caractere.hpp
//  hzllo
//
//  Created by UNAL COLIN on 14/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Caractere_hpp
#define Caractere_hpp


#include <stdio.h>
#include <string>

class Caractere
{
    public:
    
    //constructeur
    Caractere();
    
    //methode
    std::string getName();
    int getId();
    
    //utilisation
    int tire();
    int fuit();
    int moue();
    
    
   

    private:

    //atribut
    int c_id;
    std::string c_nom;
    int c_forceRenv;
    int c_pvRenv;
    int c_vitRenv;
    
    
    
};


#endif /* Caractere_hpp */
