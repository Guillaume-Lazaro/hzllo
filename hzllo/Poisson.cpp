//
//  Poisson.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Poisson.hpp"
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>

//contructeur
Poisson::Poisson()
{
}


Poisson::Poisson(int a, int z)
{
    
    
    
    //zone 1
    
    
    
    
    if (z==1)
    {
        

    if(a==1)
    {
        p_zonePeche=z;
        p_tailleAquoi=1;
        p_numPokedex=1;
        p_poidBase=800;
        p_gold=5;
    p_prixReprod=5;
    p_caractere=1;
    p_nomPoisson="poissons-rouges";
    p_meteo=0;
    //combat
    p_pvMax=15;
    p_pvCombat=p_pvMax;
    p_forceMax=3;
    p_forceCombat=p_forceMax;
    p_vitMax=3;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=1;
    p_regen=3;
    p_resist=0;
    }
    
    if(a==2)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=2;
    p_poidBase=950;
    p_gold=4;
    p_prixReprod=5;
    p_caractere=1;
    p_nomPoisson="Ide-mélanote";
    p_meteo=0;
    //combat
    p_pvMax=17;
    p_pvCombat=p_pvMax;
    p_forceMax=1;
    p_forceCombat=p_forceMax;
    p_vitMax=4;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=2;
    p_regen=4;
    p_resist=0;
    }
    
    if(a==3)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=3;
    p_poidBase=1300;
    p_gold=7;
    p_prixReprod=5;
    p_caractere=1;
    p_nomPoisson="La-tanche";
    p_meteo=1;
    //combat
    p_pvMax=20;
    p_pvCombat=p_pvMax;
    p_forceMax=2;
    p_forceCombat=p_forceMax;
    p_vitMax=2;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=1;
    p_regen=4;
    p_resist=1;
    }
    
    if(a==4)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=4;
    p_poidBase=670;
    p_gold=12;
    p_prixReprod=5;
    p_caractere=2;
    p_nomPoisson="Esturgeon";
    p_meteo=3;
    //combat
    p_pvMax=28;
    p_pvCombat=p_pvMax;
    p_forceMax=5;
    p_forceCombat=p_forceMax;
    p_vitMax=4;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=3;
    p_regen=5;
    p_resist=1;
    }
    
    if(a==5)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=5;
    p_poidBase=1880;
    p_gold=92;
    p_prixReprod=5;
    p_caractere=1;
    p_nomPoisson="Carpe-koi";
    p_meteo=4;
    //combat
    p_pvMax=145;
    p_pvCombat=p_pvMax;
    p_forceMax=24;
    p_forceCombat=p_forceMax;
    p_vitMax=50;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=2;
    p_regen=6;
    p_resist=6;
    }
        
    }

    
    
    
    
    //zone 2
    
    
    
    
    if (z==2)
    {
        

    if(a==1)
    {
        
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=6;
    p_poidBase=800;
    p_gold=32;
    p_prixReprod=5;
    p_caractere=1;
    p_nomPoisson="Vairon";
    p_meteo=1;
    //combat
    p_pvMax=52;
    p_pvCombat=p_pvMax;
    p_forceMax=30;
    p_forceCombat=p_forceMax;
    p_vitMax=8;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=1;
    p_regen=12;
    p_resist=3;
    }
    
    if(a==2)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=7;
    p_poidBase=950;
    p_gold=21;
    p_prixReprod=5;
    p_caractere=4;
    p_nomPoisson="Bouviere";
    p_meteo=2;
    //combat
    p_pvMax=48;
    p_pvCombat=p_pvMax;
    p_forceMax=26;
    p_forceCombat=p_forceMax;
    p_vitMax=5;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=1;
    p_regen=12;
    p_resist=2;
    }
    
    if(a==3)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=8;
    p_poidBase=1300;
    p_gold=42;
    p_prixReprod=5;
    p_caractere=2;
    p_nomPoisson="Chabot";
    p_meteo=3;
    //combat
    p_pvMax=105;
    p_pvCombat=p_pvMax;
    p_forceMax=65;
    p_forceCombat=p_forceMax;
    p_vitMax=20;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=1;
    p_regen=16;
    p_resist=4;
    }
    
    if(a==4)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=9;
    p_poidBase=670;
    p_gold=55;
    p_prixReprod=5;
    p_caractere=1;
    p_nomPoisson="Epinoche";
    p_meteo=0;
    //combat
    p_pvMax=228;
    p_pvCombat=p_pvMax;
    p_forceMax=50;
    p_forceCombat=p_forceMax;
    p_vitMax=25;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=3;
    p_regen=21;
    p_resist=3;
    }
    
    if(a==5)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=10;
    p_poidBase=1880;
    p_gold=220;
    p_prixReprod=5;
    p_caractere=3;
    p_nomPoisson="L'aneau unique";
    p_meteo=2;
    //combat
    p_pvMax=280;
    p_pvCombat=p_pvMax;
    p_forceMax=66;
    p_forceCombat=p_forceMax;
    p_vitMax=190;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=2;
    p_regen=32;
    p_resist=13;
    }
        
    }
    
    
    
    
    //zone 3
    
    
    
    
    if (z==3)
    {
        

    if(a==1)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=11;
    p_poidBase=800;
    p_gold=29;
    p_prixReprod=5;
    p_caractere=1;
    p_nomPoisson="Dzht";
    p_meteo=4;
    //combat
    p_pvMax=49;
    p_pvCombat=p_pvMax;
    p_forceMax=12;
    p_forceCombat=p_forceMax;
    p_vitMax=29;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=2;
    p_regen=11;
    p_resist=5;
    }
    
    if(a==2)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=12;
    p_poidBase=950;
    p_gold=37;
    p_prixReprod=5;
    p_caractere=3;
    p_nomPoisson="Vandoise";
    p_meteo=3;
    //combat
    p_pvMax=62;
    p_pvCombat=p_pvMax;
    p_forceMax=13;
    p_forceCombat=p_forceMax;
    p_vitMax=52;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=2;
    p_regen=15;
    p_resist=7;
    }
    
    if(a==3)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=13;
    p_poidBase=1300;
    p_gold=45;
    p_prixReprod=5;
    p_caractere=1;
    p_nomPoisson="Lote france";
    p_meteo=1;
    //combat
    p_pvMax=73;
    p_pvCombat=p_pvMax;
    p_forceMax=27;
    p_forceCombat=p_forceMax;
    p_vitMax=87;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=2;
    p_regen=21;
    p_resist=8;
    }
    
    if(a==4)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=14;
    p_poidBase=670;
    p_gold=33;
    p_prixReprod=5;
    p_caractere=2;
    p_nomPoisson="Hotu";
    p_meteo=4;
    //combat
    p_pvMax=162;
    p_pvCombat=p_pvMax;
    p_forceMax=20;
    p_forceCombat=p_forceMax;
    p_vitMax=42;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=3;
    p_regen=22;
    p_resist=6;
    }
    
    if(a==5)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=15;
    p_poidBase=1880;
    p_gold=245;
    p_prixReprod=5;
    p_caractere=4;
    p_nomPoisson="Requin du terroir";
    p_meteo=2;
    //combat
    p_pvMax=265;
    p_pvCombat=p_pvMax;
    p_forceMax=120;
    p_forceCombat=p_forceMax;
    p_vitMax=57;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=3;
    p_regen=65;
    p_resist=11;
    }
        
    }
    
    
    
    //zone 4
    
    
    
    
    if (z==4)
    {
        

    if(a==1)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=16;
    p_poidBase=800;
    p_gold=52;
    p_prixReprod=5;
    p_caractere=1;
    p_nomPoisson="Carpe";
    p_meteo=1;
    //combat
    p_pvMax=270;
    p_pvCombat=p_pvMax;
    p_forceMax=159;
    p_forceCombat=p_forceMax;
    p_vitMax=31;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=1;
    p_regen=14;
    p_resist=8;
    }
    
    if(a==2)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=17;
    p_poidBase=950;
    p_gold=61;
    p_prixReprod=5;
    p_caractere=2;
    p_nomPoisson="Brochet";
    p_meteo=2;
    //combat
    p_pvMax=200;
    p_pvCombat=p_pvMax;
    p_forceMax=62;
    p_forceCombat=p_forceMax;
    p_vitMax=285;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=3;
    p_regen=21;
    p_resist=15;
    }
    
    if(a==3)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=18;
    p_poidBase=1300;
    p_gold=66;
    p_prixReprod=5;
    p_caractere=3;
    p_nomPoisson="Sandre";
    p_meteo=3;
    //combat
    p_pvMax=320;
    p_pvCombat=p_pvMax;
    p_forceMax=87;
    p_forceCombat=p_forceMax;
    p_vitMax=362;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=2;
    p_regen=16;
    p_resist=13;
    }
    
    if(a==4)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=19;
    p_poidBase=670;
    p_gold=59;
    p_prixReprod=5;
    p_caractere=4;
    p_nomPoisson="Perche";
    p_meteo=0;
    //combat
    p_pvMax=172;
    p_pvCombat=p_pvMax;
    p_forceMax=527;
    p_forceCombat=p_forceMax;
    p_vitMax=52;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=3;
    p_regen=30;
    p_resist=20;
    }
    
    if(a==5)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=20;
    p_poidBase=1880;
    p_gold=570;
    p_prixReprod=5;
    p_caractere=3;
    p_nomPoisson="MagiKarpe";
    p_meteo=4;
    //combat
    p_pvMax=670;
    p_pvCombat=p_pvMax;
    p_forceMax=666;
    p_forceCombat=p_forceMax;
    p_vitMax=105;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=1;
    p_regen=86;
    p_resist=2;
    }
        
    }
    
    
    
    
    //zone 5
    
    
    
    
    if (z==3)
    {
        

    if(a==1)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=21;
    p_poidBase=800;
    p_gold=63;
    p_prixReprod=5;
    p_caractere=4;
    p_nomPoisson="Silure";
    p_meteo=0;
    //combat
    p_pvMax=382;
    p_pvCombat=p_pvMax;
    p_forceMax=97;
    p_forceCombat=p_forceMax;
    p_vitMax=156;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=2;
    p_regen=35;
    p_resist=31;
    }
    
    if(a==2)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=22;
    p_poidBase=950;
    p_gold=85;
    p_prixReprod=5;
    p_caractere=3;
    p_nomPoisson="Omble de fontaine";
    p_meteo=3;
    //combat
    p_pvMax=527;
    p_pvCombat=p_pvMax;
    p_forceMax=320;
    p_forceCombat=p_forceMax;
    p_vitMax=103;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=3;
    p_regen=46;
    p_resist=7;
    }
    
    if(a==3)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=23;
    p_poidBase=1300;
    p_gold=91;
    p_prixReprod=5;
    p_caractere=2;
    p_nomPoisson="Black Bass";
    p_meteo=2;
    //combat
    p_pvMax=526;
    p_pvCombat=p_pvMax;
    p_forceMax=360;
    p_forceCombat=p_forceMax;
    p_vitMax=71;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=1;
    p_regen=12;
    p_resist=21;
    }
    
    if(a==4)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=24;
    p_poidBase=670;
    p_gold=105;
    p_prixReprod=5;
    p_caractere=1;
    p_nomPoisson="Chevesne";
    p_meteo=4;
    //combat
    p_pvMax=767;
    p_pvCombat=p_pvMax;
    p_forceMax=137;
    p_forceCombat=p_forceMax;
    p_vitMax=790;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=2;
    p_regen=39;
    p_resist=43;
    }
    
    if(a==5)
    {
    p_zonePeche=z;
    p_tailleAquoi=1;
    p_numPokedex=25;
    p_poidBase=1880;
    p_gold=1020;
    p_prixReprod=5;
    p_caractere=4;
    p_nomPoisson="Palourde geante doree";
    p_meteo=1;
    //combat
    p_pvMax=2170;
    p_pvCombat=p_pvMax;
    p_forceMax=182;
    p_forceCombat=p_forceMax;
    p_vitMax=988;
    p_vitCombat=p_vitMax;
    p_pechable=false;
    p_captur=false;
    p_type=2;
    p_regen=190;
    p_resist=90;
    }
        
    }
    
}


