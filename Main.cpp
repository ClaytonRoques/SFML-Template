#include "iostream"
#include "Game.h"

using std::cout;

int main()
{
	//Init Game engine
	Game game;
	// game loop
	while (game.running())
	{
		

		//Update
		game.update();
		//Render
		game.render();
		//Draw game






		/*

		// clear the window with black color
		window.clear(sf::Color::Black);

		// draw everything here
		sf::CircleShape shape(50.f);
		shape.setFillColor(sf::Color(0, 0, 255));

		sf::CircleShape shape2(50.f);
		shape2.setFillColor(sf::Color::Cyan);
		shape2.setOrigin(-97.f, 0.f);
		window.draw(shape);
		window.draw(shape2);

		// end the current frame
		window.display();
		*/
	}
	return 0;
}