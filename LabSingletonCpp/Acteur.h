#pragma once

#include <string>

using namespace std;



class Acteur
{
private:
   static int cptAct;
   string nom;
   string prenom;

   static void AjoutActeur(){ cptAct++; };
   static void EnleverActeur(){ cptAct--; };

public:
   Acteur(string nom);
   Acteur(const Acteur &act);
   ~Acteur();

   static int nbrActeur() ;

   string getNom();
   string getPrenom();

};


