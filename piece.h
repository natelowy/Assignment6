///@file piece.h
/** 
* @brief This file contains both the header and implementations of the piece class.
* Brock Ferrell
* CS2401
* November 23, 2015
* Project7
*/

#ifndef PIECE_H
#define PIECE_H
enum color {black, white, blank};

class piece {
public:
	piece() {theColor = blank;}

	void flip()
	{
		if (theColor == white) {
			theColor = black;
		}
		else if (theColor == black) {
			theColor = white;
		}
	}

	bool is_blank()const {return theColor == blank;}
	bool is_black()const {return theColor == black;}
	bool is_white()const {return theColor == white;}
	/**Sets the piece color to white
	*@param theColor
	*@return Returns the value of theColor as color white
	*/
	void set_white(){theColor = white;}
	void set_black() {theColor = black;}

private:
	color theColor;

};

#endif

