#include "GameManager.h"

GameManager::GameManager()
{

}

void GameManager::startGame()
{
	Position currentPos = this->cave.generate();
	this->user.create(currentPos);
}

void GameManager::checkMap()
{
	this->cave.display();
}

void GameManager::move(std::string direction)
{

}

void GameManager::loot()
{

}
