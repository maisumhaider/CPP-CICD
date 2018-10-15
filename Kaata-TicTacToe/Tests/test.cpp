//
// Created by USER on 15-Oct-18.
//

#include <gtest/gtest.h>
#include "TicTacToe.h"

TEST(TicTacToe, WinPlayer0) {
    int testArray[9] = {1,0,1,0,0,0,0,1,0};
    EXPECT_EQ(0, CheckWinner(testArray));
}

TEST(TicTacToe, WinPlayer1) {
    int testArray[9] = {1,1,1,0,0,1,0,1,0};
    EXPECT_EQ(1, CheckWinner(testArray));
}

TEST(TicTacToe, Draw) {
    int testArray[9] = {1,0,1,0,0,1,0,1,0};
    EXPECT_EQ(2, CheckWinner(testArray));
}