#include "Combat.h"



int Combat::getPlayerChoice()
{
	int playerChoice = 0;

	std::cout << "A wild monster appeared!" << std::endl;

	do
	{
		std::string inputChoice = "";
		std::cout << "What do you want to do?" << std::endl;
		std::cin >> inputChoice;

		if (inputChoice == "attack" || inputChoice == "Attack" || inputChoice == "att")
		{
			playerChoice = 1;
		}
		else if (inputChoice == "evade" || inputChoice == "Evade" || inputChoice == "ev")
		{
			playerChoice = 2;
		}
		else
		{
			std::cout << "\nInvalid input" << std::endl;
		}

	} while (!playerChoice);

	return playerChoice;
}

Combat::Combat()
{
}


Combat::~Combat()
{
}

void Combat::initCombat(IPlayer* player, IMonster* enemy)
{
	bool playerDead = false;
	bool playerEvaded = false;

	do
	{
		int playerChoice = getPlayerChoice();

		switch (playerChoice)
		{
		case 1:
			playerDead = attack(player, enemy);
			break;
		case 2:
			playerEvaded = evade(player, enemy);
			break;
		}

		if (playerDead)
			std::cout << "You died!" << std::endl;

	} while (!playerDead && !playerEvaded);
}

bool Combat::attack(IPlayer* player, IMonster* enemy)
{
	bool playerDead = false;
	bool monsterDead = false;

	monsterDead = enemy->inflictDamage(player->getAttackValue());

	if (!monsterDead)
		playerDead = player->inflictDamage(enemy->getAttackValue());
	else
		std::cout << "You killed the monster!" << std::endl;

	return playerDead;
}

bool Combat::evade(IPlayer* player, IMonster* enemy)
{
	bool playerDead = false;
	bool evaded = false;

	evaded = enemy->calcEvade(player->getEvadeValue());

	if (!evaded)
		playerDead = player->inflictDamage(enemy->getAttackValue());
	else
		std::cout << "You evaded into the previous room!" << std::endl;

	return playerDead;
}
