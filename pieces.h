#ifndef PIECES_H_
#define PIECES_H_

class Piece
{
public:
	Piece();
	char showPiece();	//Returns the char character that represents the piece	
	char piece_symbol;		//A tilde means "blank space"
private:
};

class Pawn: public Piece 
{
public:
	Pawn();
	~Pawn();
	
private:


};

#endif
