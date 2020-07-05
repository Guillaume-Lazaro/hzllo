//
//  Tournois.hpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Tournois_hpp
#define Tournois_hpp

#include <stdio.h>
#include "Tournois.hpp"
#include "Joueur.hpp"
#include <list>
#include "Canne.hpp"
#include "Bateau.hpp"
#include "Appat.hpp"
#include "Monde.hpp"
#include "Poisson.hpp"
#include <vector>
#include <string>

#include <iostream>

class Tournois
{
    public:
    
    //constructeur
    Tournois();
    
    //methode
    std::string getNameTournois();
    void getNameInfoTournois();
    
    void payeTournois(Joueur j);
    void testResultatNb(Poisson p,Joueur j);
    void testResultatPoid(Poisson p,Joueur j);
    void addRecGoldJoueur(Joueur j);
    
    int getFrais();
    int getRecGold();
    
    void addPoissonT(Poisson p);
    void addType(Monde m);
    void addFrais();
    
    void addRecGoldTournois(int place);
    
    
    
    int getResultat();
    
   
    void addPoissonTab(Poisson p);
    Poisson getPoissonRes(int a);
    
    int getTypeT();
    
    
    
    private:

    //atribut
    int t_frais;
    std::string t_nomTournois;

    
    //poid / ou type
    int t_typeTournois;
    
    Poisson t_poisson;
    
    int t_poidTournois;
    
    int t_recGold;
    
    // Appat t_recAppat;
    
    int t_resultat;
    
    std::vector <Poisson> t_tournoisTab;

    
};

#endif /* Tournois_hpp */
