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
	Position currentPos;
	IMonster* enemy;
	currentPos = user.getPosition();

	if (direction == "north" || direction == "North")
	{
		currentPos.y += 1;
		if ( currentPos.y <= DUNGEON_HEIGHT )
		{
			user.setPosition(currentPos);
		}
		else
		{
			std::cout << "The tunnel was a dead end." << std::endl;
		}
	}
	else if (direction == "west" || direction == "West")
	{
		currentPos.x -= 1;
		if ( currentPos.x >= 0 )
		{
			user.setPosition(currentPos);
		}
		else
		{
			std::cout << "The tunnel was a dead end." << std::endl;
		}
	}
	else if (direction == "south" || direction == "South")
	{
		currentPos.y -= 1;
		if ( currentPos.y >= 0 )
		{
			user.setPosition(currentPos);
		}
		else
		{
			std::cout << "The tunnel was a dead end." << std::endl;
		}
	}
	else if (direction == "east" || direction == "East")
	{
		currentPos.x += 1;
		if ( currentPos.x <= DUNGEON_WIDTH )
		{
			user.setPosition(currentPos);
		}
		else
		{
			std::cout << "The tunnel was a dead end." << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid input" << std::endl;
	}

	if (currentPos.x >= 0 && currentPos.x <= DUNGEON_WIDTH &&
		currentPos.y >= 0 && currentPos.y <= DUNGEON_HEIGHT)
	{
		enemy = cave.getMonster(currentPos);

		if (enemy != nullptr)
		{
			combat.initCombat(&this->user, enemy);
		}
		else
		{
			std::cout << "There is no monster in this room." << std::endl;
		}
	}
}

void GameManager::loot()
{

}

bool GameManager::isPlayerDead()
{
	return this->user.isPlayerDead();
}
