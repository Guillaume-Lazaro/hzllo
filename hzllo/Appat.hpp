//
//  Appat.hpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Appat_hpp
#define Appat_hpp

#include <stdio.h>
#include <string>

class Appat
{
    public:
    
    //constructeur
    Appat();
    Appat(int a);
    
    //methode
    std::string getName();
    int getPrix();
    int getNumP();
    int getZoneAppat();
    int getQtt();
    int getId();
    
    void addQtt();
    void getInfo();
    void supQtt();
    
   

    private:

    //atribut
    int a_id;
    int a_numP;
    std::string a_nom;
    int a_zone;
    int a_prix;
    int a_qtt;
    
};

#endif /* Appat_hpp */