//methode combat
bool Poisson::esPechable(int a)
{
    if(p_pvCombat<a)
        {
            p_pechable=true;
        }
    else
        {
            p_pechable=false;
        }
    return p_pechable;
        
}

void Poisson::prendVie(int a)
{
    p_pvCombat+=a;
}
void Poisson::prendDegat(int a)
{
    p_pvCombat-=a;
}
void Poisson::perdForce(int a)
{
    p_forceCombat-=a;
}
void Poisson::perdVit(int a)
{
    p_vitCombat-=a;
}
void Poisson::pvOrigine()
{
    p_pvCombat=p_pvMax;
}
void Poisson::capture()
{
    p_captur=true;
}



//get
int Poisson::getForceMax()
{
    return p_forceMax;
}
int Poisson::getVitMax()
{
    return p_vitMax;
}
int Poisson::getForce()
{
    return p_forceCombat;
}
int Poisson::getPv()
{
    return p_pvCombat;
}
int Poisson::getPvMax()
{
    return p_pvMax;
}
int Poisson::getRegen()
{
    return p_regen;
}
int Poisson::getVit()
{
    return p_vitCombat;
}
int Poisson::getCaractere()
{
    return p_caractere;
}
int Poisson::getPrix()
{
    return p_gold;
}
int Poisson::getType()
{
    return p_type;
}
int Poisson::getPoid()
{
    return p_poidBase;
}
string Poisson::getNomPoisson()
{
    return p_nomPoisson;
}
int Poisson::getZone()
{
    return p_zonePeche;
}
int Poisson::getResist()
{
    return p_resist;
}
int Poisson::getId()
{
    return p_numPokedex;
}
bool Poisson::getCapture()
{
    return p_captur;
}

