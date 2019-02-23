// Author: <Logan Howerter>
// Recitation: <#101,  Carter Tillquist>
// 11-19-2017
// Assignment 8
#include "game.h"
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;
//this file runs my game object
//which is quite simple and just catalogues the score of the game.
//this constructor gives the user a chance to read their options.
game::game(){
    string line;
    ifstream newfile;
    newfile.open("game.txt");
    while(!newfile.eof()){
        newfile >> line;
        cout << line << endl;
    }
}
// this function maintains an array of dragon objects
// so that the user can view
// their success at the end of the game
/*void game::popds(int index){
    dragon temp(index);
    defeatedstat[index]=temp;
}
void game::disds(){
    cout << "here are the dragons you beat" << endl;
    for (int i=0; i<10; i++){
        cout << "Dragon #" << i+1 << ":" << endl;
        usleep(1000000);
        cout << "Health:" << endl;
        cout << defeatedstat[i].getHealth() << endl;
        usleep(1000000);
        cout << "Strength:" << endl;
        cout << defeatedstat[i].getStrength() << endl;
        usleep(1000000);
    }
    cout << "thanks for playing!" << endl;
}*/
