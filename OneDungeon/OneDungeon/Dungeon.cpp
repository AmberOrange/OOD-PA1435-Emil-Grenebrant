#include "Dungeon.h"

Dungeon::Dungeon()
{
}

Dungeon::~Dungeon()
{
	for (int i = 0; i < DUNGEON_WIDTH; i++)
	{
		delete[] this->rooms[i];
	}
	delete[] this->rooms;
	this->rooms = nullptr;
}

Position Dungeon::generate()
{
	this->rooms = new Room*[DUNGEON_WIDTH];
	for (int i = 0; i < DUNGEON_WIDTH; i++)
	{
		this->rooms[i] = new Room[DUNGEON_HEIGHT];
		for (int j = 0; j < DUNGEON_HEIGHT; j++)
		{
			this->rooms[i][j].generate();
		}
	}
	Position randPos =
	{
		std::rand() % DUNGEON_WIDTH,
		std::rand() % DUNGEON_HEIGHT
	};

	this->rooms[randPos.x][randPos.y].setEnemyAlive(false);

	return randPos;
}

void Dungeon::display()
{
}

Position Dungeon::getRoomPosition(std::string direction, Position pos)
{
	return Position();
}

IMonster* Dungeon::getMonster(Position pos)
{
	return rooms[pos.x][pos.y].getMonster();
}

Item* Dungeon::getLoot(Position pos)
{
	return this->rooms[pos.x][pos.y].getLoot();
}

void Dungeon::setRoomLoot()
{
}
