//
//  Monde.hpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Monde_hpp
#define Monde_hpp

#include <stdio.h>
#include <string>
#include "Poisson.hpp"
#include "Bateau.hpp"
#include "Joueur.hpp"

class Monde
{
    public:
    
    //constructeur
    Monde();
    
    //methode
    std::string getNameMonde();
    void addNomMonde(std::string a);
    void upJour();
    void infoMonde();
    void randMeteo();
    int getJourTournois();
    int getTypeTournois();
    int getmJour();
    int getMeteoMonde();
    void randTypeTournois();
    void nextTournois();
    
    void selecPoissonT(Joueur j);
    Poisson getPoissonTournois();
    
    void changeJTournois();
    
   
    private:

    //atribut
    int m_jour;
    std::string m_nom;
    int m_meteo;
    
    //tournois
    int m_jourTournois;
    int m_typeTournois;
    Poisson m_poissonT;
    
};

#endif /* Monde_hpp */
