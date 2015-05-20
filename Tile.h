#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "Texture.h"

class Tile
{
	public:
		//Constructor 
		Tile(int t, SDL_Renderer* rend, int x, int y);
		//Deconstuctor (just calls free())
		~Tile();

		//Renders with the renderer the tile on the right X and Y
		int render();
		void setRenderer(SDL_Renderer* rend);

		//Deallocates all the stuff that should be deallocated, ie. texture
		void free();

		//Gets image dimensions
		int getWidth();
		int getHeight();

		//Gets location
		int getX();
		int getY();

		//Changes type, to be used when a tile is conquered
		int changeType(int newType);

		//This is where we add other stuff that determine the composition of a tile, \
		  such as terrain, units, income, resources, ect. \
		  FYI placing a backslash before a new line continues the comment.

	private:
		Texture tTex;
		int posX, posY;
		int width, height;
		int type;
		/*
			0: Unclaimed
			1: Triangle
			2: Square
			3: Pentagon
		*/
}