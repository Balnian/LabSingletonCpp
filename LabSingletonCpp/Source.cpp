#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Acteur.h"

using namespace std;

string trim(string str)
{
   return str.substr(str.find_first_not_of(' '), str.find_last_not_of(' ') + 1);
}

int main(char args[])
{


   ifstream file{ "C:/Users/201250541/Documents/Client_Serveur/LaboSingletons/ListeActeur3.txt" };
   vector<Acteur> Acteurs;
   for (string i; getline(file, i);)
   {
      Acteurs.emplace_back(trim(i));
   }
   
  
   cout << Acteur::nbrActeur() << endl;
   for (size_t i = 0; i < Acteurs.size(); i++)
   {
      cout << Acteurs[i].getNom() << "," << Acteurs[i].getPrenom() << endl;
   }
   

}