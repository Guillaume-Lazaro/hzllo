//
//  fonc.cpp
//  hzllo
//
//  Created by UNAL COLIN on 13/04/2020.
//  Copyright © 2020 UNAL COLIN. All rights reserved.
//

#include <iostream>
#include "fonc.hpp"
#include "Monde.hpp"
#include "Joueur.hpp"

using namespace std;

void introTexte()
{
    cout<<"Une journée de plus passée au bureau ..."<<endl;
    cin.ignore();
    cout<<"Heureusement que vos collègues sont sympas ..."<<endl;
    cin.ignore();
    cout<<"..."<<endl;
    cin.ignore();
    cout<<"Votre téléphone sonne ..."<<endl;
    cin.ignore();
    cout<<"Vous êtes occupés, un de vos clients est en visio"<<endl;
    cin.ignore();
    cout<<"C'est un RDV tres important"<<endl;
    cin.ignore();
    cout<<"Vous regardez du coin de l'oeil"<<endl;
    cin.ignore();
    cout<<"Ce n'est que votre soeur, c'est bon"<<endl;
    cin.ignore();
    cout<<"Elle peut attendre ..."<<endl;
    cin.ignore();
    cout<<"******************"<<endl;
    cin.ignore();
    cout<<"Vous recevez un texto 2 min apres l'appel ..."<<endl;
    cin.ignore();
    cout<<"Elle vous annonce la mort de votre père ..."<<endl;
    cin.ignore();
    cout<<"..."<<endl;
    cin.ignore();
    cout<<"Cela fait maintenant 27 ans que vous tavaillez dans cette boîte"<<endl;
    cin.ignore();
    cout<<"Vous n'avez jamais changé de place dans l'open space"<<endl;
    cin.ignore();
    cout<<"Vous avez eu 4 bureaux différents"<<endl;
    cin.ignore();
    cout<<"12 ordinateurs"<<endl;
    cin.ignore();
    cout<<"25 stagiaires"<<endl;
    cin.ignore();
    cout<<"..."<<endl;
    cin.ignore();
    cout<<"Vous êtes si bien installés ... dommage que le job soit si mal payé"<<endl;
    cin.ignore();
    cout<<"La boisson et votre loyer aura eu raison de vos économies ..."<<endl;
    cin.ignore();
    cout<<"La roue tourne et vous vous approchez dangereusement de la 50aines"<<endl;
    cin.ignore();
    cout<<"Qu'avez vous accompli dans votre vie ?"<<endl;
    cin.ignore();
    cout<<"..."<<endl;
    cin.ignore();
    cout<<"Avez vous eu l'impression d'avoir vecu ?"<<endl;
    cin.ignore();
    cout<<"D'avoir ressenti la vie comme une passion qui vous anime ?"<<endl;
    cin.ignore();
    cout<<"Non, bien sur que nom ..."<<endl;
    cin.ignore();
    cout<<"Les années passent toujours plus vite et le monde ne s'arrête jamais"<<endl;
    cin.ignore();
    cout<<"Pour la première fois depuis 27ans, "<<endl;
    cin.ignore();
    cout<<"vous decidez qu'il est temps d'aller respirer cette vie qui vous ressemble"<<endl;
    cin.ignore();
    cout<<"******************************************"<<endl;
    cin.ignore();
    cout<<"******************************************"<<endl;
    cin.ignore();
}


void creatMondeTexte()
{
    cout<<"Bienvenu."<<endl;
    cin.ignore();
    cout<< "Après un long voyage pour retourner dans votre contrée natale" << endl;
    cout<<"Vous finissez enfin par arriver à destination"<<endl;
    cin.ignore();
    cout<<"Dans votre sac se trouve la vielle clé rouillée"<<endl;
    cout<<"de la cabane de votre Grand Père ..."<<endl;
    cin.ignore();
    cout<<"Les colines de ce paysage familier se dresse devant vous"<<endl;
    cin.ignore();
    cout<<"Vous êtes soudain pris par un sentiment nostalgique"<<endl;
    cin.ignore();
    cout<<"Comment s'appelle votre region deja ? J'oublie à chaque fois"<<endl;
    cin.ignore();
    cout<<"Entrez le nom de votre region (sans espace) ci-dessous :"<<endl;

}

