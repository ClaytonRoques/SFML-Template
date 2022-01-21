
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "iostream"
using std::cout;

int main()
{
	sf::RenderWindow window(sf::VideoMode(300, 200), "Test");

	// run the program as long as the window is open
	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event e;
		while (window.pollEvent(e))
		{
			switch (e.type)
			{
			case sf::Event::Closed:
				cout << "Close command received\n";
				window.close();
			case sf::Event::LostFocus:
				cout << "Lost focus\n";
			case sf::Event::GainedFocus:
				cout << "Gained focus\n";
			}
		}

		// clear the window with black color
		window.clear(sf::Color::Black);

		// draw everything here
		sf::CircleShape shape(50.f);
		shape.setFillColor(sf::Color(0, 0, 255));

		sf::CircleShape shape2(50.f);
		shape2.setFillColor(sf::Color(0, 0, 255));
		shape2.setOrigin(-97.f, 0.f);
		window.draw(shape);
		window.draw(shape2);

		// end the current frame
		window.display();
	}
	return 0;
}