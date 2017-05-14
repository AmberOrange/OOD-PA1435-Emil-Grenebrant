#include "Combat.h"



int Combat::getPlayerChoice()
{
	int playerChoice = 0;

	do
	{
		std::string inputChoice = "";
		std::cout << "\nWhat do you want to do?" << std::endl;
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
	bool combatOver = false;

	monsterDead = enemy->inflictDamage(player->getAttackValue());

	if (!monsterDead)
		playerDead = player->inflictDamage(enemy->getAttackValue());
	else
		std::cout << "\nYou killed the monster!\n" << std::endl;

	if (playerDead || monsterDead)
		combatOver = true;

	return combatOver;
}

bool Combat::evade(IPlayer* player, IMonster* enemy)
{
	bool playerDead = false;
	bool combatOver = false;
	bool evaded = false;

	evaded = enemy->calcEvade(player->getEvadeValue());

	if (!evaded)
	{
		std::cout << "\nYou failed to evade!" << std::endl;
		playerDead = player->inflictDamage(enemy->getAttackValue());
	}
	else
		std::cout << "\nYou evaded into the previous room!" << std::endl;

	if (playerDead || evaded)
		combatOver = true;

	return combatOver;
}

Combat::Combat()
{
}


Combat::~Combat()
{
}

bool Combat::initCombat(IPlayer* player, IMonster* enemy)
{
	bool combatOver = false;
	int playerEvadeResult = 0;

	std::cout << "\nA wild monster appeared!" << std::endl;	

	do
	{
		player->displayHealth();
		enemy->displayHealth();

		int playerChoice = getPlayerChoice();

		switch (playerChoice)
		{
		case 1:
			combatOver = attack(player, enemy);
			break;
		case 2:
			combatOver = evade(player, enemy);
			break;
		}

	} while (!combatOver);

	return player->isPlayerDead();
}

