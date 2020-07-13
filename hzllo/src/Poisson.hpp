//
//  Poisson.hpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Poisson_hpp
#define Poisson_hpp

#include <stdio.h>

#include <string>

class Poisson
{
    public:
    
    //constructueyr
    Poisson();
    Poisson(int a, int z);
    
    //destructeur
    ~Poisson();
    
    //avantg fight
    bool testMeteo();
    bool testApat();
    
    
    //fight
    bool esPechable(int a);
    void prendVie(int a);
    void prendDegat(int a);
    void perdForce(int a);
    void perdVit(int a);
    
    void capture();
    bool getCapture();
    
    int getForceMax();
    int getForce();
    int getPv();
    int getPvMax();
    void pvOrigine();
    int getVit();
    int getVitMax();
    int getCaractere();
    int getPrix();
    int getType();
    int getRegen();
    int getZone();
    int getId();
    int getResist();
    
    int getMeteo();
    
    //after fight
    std::string getNomPoisson();
    void calculPoid();
    void calculPrix();
    int goPokedex();
    int goAquoirium();
    int getPoid();
    
    int getPoidRand();
    
    void getInfo(Poisson p,int a);
    


    
    
    
    
    
    private:

    //definition
    int p_tailleAquoi;
    int p_numPokedex;
    int p_zonePeche;
    int p_poidBase;
    int p_gold;
    int p_prixReprod;
    
    std::string p_nomPoisson;
    int p_meteo;
    
    //combat
    int p_pvMax;
    int p_pvCombat;
    
    int p_forceMax;
    int p_forceCombat;
    
    int p_vitMax;
    int p_vitCombat;
    
    bool p_pechable;
    bool p_captur;
    
    int p_caractere;
    int p_type;
    
    int p_regen;
    int p_resist;
    
    //Fin combat
    int p_goldTotal;
    int p_poidRand;
    int p_goldRand;
    
    
};

#endif /* Poisson_hpp */
