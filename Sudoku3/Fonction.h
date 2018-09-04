//
//  Fonction.h
//  Sudoku3
//
//  Created by Kevin on 22/03/2018.
//  Copyright © 2018 Kevin. All rights reserved.
//

#ifndef Fonction_h
#define Fonction_h

#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include "Fonction.h"


using namespace std;

struct Case{
    bool ok;
    int valeur;
    int candidat[9];
    int position;
};

void purge();
void enTete();
void end();

void initSudoku(vector<Case> &sudoku);
void afficheSudoku(vector<Case> &sudoku);
void fichierSudoku(vector<Case> &sudoku, string nomFichier);

void scanHorizontal(vector<Case> &sudoku, int pos, int Horiz[]);
void scanVertical(vector<Case> &sudoku, int pos, int Verti[]);
void scanBlocks(vector<Case> &sudoku, int pos, int Block[]);



#endif /* Fonction_h */

