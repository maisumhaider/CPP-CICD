//
// Created by USER on 15-Oct-18.
//

#include <iostream>
#include <string>
#include "TicTacToe.h"

using namespace std;

int gridArray[9];

void InitGame(){
    for (int i = 0; i < 9; i++){
        gridArray[i] = 9;
    }
}

void DisplayGame(){
    cout << endl << "|-- |-- |-- |" << endl;
    cout << "| " << gridArray[0] << " | " << gridArray[1] << " | " << gridArray[2] << " |" << endl;
    cout << "|-- |-- |-- |" << endl;
    cout << "| " << gridArray[3] << " | " << gridArray[4] << " | " << gridArray[5] << " |" << endl;
    cout << "|-- |-- |-- |" << endl;
    cout << "| " << gridArray[6] << " | " << gridArray[7] << " | " << gridArray[8] << " |" << endl;
    cout << "|-- |-- |-- |" << endl;
}

int CheckWinner(int* input){

    copy(input, input+9, gridArray);

    for (int i = 0; i < 9; i++){
        cout << gridArray[i];
    }

    if(((gridArray[0] | gridArray [1] | gridArray [2]) == 0) ||
       ((gridArray[3] | gridArray [4] | gridArray [5]) == 0) ||
       ((gridArray[6] | gridArray [7] | gridArray [8]) == 0) ||
       ((gridArray[0] | gridArray [3] | gridArray [6]) == 0) ||
       ((gridArray[1] | gridArray [4] | gridArray [7]) == 0) ||
       ((gridArray[2] | gridArray [5] | gridArray [8]) == 0) ||
       ((gridArray[0] | gridArray [4] | gridArray [8]) == 0) ||
       ((gridArray[2] | gridArray [4] | gridArray [6]) == 0)) {

        return 0;
    }

    else if((gridArray[0] & gridArray [1] & gridArray [2] == 1) ||
       ((gridArray[3] & gridArray [4] & gridArray [5]) == 1) ||
       ((gridArray[6] & gridArray [7] & gridArray [8]) == 1) ||
       ((gridArray[0] & gridArray [3] & gridArray [6]) == 1) ||
       ((gridArray[1] & gridArray [4] & gridArray [7]) == 1) ||
       ((gridArray[2] & gridArray [5] & gridArray [8]) == 1) ||
       ((gridArray[0] & gridArray [4] & gridArray [8]) == 1) ||
       ((gridArray[2] & gridArray [4] & gridArray [6]) == 1)){

        return 1;
    }

    else {
        return 2;
    }
}

void PlayGame(){
    int index;
    InitGame();
    DisplayGame();

    for (int i = 0; i < 9; i++){
        if(i%2 == 0) {
            cout << "Player 0's move index: ";
            cin >> index;
            gridArray[index - 1] = 0;
        }
        else {
            cout << "Player 1's move index: ";
            cin >> index;
            gridArray[index - 1] = 1;
        }
        DisplayGame();
    }

    if (CheckWinner(gridArray) == 0){
        cout << "Player0 Wins!" << endl;
    }
    else if (CheckWinner(gridArray) == 1){
        cout << "Player0 Wins!" << endl;
    }
    else {
        cout << "Game Drawn!" << endl;
    }
}