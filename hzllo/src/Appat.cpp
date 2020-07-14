//
//  Appat.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Appat.hpp"
#include "Poisson.hpp"
#include <iostream>
using namespace std;


Appat::Appat()
{
    cin << "Yop";
}




Appat::Appat(int a)
{
    if (a==1)
    {
        Poisson p(1,1);
        a_id=a;
        a_numP=0;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=1;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==2)
    {
        Poisson p(2,1);
        a_id=a;
        a_numP=1;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=1;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==3)
    {
        Poisson p(3,1);
        a_id=a;
        a_numP=2;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=1;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==4)
    {
        Poisson p(4,1);
        a_id=a;
        a_numP=3;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=1;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==5)
    {
        Poisson p(5,1);
        a_id=a;
        a_numP=4;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=1;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==6)
    {
        Poisson p(1,2);
        a_id=a;
        a_numP=0;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=2;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==7)
    {
        Poisson p(2,2);
        a_id=a;
        a_numP=1;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=2;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==8)
    {
        Poisson p(3,2);
        a_id=a;
        a_numP=2;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=2;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==9)
    {
        Poisson p(4,2);
        a_id=a;
        a_numP=3;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=2;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==10)
    {
        Poisson p(5,2);
        a_id=a;
        a_numP=4;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=2;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==11)
    {
        Poisson p(1,3);
        a_id=a;
        a_numP=0;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=3;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==12)
    {
        Poisson p(2,3);
        a_id=a;
        a_numP=1;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=3;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==13)
    {
        Poisson p(3,3);
        a_id=a;
        a_numP=2;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=3;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==14)
    {
        Poisson p(4,3);
        a_id=a;
        a_numP=3;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=3;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==15)
    {
        Poisson p(5,3);
        a_id=a;
        a_numP=4;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=3;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==16)
    {
        Poisson p(1,4);
        a_id=a;
        a_numP=0;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=4;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==17)
    {
        Poisson p(2,4);
        a_id=a;
        a_numP=1;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=4;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==18)
    {
        Poisson p(3,4);
        a_id=a;
        a_numP=2;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=4;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==19)
    {
        Poisson p(4,4);
        a_id=a;
        a_numP=3;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=4;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==20)
    {
        Poisson p(5,4);
        a_id=a;
        a_numP=4;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=4;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==21)
    {
        Poisson p(1,5);
        a_id=a;
        a_numP=0;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=5;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==22)
    {
        Poisson p(2,5);
        a_id=a;
        a_numP=1;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=5;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==23)
    {
        Poisson p(3,5);
        a_id=a;
        a_numP=2;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=5;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==24)
    {
        Poisson p(4,5);
        a_id=a;
        a_numP=3;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=5;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    if (a==25)
    {
        Poisson p(5,5);
        a_id=a;
        a_numP=4;
        a_nom="Appat "+p.getNomPoisson();
        a_zone=5;
        a_prix=p.getPrix();
        a_qtt=1;
    }
    
}





//methode
std::string Appat::getName()
{
    return a_nom;
}

int Appat::getPrix()
{
    return a_prix;
}

int Appat::getNumP()
{
    return a_numP;
}

int Appat::getZoneAppat()
{
    return a_zone;
}

int Appat::getQtt()
{
    return a_qtt;
}

int Appat::getId()
{
    return a_id;
}




void Appat::addQtt()
{
    a_qtt+=1;
}

void Appat::supQtt()
{
    a_qtt-=1;
}

void Appat::getInfo()
{
    cout<<"Appat n°"<<a_id<<" "<<a_nom<<endl;
}
