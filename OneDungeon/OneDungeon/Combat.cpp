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

int Combat::evade(IPlayer* player, IMonster* enemy)
{
	bool playerDead = false;
	bool evaded = false;
	int result = 0;

	evaded = enemy->calcEvade(player->getEvadeValue());

	if (!evaded)
		playerDead = player->inflictDamage(enemy->getAttackValue());
	else
		std::cout << "You evaded into the previous room!" << std::endl;

	if (!evaded && !playerDead)
		result = 3;
	else if (evaded)
		result = 2;
	else
		result = 1;

	return result;
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
	int playerEvadeResult = 0;

	do
	{
		int playerChoice = getPlayerChoice();

		switch (playerChoice)
		{
		case 1:
			playerDead = attack(player, enemy);
			break;
		case 2:
			playerEvadeResult = evade(player, enemy);
			break;
		}

		if (playerDead || playerEvadeResult == 1)
			std::cout << "You died!" << std::endl;

	} while (!playerDead && playerEvadeResult != 2 && playerEvadeResult != 1);
}

