#ifndef PIECES_H_
#define PIECES_H_

Piece::Piece()
{
	piece_symbol = '~';
}

char Piece::showPiece()
{
	return piece_symbol;
}

Pawn::Pawn()
{
	piece_symbol = 'P';
}








#endif
