#include <iostream>
#include <string>
#include <vector>



#ifndef INVENTAIRE_CLASS_H
#define INVENTAIRE_CLASS_H
// #include "Somefunctions.h"
#include "ProduitClass.h"

using namespace std;




class Inventaire{
    private:
        string Nom;
        string DernierInventaireDate;
        int QantiteMAX;
        int QantiteACT;
        vector<ProduitAlimentaire> StockAlim;
        vector<ProduitElectronic> StockElec;
        vector<ProduitVestimentaire> StockVest;

    public:
        Inventaire(){}
        Inventaire(string Nom , string DernierInventaireDate , int QantiteMAX ){
            this -> Nom = Nom;
            this -> DernierInventaireDate = DernierInventaireDate;
            this -> QantiteACT = 0;
            this -> QantiteMAX = QantiteMAX;
        }

        void DernierInventaireDateSet( int DernierInventaireDate) { this -> DernierInventaireDate = DernierInventaireDate;}

        void Afficher(){
            LogL("-----------------------Stock---------------------------------");
            LogL("|    --------------------Info-------------------    ");
            LogL("|    Nom : " , Nom);
            LogL("|    DernierInventaireDate : " , DernierInventaireDate);
            LogL("|    Quantite Actuel : " , QantiteACT);
            LogL("|    Qantite Maximal : " , QantiteMAX);
            LogL("|    ----------------Inventaire-----------------    ");
           
            LogL("|    Stock Alimentation : ");
            for( int i=0 ; i<StockAlim.size() ; i++)
                StockAlim[i].Afficher();

            LogL("|    Stock Electronic : ");
            for( int i=0 ; i<StockElec.size() ; i++)
                StockElec[i].Afficher();

            LogL("|    Stock Vestimentaire : ");
            for( int i=0 ; i<StockVest.size() ; i++)
                StockVest[i].Afficher();

            LogL("-------------------------------------------------------------");

        
        }

        void stockSet(ProduitAlimentaire& obj){
            if( obj.getQTE() + QantiteACT < QantiteMAX ){
                QantiteACT += obj.getQTE();
                StockAlim.push_back(obj);
            }
            else{
                LogL("Inventaire est au MAX !!!");
            }
        }
        void stockSet(ProduitElectronic& obj){            
            if( obj.getQTE() + QantiteACT < QantiteMAX ){
                QantiteACT += obj.getQTE();
                StockElec.push_back(obj);
            }
            else{
                LogL("Inventaire est au MAX !!!");
            }
        }
        void stockSet(ProduitVestimentaire& obj){
            if( obj.getQTE() + QantiteACT < QantiteMAX ){
                QantiteACT += obj.getQTE();
                StockVest.push_back(obj);
                }
            else{
                LogL("Inventaire est au MAX !!!");
            }
        }
};

#endif 