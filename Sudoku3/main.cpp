//
//  main.cpp
//  Sudoku3
//
//  Created by Kevin on 21/03/2018.
//  Copyright © 2018 Kevin. All rights reserved.
//

#include "Fonction.h"

using namespace std;



int main(int argc, const char * argv[]) {
    
    string const nomFichier("/Users/Kevin/Desktop/Programmation/C++/Sudoku3/Sudoku3/sudoku");
    vector<Case> sudoku;
    int Horiz[9];
    int Verti[9];
    int Block[9];
    
    
    purge();
    enTete();
    initSudoku(sudoku);
    fichierSudoku(sudoku, nomFichier);
    afficheSudoku(sudoku);
    
    scanHorizontal(sudoku, 0, Horiz);
    scanVertical(sudoku, 0, Verti);
    scanBlocks(sudoku, 0, Block);
   
    
    
    end();
    
    return 0;
}
