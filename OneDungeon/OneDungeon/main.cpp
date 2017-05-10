#include <iostream>
#include "GameManager.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	GameManager gameManager;
	gameManager.startGame();


	std::cin.ignore();

	return 0;
}