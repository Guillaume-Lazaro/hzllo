//
//  Joueur.hpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#ifndef Joueur_hpp
#define Joueur_hpp

#include <stdio.h>
#include <string>
#include <list>
#include <vector>
#include "Canne.hpp"
#include "Bateau.hpp"
#include "Appat.hpp"
#include "Poisson.hpp"
#include "Muse.hpp"


class Joueur
{
    public:
    
    //constructeur
    Joueur();
    
    //methode
    std::string getName();
    void infoJoueur();
    void parcourAppat();
    
    void parcourPokedex();
    void addPokedex(Poisson p);
    Poisson selecPoisson(int a);
    
    //combat
    Canne useCanneV();
    Canne useCanneF();
    Bateau useBat();
    
    //magasin et vente poisson
    float getGold();
    void addGold(float a);
    void supGold(float a);
    
    void addNomJoueur(std::string a);
    void addCanneF(Canne f);
    void addCanneV(Canne v);
    void upBateau(Bateau b);
    
    
    
    
    Poisson getPoissonPoke(int a);
    void addPoissonPoke(Poisson p);
    void parcoutDex();
    int tailTab();
    int verifyDex(Poisson p);
    
    
    Poisson getPoissonRes(int a);
    

    void addPoissonTab(Poisson p);


    int getTailleTabTournois();
    
    void supPoissonTournois();


    
    
    
    void addAppatTab(int id);

    int getTailleTabAppat();

    void supAppat();
    
    void addQttAppat(int id);
    
    int verifyAppat(int id);

    void listZoneAppat(int zone);
    
    int supQttAppat(int id);
    
    
    
    Muse getMuse();
    
    void addMuse(Muse m);
    
    
    
    
    
    
    
    
   
    private:

    //atribut
    std::string j_nom;
    float j_gold;
    
    Canne canneF;
    Canne canneV;
    Bateau j_bateau;
    Muse j_muse;
    
    //Tournois j_tournois;
    
    std::list <Poisson> j_pokedex;
    
    std::vector <Poisson> j_captureTab;
    
    std::vector <Poisson> j_tournoisTab;
    
    std::vector <Appat> j_appatTab;
    /*
    std::list <Appat> j_listeAppat;

    
    */

    
    
};


#endif /* Joueur_hpp */
