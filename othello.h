// Brock Ferrell
// CS2401
// November 23, 2015
// Project7

/**
* @file othello.h
*
* @brief This file contains the header for the Othello class
*
* Description: The othello class contains all the functions needed to define
*	       a game of Othello. This class is used by the game class. In fact
* 	       Othello is a child class of the parent class game.
*
* @author Brock Ferrell
*
* Made for: CS2401
* Date: November 23, 2015
* Assignment: Project 7
*
*
*/

#ifndef OTHELLO_H
#define OTHELLO_H
#include "game.h"
#include "piece.h"
#include "colors.h"
#include <iostream>
using namespace std;

namespace main_savitch_14
{

class Othello: public game {
public:

	Othello() {}


/**
* Function: display_status() const
*
* A normal member of the Othello class that has no arguments. It
* prints the othello board to the console in a stylized manner
*
* @return This function is void
*/
	void display_status()const;
	int evaluate()const;
	bool is_game_over()const;
	bool is_legal(const string& move)const;
	void make_move(const string& move);
	void restart();
	void make_skips();
	void countingPieces();
	void whosTurn();
	game* clone()const{return new Othello(*this);}
	void compute_moves(std::queue<std::string>& moves)const;
	who winning()const;

protected:
	int black;
	int white;
	int skips;
	int openSpots;
	int b;
	int w;

private:
	piece gameBoard[8][8];
};
}

#endif


