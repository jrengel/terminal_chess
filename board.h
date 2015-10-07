#ifndef BOARD_H_
#define BOARD_H_

#include "pieces.h"

class Board
{
public:
	Board();
	void notation_help();
	void start_game();	

	//Function that displays the current board
	void show_board();
	void show_piece();
private:
	//Player names
//	std::string white_player, black_player;

	//Latest move & who's current move
//	std::string latest_move = "White";
//	std::string whose_turn = "White";

	Pawn pawn;

	//An 8x8 array of pointers that point to the parent class "Piece"
	Piece* board[8][8];	//Simple 1x8 array to start off simple
};

#endif	
