#include <iostream>
#include "GameManager.h"

int main()
{

	GameManager gameManager;
	gameManager.startGame();

	std::string userInput;

	std::cout << "You awake in a dank cave" << std::endl << std::endl;
	
	while (!gameManager.isPlayerDead())
	{
		std::cout << "What do you do: ";
		std::cin >> userInput;
		std::cin.ignore();
		std::cout << std::endl;

		if (userInput == "Move" || userInput == "move")
		{
			std::cout << "In which direction do you wish to move: ";
			std::cin >> userInput;
			std::cin.ignore();
			std::cout << std::endl;
			gameManager.move(userInput);
		}
		else
		{
			std::cout << "Invalide input" << std::endl;
		}
	}



	std::cin.ignore();

	return 0;
}