void creatJoueurtexte()
{
    cout<<"..."<<endl;
      cin.ignore();
      cout<<"Vous entrez dans la cabane ..."<<endl;
      cin.ignore();
      cout<<"Vos souvenirs d'enfance refont surface"<<endl;
      cin.ignore();
      cout<<"Peu de chose trainent, vous apercevez dans ce petit entrepot"<<endl;
      cout<<"une petite barque ainsi que cette fameuse vieille boite de pêche"<<endl;
      cin.ignore();
      cout<<"Une larme coule le long de votre joue"<<endl;
      cin.ignore();
      cout<<"Il y a 8 ans,vous n'aviez maleureusement pas pu assister à l'enterrement de votre grand père à cause d'une reunion importante"<<endl;
      cin.ignore();
      cout<<"Sa maison a été vendue pour partager l'heritage"<<endl;
      cin.ignore();
      cout<<"il ne vous reste que cette petite cabane accompagnée d'une mare comme souvenir"<<endl;
      cin.ignore();

    cout<<"Le coeur lourd, vous prenez une decision, LA DECISION"<<endl;
    cin.ignore();
    cout<<"Pour honorer la mémoire de votre famille"<<endl;
    cin.ignore();
    cout<<"Et pour vous racheter après de vous même,"<<endl;
    cin.ignore();

      cout<<"Vous avez décider de vous inscrire,"<<endl;
      cout<<"dans le répertoire des pêcheurs de la region"<<endl;
      cin.ignore();
    cout<<"Et d'en faire votre nouvelle activité"<<endl;
    cin.ignore();
      cout << "Entrez votre nom (sans espace) jeune pêcheur :" << endl;
}

void creatJoueurtexteFin()
{
  cout <<"Vous passez la nuit dans la barque,"<<endl;
  cin.ignore();
  cout <<"Sur un filet de peche faisant office de matelas."<<endl;
  cin.ignore();
  cout <<"Demain commencera votre nouvelle vie"<<endl;
  cin.ignore();
  cout <<"TRES IMPORTANT, LISEZ LE POISSON DEX AVANT DE PECHER"<<endl;
  cin.ignore();
    cout <<"DES INFO PROMORDIALE Y SONT POUR POUVOIR ATTRAPER VOTRE PREMIER POISSON"<<endl;
    cin.ignore();
    cout <<"Le jeu peut paretre difficile mais si vous prenez des notesvous vous en sortirez"<<endl;
    cin.ignore();
    cout <<"******************************"<<endl;
    cin.ignore();
    cout <<"******************************"<<endl;
    cin.ignore();
    
    
    
}

void exittexte()
{
     cout<<"Tu nous abandone ? ?"<<endl;
     cin.ignore();
     cout<<"Vous avez quitter le jeu"<<endl;
     cin.ignore();
     cout<<"J'espere qu'il vous a plu !"<<endl;
     cin.ignore();
     cout<<"Les sauvegardes seront disponible à la prochaine mise à jour"<<endl;
     cin.ignore();
}


void texteMenu(Monde a,Joueur b)
{
    cout<<endl<<"//////////////////////////"<<endl<<endl;
    cin.ignore();
    cout<<"Un nouveau jour commance."<<endl;
    cin.ignore();
    cout<<"Le soleil se leve sur "<< a.getNameMonde() <<endl;
   cin.ignore();
   cout<<"Voici les informations de la journee :"<<endl;
   cin.ignore();
   
   a.infoMonde();
    
    Musee mTempo = b.getMuse();
    mTempo.modifGoldJourTotal();
    
    cout<<"Gain du musee : "<< mTempo.getGoldJourTotal() <<endl;
    cin.ignore();
    
    
    
   cout<<"Portefeuille : "<< b.getGold() <<endl;
    cin.ignore();
   
   if(a.getmJour()>0)
   {
       cout<<"1 : Allez pecher"<<endl;
   }
   
   if(a.getmJour()>0)
   {
       cout<<"2 : PoissonDex, se rendre a l'universitee des poissons"<<endl;
   }
   
   if(a.getmJour()>2)
   {
       cout<<"3 : $$ Super Fishing Shop $$"<<endl;
   }
   
   if(a.getmJour()>6)
   {
       cout<<"4 : Votre musee d'aquoirium"<<endl;
   }
   
   
   if(a.getmJour()==a.getJourTournois())
   {
       cout<<"5 : Tournois du moment"<<endl;
   }
   
   if(a.getmJour()>0)
   {
       cout<<"6 : Sortir du jeu la queu entre les jambes"<<endl<<endl;
   }
   
   cout<<"Que voulez vous faire aujourd'hui ?"<<endl;
   cout<<"faite votre choix :"<<endl;
}
