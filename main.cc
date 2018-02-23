/// @file main.cc
/// @brief Main file, runs the program.
/// @author Corbin Dotson

// Brock Ferrell
// CS2401
// November 23, 2015
// Project7

#include "game.h"
#include "othello.h"
using namespace main_savitch_14;

///	Begins a game of Othello, takes no parameters.
int main()
{
	Othello theGame;
	theGame.restart();
	theGame.play();
}
