//
//  main.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include <iostream>
using namespace std;
#include "fonc.hpp"
#include "foncombat.hpp"
#include "Perso.hpp"
#include "Joueur.hpp"
#include "Monde.hpp"
#include "Canne.hpp"
#include "Poisson.hpp"
#include "magasin.hpp"
#include "pokedex.hpp"
#include "foncTournois.hpp"

int main() {

    //initialisation var et obj
    Monde monde;
    Joueur player;
    Canne canne;
    Musee muse;
    player.addCanneF(canne);
    player.addCanneV(canne);
    player.addMusee(muse);
    
    Musee mTempo;
    
    bool invalidInput;
    
    string nomMonde;
    string nomJoueur;
    
    int choiAction=0;
    int goldJ=0;
    player.setDev(true);
    
    // intro
    if (player.getDev()==false)
        introTexte();
    
    ////TESTS
    // creation monde
    if (player.getDev()==false)
    {
        creatMondeTexte();
        cin >> nomMonde;
        monde.addNomMonde(nomMonde);    //setter
    }
    else 
        monde.addNomMonde("test");

    //creation joueur
    if (player.getDev()==false)
    {
        creatJoueurtexte();
        cin >> nomJoueur;
        player.addNomJoueur(nomJoueur); //setter
    }
    else
        player.addNomJoueur("testeur");

    if (player.getDev()==false)
        creatJoueurtexteFin();
    
    //Debut du jeux !!!
    bool exit=false;
    while(exit!=true) {
        // invalidInput = 1 ;   //Inutile -> refacto controle input 
        
        //Intro donc pas à placer ici
        mTempo=player.getMusee();
        mTempo.modifGoldJourTotal();
        goldJ=mTempo.getGoldJourTotal();
        player.addGold(goldJ);  //setter
        
        
        monde.upJour();
        monde.randMeteo();
        monde.changeJTournois();
        
        texteMenu(monde,player);

        //Vérif erreur ==> à refacto ?
        cin>>choiAction;
        invalidInput = true;
        while (invalidInput == true) {
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                cout<<"Erreur de frappe ducon!"<<endl;
                cin>>choiAction;
            } else {
                invalidInput = false;
            }
        }
        
        switch (choiAction) {
            case 1: {
                int t=0;
                player=combat(player,t,monde);
                break;
            }
                
            case 2: {
                pokedex(player);
                break;
            }
                
            case 3: {
                player=magasin(player);
                break;
            }
                
            case 4: {
                mTempo.showMusee();
                break;
            }
                
            case 5: {
                eventTournois (monde, player);
                break;
            }
                
            case 6:
                exit=true;
                break;
            
            default:
                break;
            
        }
    }
    
    //Texte de sortie + fermeture programme
    exittexte();
    return 0;
}
