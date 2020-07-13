//
//  Aquoi.hpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Aquoi_hpp
#define Aquoi_hpp

#include <stdio.h>
#include <string>
#include <list>
#include <vector>
#include "Poisson.hpp"

class Aquoi
{
    public:
    
    //constructeur
    Aquoi();
    
    //methode
    int getQtt();
    int getNumPoisson();
    int getGoldJour();
    
    void activReprod();
    
    
    // void addPoisson(Poisson p);
    int addPoisson1(Poisson p);
    int addPoisson2(Poisson p);
    
    void modifGoldJour();
    void addNumPoisson();
    std::string getNomPoissonA();
    void addAquoi(Aquoi a);
    
    int addP(Poisson p);
    bool testVide();
    
   
    private:

    //atribut
    std::vector<Poisson> a_poisson ;
    int a_taille;
    int a_numPokePoisson;
    int a_qtt;
    bool a_reprod;
    int a_goldJour;
    
    
};

#endif /* Aquoi_hpp */
