//
//  Muse.hpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Muse_hpp
#define Muse_hpp

#include <stdio.h>
#include <string>
#include <list>
#include <vector>
#include "Aquoi.hpp"
#include "Poisson.hpp"

class Muse
{
    public:
    
    //constructeur
    Muse();
    
    //methode
    int getnbAquoi();
    int getGoldJourTotal();
    
    void addAquoi();
    void modifGoldJourTotal();
    void upTaille();
    
    int addPoissonMuse(Poisson p);
    int getTaille();
    
    void showMuse();
    
    void modiAquoi(int i, Aquoi a);
    
   
    private:

    //atribut
    std::vector<Aquoi> m_aquoi;
    int m_taille;
    int m_nbAquoi;
    int m_goldJourTotal;
    
    
};

#endif /* Muse_hpp */
