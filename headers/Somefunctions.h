#include <iostream>
#include <string>
#include "./InventaireClass.h"

#ifndef SOMEFUNCTIONS_H
#define SOMEFUNCTIONS_H

using namespace std;


void Log(string Message){
    cout << Message ;
}

void LogL(string Message){
    cout << Message << endl;
}

void Log(string Message , string nom){
    cout << Message << nom <<endl;
}

// void LogL(string Message , vector<ProduitAlimentaire>& obj){

//     for(int i = 0 ; i < obj.size();i++){
//         obj[i].
//     }
// }


void LogL(string Message , string nom){
    cout << Message << nom <<endl;
}

void LogL(string Message , int nom){
    cout << Message << nom <<endl;
}

void LogL(string Message , float nom){
    cout << Message << nom <<endl;
}

#endif 