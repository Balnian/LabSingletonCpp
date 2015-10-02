#include "Acteur.h"
#include <iostream>

int Acteur::cptAct = 0;


Acteur::Acteur(string nom) : 
nom(nom.substr(0, nom.find_last_of(' '))), 
prenom( nom.substr(nom.find_last_of(' ')+1, nom.length() ))
{
   AjoutActeur();
}

Acteur::Acteur(const Acteur &act)
{
   nom = act.nom;
   prenom = act.prenom;
   AjoutActeur();
}


Acteur::~Acteur()
{
   EnleverActeur();
}

int Acteur::nbrActeur() 
{
   return cptAct;
}

string Acteur::getNom()
{
   return nom;
}

string Acteur::getPrenom()
{
   return prenom;
}

