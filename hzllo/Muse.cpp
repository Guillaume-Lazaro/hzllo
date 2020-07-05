//
//  Muse.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include "Muse.hpp"
#include "Aquoi.hpp"
#include "Poisson.hpp"
#include <vector>
#include <iostream>
using namespace std;


Muse::Muse()
{
    m_taille=3;
    m_goldJourTotal=0;
}



void Muse::addAquoi()
{
    if(m_aquoi.size()<m_taille)
    {
        Aquoi a;
        m_aquoi.push_back(a);
    }
}



void Muse::modifGoldJourTotal()
{
    m_goldJourTotal=0;
    Aquoi ma;
    for(int i=0; i<m_aquoi.size(); i++)
    {
        ma=m_aquoi[i];
        ma.modifGoldJour();
        m_goldJourTotal += ma.getGoldJour();
    }
}



int Muse::getGoldJourTotal()
{
    return m_goldJourTotal;
}



int Muse::addPoissonMuse(Poisson p)
{
    int id=0;
    int test=1;
    Aquoi ma;
    int done=0;
    
    
    
    for(int i=0; i<m_aquoi.size(); i++)
    {
        ma= m_aquoi[i];
        
            if(ma.getQtt()==1)
            {
                id = ma.getNumPoisson();
                
                
                if(p.getId()==id)
                {
                    ma.addP(p);
                    m_aquoi [i]=ma;
                    done=1;
                    test=0;
                }
                
            }

        
        else if(done==0)
        {
            if(ma.testVide()==true)
            {
                ma.addP(p);
                m_aquoi [i]=ma;
                done=1;
                test=0;
            }
        }
   
        
    }
    
    
    return test;
}






void Muse::upTaille()
{
    m_taille+=3;
}

int Muse::getTaille()
{
    return m_taille;
}

int Muse::getnbAquoi()
{
    int nb=m_aquoi.size();
    return nb;
}

void Muse::showMuse()
{
    cout<<"Bienvenu dans votre muse !"<<endl;
    cin.ignore();
    cout<<"Vous avez :"<< m_aquoi.size() << " aquoiriums" <<endl;
    cin.ignore();
    
    cout<<"Voici la liste de tout vos aquoiriums :"<<endl;
    
    
    Aquoi a;
   // Poisson p;
    
    for(int i=0; i<m_aquoi.size(); i++)
    {
        a=m_aquoi[i];
        
        
        cout<<"Vous avez : "<< a.getQtt() << " poisson nomee : " << a.getNomPoissonA() << endl;
        a.modifGoldJour();
        cout<<"Qui raporte "<< a.getGoldJour()<< " piece par jour"<<endl;
        cin.ignore();
    }
    
    
    
}

void Muse::modiAquoi(int i, Aquoi a)
{
    m_aquoi [i]=a;
}
