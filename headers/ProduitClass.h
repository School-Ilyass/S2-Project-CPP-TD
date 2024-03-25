#include <iostream>
#include <string>
#include "Somefunctions.h"



#ifndef PRODUCT_CLASS_H
#define PRODUCT_CLASS_H



using namespace std;


class Produit{
    protected:
        string nom;
        float prix;
        int qte;

    public: 
        Produit(){}
        Produit(string nom , float prix , int qte){
            this -> nom = nom;
            this -> prix = prix;
            this -> qte = qte;
            LogL(" + Produit Objet Constuction " , this -> nom);
        }
        // ~Produit(){LogL(" ~ Produit Objet Destruction " , this -> nom);}

        // Getters
        string getNom(){
            return this -> nom ;
        }
        int getQTE(){return this -> qte;}

}; 

class ProduitElectronic : public Produit{
    protected:
        int Stockage;
        int Ram;
        string Color;

    public: 
        ProduitElectronic(){}
        ProduitElectronic( string nom , float prix , int qte , int Stockage , int Ram , string Color) : Produit( nom , prix , qte){
            this -> Stockage = Stockage;
            this -> Ram = Ram;
            this -> Color = Color;
            LogL(" + Produit Objet Constuction " , this -> nom);
        }
        void Afficher(){
            LogL("|__________________________________________");
            LogL("|        --> Nom : " , nom);
            LogL("|        --> Prix : " , prix);
            LogL("|        --> Qantite : " , qte);
            LogL("|        --> Stockage : " , Stockage);
            LogL("|        --> Ram : " , Ram);
            LogL("|        --> Color : " , Color);
            LogL("|__________________________________________");
        }

        // Getters
        ~ProduitElectronic(){LogL(" ~ Produit Objet Electronic Destruction " , this -> nom);}

}; 

class ProduitAlimentaire : public Produit{
    protected:
        string type;
    public:
        ProduitAlimentaire(){}
        ProduitAlimentaire( string nom , float prix , int qte ,string type ) : Produit( nom , prix , qte){
            this -> type = type;
        }
        void Afficher(){
            LogL("|__________________________________________");
            LogL("|        --> Nom : " , nom);
            LogL("|        --> Prix : " , prix);
            LogL("|        --> Qantite : " , qte);
            LogL("|        --> Type : " , type);
            LogL("|__________________________________________");
        }
        ~ProduitAlimentaire(){
            Log(" ~ Produit Objet Alimentaire Destruction " , this -> nom);
            LogL(" , De type : " , this -> nom);
            }

};

class ProduitVestimentaire : public Produit{
    protected:
        string taille;
    public:
        ProduitVestimentaire(){}
        ProduitVestimentaire( string nom , float prix , int qte ,string taille ) : Produit( nom , prix , qte){
            this -> taille = taille;
        }
        void Afficher(){
            LogL("|__________________________________________");
            LogL("|        --> Nom : " , nom);
            LogL("|        --> Prix : " , prix);
            LogL("|        --> Qantite : " , qte);
            LogL("|        --> Taille : " , taille);
            LogL("|__________________________________________");
        }
        ~ProduitVestimentaire(){
            Log(" ~ Produit Objet Vestimentaire Destruction " , this -> nom);
            LogL(" , De type : " , this -> nom);
            }
};


#endif // ! PRODUCT_CLASS_H
