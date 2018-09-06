//
//  Fonction.cpp
//  Sudoku3
//
//  Created by Kevin on 22/03/2018.
//  Copyright © 2018 Kevin. All rights reserved.
//

#include "Fonction.h"

using namespace std;

// Affiche la fin du programme
void end(){
    
    cout <<"\n\n-> Fin du programme " << endl << endl;
    
}

// Efface la console
void purge(){
    
    system("clear");
}

// Affiche le titre du programme
void enTete(){
    
    cout << "\n###### Sudoku 3.0 BY MOKS ######" << endl << endl;
    
}

// Initialise le sudoku à 0
void initSudoku(vector<Case> &sudoku){
    
    cout << "-> Création du Sudoku " << endl << endl;
    
    for(int i = 0; i<81 ;i++){
        sudoku.push_back(Case());
        sudoku[i].position = i ;
        sudoku[i].valeur = 0 ;
    }
    
}

// Affiche le contenu du vecteur 
void afficheSudoku(vector<Case> &sudoku){
    
    cout << "-> Affichage du Sudoku " << endl << endl;
    
    int n = 0;
    int k = 0;
   
    for(int i = 0; i<81 ;i++){
        
        cout << "[" << sudoku[i].valeur << "]";
        
            // espaces des Blocks
        n = n + 1;
        if (n>2){
            cout << " ";
            n = 0;
        }
            // espace des Lignes
        if (i == 8 || i == 17 || i == 26 || i == 35 || i == 44 || i == 53 || i == 62 || i == 71 || i == 80 ){
            cout << endl;
            
            }
            // espace des Colonnes
        k = k + 1;
        if (k>26){
            cout << endl;
            k = 0;
            }
        
    }
}

// Récupère les valeurs du fichier sudoku pour les insérer dans le vecteur sudoku
void fichierSudoku(vector<Case> &sudoku, string nomFichier){
    
    cout << "-> Récupèration des données" << endl << endl;
    ifstream monFlux(nomFichier.c_str());
    
    if(monFlux){
        
        
        int compteurPosVecteur = 0;
        char charactere;
       
            
            for (int i = 0; i<89; i++){
                monFlux.get(charactere);
                if(charactere=='\n'){
                    //cout << "Retour a la ligne"<<endl;
                
                }
                else{
                    int n = charactere-48;
                    sudoku[compteurPosVecteur].valeur = n;
                    
                    compteurPosVecteur = compteurPosVecteur + 1;
                }
            }
    }
    
    else{
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

}


// Scan des lignes horizontales
void scanHorizontal(vector<Case> &sudoku, int pos, int Horiz[]){
    
    cout << "-> Scan Horizontal" << endl << endl;
    
    for (int i = 0; i<9; i++){
        Horiz[i] = sudoku[pos].valeur;
        pos = pos + 1;
        cout << Horiz[i];
    }
    
}

// Scan des lignes verticales
void scanVertical(vector<Case> &sudoku, int pos, int Verti[]){
    
    cout << "\n\n-> Scan Vertical" << endl << endl;
    
    int i = 0;
    
    while (pos <81){
        Verti[i] = sudoku[pos].valeur;
        cout << Verti[i];
        i = i + 1;
        pos = pos + 9;
    }
    
}

//Scan des blocks
void scanBlocks(vector<Case> &sudoku, int pos, int Block[]){
    
    cout << "\n\n-> Scan Block" << endl << endl;
    
    int i = 0 ;
    
    while(i<3){
        Block[i] = sudoku[pos].valeur;
        cout << Block[i];
        i = i + 1;
        pos = pos + 1;
        
    }
    
    pos = pos + 6;
    while(i<6){
        Block[i] = sudoku[pos].valeur;
        cout << Block[i];
        i = i + 1;
        pos = pos + 1;
    
    }
    
    pos = pos + 6;
    while(i<9){
        Block[i] = sudoku[pos].valeur;
        cout << Block[i];
        i = i + 1;
        pos = pos + 1;
        
    }
    
    
    int candidat[9];
    int filtre[9];
    
    for (int i = 0; i<9; i++){
        
        filtre[i] = i + 1;
        
    }
        int j = 0;
    
        while(j<9){
            
            int k = 0;
            int n = 0;
            
            while(k<9){
            
                if (filtre[j]==Block[k]) {
                
                    k = 9;
                }
                
                else {
                    
                    candidat[n] = filtre[j] ;
                    
                    n = n + 1;
                }
                    
            
                k = k + 1;
            }
            
            j = j + 1;
    
        }
    
}

// Recherche des candidats
void searchCandidat(vector<Case> &sudoku, int pos){
    int Horiz[9], Verti[9], Block[9];
    
    
    
    
    
}
