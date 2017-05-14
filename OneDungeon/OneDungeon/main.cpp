#include <iostream>
#include "GameManager.h"

int main()
{

	GameManager gameManager;
	gameManager.startGame();

	std::string userInput;

	std::cout << "You awake in a dank cave" << std::endl << std::endl;
	
	while (!gameManager.isPlayerDead() && userInput != "exit")
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
		else if (userInput == "openinventory")
		{
			gameManager.openUserInventory();
		}
		else if (userInput == "Loot" || userInput == "loot")
		{
			gameManager.loot();
		}
		else if(userInput != "exit")
		{
			std::cout << "Invalide input" << std::endl;
		}
	}


	std::cout << "Press any key to exit... ";
	std::cin.ignore();

	return 0;
}