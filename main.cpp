#include <iostream>
#include "./headers/ProduitClass.h"
#include "./headers/InventaireClass.h"

using namespace std;

int main(){
    LogL("Gestion d'inventaire") ;

    Inventaire I1("Agadir Hangar" , "20/03/2024" , 1200);


    ProduitAlimentaire Milk("Milk", 2.5, 10, "Dairy");
    ProduitAlimentaire tomate("Tomate" , 5 , 500 , "Fruit");
    ProduitElectronic Telephone("IPHONE 15" , 7000 , 20 , 500 , 4 , "red");




    I1.stockSet(Milk);
    I1.stockSet(Telephone);
    I1.stockSet(tomate);

    I1.Afficher();




    return 0;
}