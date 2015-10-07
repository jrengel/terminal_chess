#include <iostream>
#include "pieces.h"

Piece::Piece()
{
	std::cout << "Applying PIECE() constructor!\n";
	piece_symbol = '~';
}

char Piece::showPiece()
{
	return piece_symbol;
}

Pawn::Pawn()
{
	std::cout << "Applying PAWN() Constructor!" << std::endl;
	piece_symbol = 'P';
}

Pawn::~Pawn()
{
	std::cout << "Applying ~PAWN() Destructor!" << std::endl;
}
