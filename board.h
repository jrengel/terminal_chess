#include <iostream>
#include <string>

Board::Board()
{
	//Initialize positions for Piece Pointers - a better way to do this would be helpful.
	Piece *board[1][1] =  
}

void Board::notation_help()
{
	std::cout << "Chess notation reminder!\n";
	std::cout << "P for Pawn, K for King, Q for Queen, R for Rook, B for Bishop and H for Knight.\n";
	std::cout << "To make a move, enter move in form [Piece Letter][Starting Position Algebraic Notation][Ending Position Algebraic Notation]\n";
	std::cout << "Some examples would be: 'Pa2a4' / 'Hb8c6' / 'Kd5e5'\n"; 	
	std::cout << "For Kingside castling, simply type '0-0' and for Queenside castling, '0-0-0'\n";
}
void Board::start_game()
{
	//Ask for input of first move. 
	std::cout << whose_turn << " to move!: ";
	std::cin >> latest_move;
	if(latest_move == "help")
	{
		notation_help();
		std::cout << whose_turn << " to move!: "
	} else {
		
		
	} 
	
