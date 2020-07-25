//
//  Joueur.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Joueur.hpp"
#include <list>
#include "Canne.hpp"
#include "Bateau.hpp"
#include "Appat.hpp"
#include "Poisson.hpp"
#include <vector>

#include <iostream>
using namespace std;


Joueur::Joueur()
{
    j_gold=5;
    Bateau j_bateau;
    j_dev = false;
}


void Joueur::addNomJoueur(std::string a)
{
    j_nom=a;
}

string Joueur::getName()
{
    return j_nom;
}

void Joueur::infoJoueur()
{
    cout<<"//////////////////////////"<<endl;
    cout<<"Portefeuille : "<< j_gold <<endl;
    cout<<"Nom du joueur : "<< j_nom <<endl;
    cout<<"votre bateau : " << endl;
    cout<<"liste des cannes : " << endl;
    cout<<"listes des appats : " << endl;
    cout<<"//////////////////////////"<<endl;
    cin.ignore();
}

//magasin et vente poisson
float Joueur::getGold()
{
    return j_gold;
}
void Joueur::addGold(float a)
{
    j_gold+=a;
}
void Joueur::supGold(float a)
{
   j_gold-=a;
}

void Joueur::addCanneF(Canne f)
{
    canneF=f;
}
void Joueur::addCanneV(Canne v)
{
    canneV=v;
}
void Joueur::upBateau(Bateau b)
{
   j_bateau=b;
}




//combat
Canne Joueur::useCanneV()
{
    return canneV;
}
Canne Joueur::useCanneF()
{
    return canneF;
}
Bateau Joueur::useBat()
{
    return j_bateau;
}


void Joueur::addPokedex(Poisson p)
{
    j_pokedex.push_front(p);
}

void Joueur::parcourPokedex()
{
    int numPok=0;
    for(auto& p : j_pokedex)
    {
        numPok+=1;
        p.getInfo(p, 0);
    }
}

Poisson Joueur::selecPoisson(int a)
{
    int numPok=0;
    Poisson monpoisson;
    for(auto& p : j_pokedex)
    {
        numPok+=1;
        if(numPok==a)
        {
            monpoisson=p;
        }
    }
    return monpoisson ;
}
 



/*
void Joueur::addAppat()
{
   
}
void Joueur::supAppat()
{
   
}
 void Joueur::parcourAppat()
 {
    
 }
 
 
*/


Poisson Joueur::getPoissonPoke(int a)
{
    Poisson mp = j_captureTab [a];
    return mp;
}

void Joueur::addPoissonPoke(Poisson p)
{
    j_captureTab.push_back(p);
}

int Joueur::tailTab()
{
    int const a (j_captureTab.size());
    return a;
}


int Joueur::verifyDex(Poisson p)
{
    int a=0;
    
    int testIdA=0;
    int testIdB=0;
    
    testIdA=p.getId();
    
    for(int i=0; i<j_captureTab.size(); i++)
    {
        Poisson mp = j_captureTab [i];
        testIdB=mp.getId();
        
        
        if(testIdA==testIdB)
        {
            a=1;
        }
    }
    
    return a;
}



//tournois


Poisson Joueur::getPoissonRes(int a)
{
    Poisson mp = j_tournoisTab [a];
    return mp;
}

void Joueur::addPoissonTab(Poisson p)
{
    j_tournoisTab.push_back(p);
}

int Joueur::getTailleTabTournois()
{
    return j_tournoisTab.size();
}

void Joueur::supPoissonTournois()
{
   j_tournoisTab.pop_back();
}

// appat
void Joueur::addAppatTab(int id)
{
    Appat a(id);
    j_appatTab.push_back(a);
}

int Joueur::getTailleTabAppat()
{
    return j_appatTab.size();
}

void Joueur::supAppat()
{
   j_appatTab.pop_back();
}


void Joueur::addQttAppat(int id)
{
    Appat a;
    for(int i=0; i<j_appatTab.size() ;i++)
    {
        a=j_appatTab [i];

        if(a.getId()==id)
        {
            a.addQtt();
            j_appatTab [i]=a;
        }
    }
}

int Joueur::verifyAppat(int id)
{
    Appat a;
    int verifApp=0;
    
        for(int i=0; i<j_appatTab.size() ;i++)
        {
            a=j_appatTab [i];
            
            if(a.getId()==id)
            {
                verifApp=1;
            }
        }
    return verifApp;
}

void Joueur::listZoneAppat(int zone)
{
    Appat a;
    
    for(int i=0; i<j_appatTab.size() ;i++)
    {
        a=j_appatTab [i];
        
        if(a.getZoneAppat()==zone)
        {
            if(a.getQtt()>0)
            {
                a.getInfo();
            }
        }
    }
}

int Joueur::supQttAppat(int id)
{
    Appat a;
    int apPoiss=9;
    for(int i=0 ; i<j_appatTab.size() ; i++)
    {
        a=j_appatTab [i];
        
        if(a.getId()==id)
        {
            a.supQtt();
            j_appatTab [i]=a;
            apPoiss=a.getNumP();
        }
    }
    return apPoiss;
}

Musee Joueur::getMusee()
{
    return j_musee;
}

void Joueur::addMusee(Musee m)
{
    j_musee=m;
}

bool Joueur::getDev() {
    return j_dev;
}

void Joueur::setDev(bool dev) {
    j_dev = dev;
}