void Poisson::calculPrix()
{
    srand((int)time(0));
    p_poidRand = rand() % 10;
    p_gold += (1 + p_poidRand);
    p_poidRand *=  10;
    p_poidBase += (1 + p_poidRand);
    
}

int Poisson::getPoidRand()
{
    return p_poidRand;
}


void Poisson::getInfo(Poisson p,int a)

    {
        a+=1;
        cout<< a <<" : " << p.getNomPoisson() << endl;
        cout<< "Zone : " << p_zonePeche<< endl;
        if(p_meteo==1)
        {
            cout<<"Meteo du qu'il n'aime pas : ";
            cout<<"grand soleil !"<<endl;
        }
        if(p_meteo==2)
        {
            cout<<"Meteo du qu'il n'aime pas : ";
            cout<<"nuageux"<<endl;
        }
        if(p_meteo==3)
        {
            cout<<"Meteo du qu'il n'aime pas : ";
            cout<<"averse"<<endl;
        }
        if(p_meteo==4)
        {
            cout<<"Meteo du qu'il n'aime pas : ";
            cout<<"pluie batante"<<endl;
        }
        cout<< "Comportement : " << p.getCaractere() << endl;
        if(p.getType()>2)
        {
            cout<< "De type : Vitesse et force"<< endl;
        }
        else if(p.getType()<2)
        {
            cout<< "De type : Force"<< endl;
        }
        else
        {
            cout<< "De type : Vitesse"<< endl;
        }
        cout<< "Force : " << p.getForceMax() << endl;
        cout<< "Vitesse : " << p.getVitMax() << endl;
        cout<< "Prix moyen : " << p.getPrix() << endl;
        cout<< "Resistance a la fatigue : " << p.getPvMax() << endl<< endl;
    }


int Poisson::getMeteo()
{
    return p_meteo;
}




//destructeur

Poisson::~Poisson()
{
   
}
