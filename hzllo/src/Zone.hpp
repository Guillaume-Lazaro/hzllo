//
//  Zone.hpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Zone_hpp
#define Zone_hpp

#include <stdio.h>
#include <string>
#include <list>
#include <vector>


#include "Poisson.hpp"


class Zone
{
    public:
    
    //constructeur
    Zone();
    Zone(int z);
    
    //methode

    std::list <Poisson> lectList();
    
    
    std::string getName();
    
    void addPoisson(int numZone);
    Poisson getPoisson(int pRand);
    int getZone();
    
   
    private:

    //atribut
    std::list<Poisson> z_listPoisson;
    std::vector<Poisson> z_poissonTab;
    std::string z_nomZone;
    
    int z_forceZone;
    
    
};

#endif /* Zone_hpp */
