//
//  Perso.hpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Perso_hpp
#define Perso_hpp

#include <stdio.h>

#include <string>

class Personnage
{
    public:
    Personnage();
    void recevoirDegats(int nbDegats);
    bool estVivant();

    private:

    int m_vie;
    
};

#endif /* Perso_hpp */
