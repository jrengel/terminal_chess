#include <iostream>
#include <string>

Board::Board()
{
	
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
		show_board();
		std::cout << whose_turn << " to move!: "
	}
}

void Board::show_board()
{
	//Column Header Print
	std::cout << "A   B   C   D   E   F   G   H\n";
	for (j=0; j < 8; j++)
	{
		for (i=0; i < 8; i++)
		{
			std::cout << board[i][j]->showPiece(); << "   ";
		}
	std::cout << i+1 << "\n";
`	}
	
	
		
