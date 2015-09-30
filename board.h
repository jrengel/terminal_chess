#include <iostream>
#include <string>

Board::Board()
{
	//set up starting spots for pointers
}

void Board::start_game()
{
	std::cout << "Welcome to Terminal Chess! Please enter Player 1's name: "; 
	std::cin >> white_player;
	std::cout << "Please enter Player 2's name: ";
	std::cin >> black_player;

	std::cout << "White to move!: ";
	std::cin >> latest_move;
	if(latest_move == "help")
	{
		std::cout << "Chess notation reminder!\n";
		std::cout << "P for Pawn, K for King, Q for Queen, R for Rook, B for Bishop and H for Knight.\n";
		std::cout << "To make a move, enter move in form [Piece Letter][Starting Position Algebraic Notation][Ending Position Algebraic Notation]\n";
		std::cout << "Some examples would be: 'Pa2a4' / 'Hb8c6' / 'Kd5e5'\n"; 	
		std::cout << "For Kingside castling, simply type '0-0' and for Queenside castling, '0-0-0'\n";

