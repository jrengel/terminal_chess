#include <board.h>

class Board
{
public:
	Board();
	void notation_help();
	void start_game();	

private:
	//Function that displays the current board
	void show_board();

	//Player names
	std::string white_player, black_player;

	//Latest move & who's current move
	std::string latest_move = "White";
	std::string whose_turn = "White";

	//Black pieces are noted by a "b" at the end
	Pawn pawn;
/*	Rook rook;
	Horse horse;
	Bishop bishop;
	Queen queen;
	King king;
*/
	//Pointers for white objects
/*	Pawn* pointer_pw1 = &pawn;
	Pawn* pointer_pw2 = &pawn;
	Pawn* pointer_pw3 = &pawn;
	Pawn* pointer_pw4 = &pawn;
	Pawn* pointer_pw5 = &pawn;
	Pawn* pointer_pw6 = &pawn;
	Pawn* pointer_pw7 = &pawn;
	Pawn* pointer_pw8 = &pawn;
	Rook* pointer_rw1 = &rook;
	Rook* pointer_rw2 = &rook;
	Horse* pointer_hw1 = &horse;
	Horse* pointer_hw2 = &horse;
	Bishop* pointer_bw1 = &bishop;
	Bishop* pointer_bw2 = &bishop;
	King* pointer_kw = &king;
	Queen* pointer_qw = &queen;

	//Pointers for black objects
	Pawn* pointer_pb1 = &pawn;
	Pawn* pointer_pb2 = &pawn;
	Pawn* pointer_pb3 = &pawn;
	Pawn* pointer_pb4 = &pawn;
	Pawn* pointer_pb5 = &pawn;
	Pawn* pointer_pb6 = &pawn;
	Pawn* pointer_pb7 = &pawn;
	Pawn* pointer_pb8 = &pawn;
	Rook* pointer_rb1 = &rook;
	Rook* pointer_rb2 = &rook;
	Horse* pointer_hb1 = &horse;
	Horse* pointer_hb2 = &horse;
	Bishop* pointer_bb1 = &bishop;
	Bishop* pointer_bb2 = &bishop;
	King* pointer_kb = &king;
	Queen* pointer_qb = &queen;
*/
	//An 8x8 array of pointers that point to the parent class "Piece"
	Piece* board[8][8];	//Simple 1x8 array to start off simple
}	
