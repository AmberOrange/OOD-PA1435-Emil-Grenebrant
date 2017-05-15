#include <iostream>
#include "Combat.h"
#include "Dungeon.h"
#include "GameManager.h"
#include "Global.h"
#include "Inventory.h"
#include "Item.h"
#include "Monster.h"
#include "Player.h"
#include "Position.h"
#include "Room.h"



int main()
{
	std::srand(time(NULL));
	Position pos1;
	pos1.x = 1;
	pos1.y = 1;
	Position pos2;

	Monster enemy;
	Monster enemy2;
	Monster* monsterptr;
	Player user;
	Player user2;
	Item* itemptr;
	Room r1;

	int testNr = 0;
	int testNr2 = 0;
	bool test;
	int testSuccess = 0;
	int testFailed = 0;
	int totalTests = 0;
	//****************************************************************
	// Tests for monster inflictDamage, calculateEvade, isMonsterDead 
	// and getAttackValue functions.
	//****************************************************************
	// Expected return is false
	test = enemy.calcEvade(0);
	if (test == false)
	{
		std::cout << "Monster calcEvade(0) test is OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Monster calcEvade(0) test FAILED!" << std::endl;
		testFailed++;
	}

	// Expected return is true
	test = enemy.calcEvade(50000);
	if (test == true)
	{
		std::cout << "Monster calcEvade(50000) test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Monster calcEvade(50000) test FAILED" << std::endl;
		testFailed++;
	}

	// Expected return is false
	test = enemy.inflictDamage(0);
	if (test == false)
	{
		std::cout << "Monster inflictDamage(0) test is OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Monster inflictDamage(0) test FAILED!" << std::endl;
		testFailed++;
	}

	// Expected return is true
	test = enemy.inflictDamage(50000);
	if (test == true)
	{
		std::cout << "Monster inflictDamage(50000) test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Monster inflictDamage(50000) test FAILED" << std::endl;
		testFailed++;
	}

	// Expected return is true
	test = enemy.isMonsterDead();
	if (test == true)
	{
		std::cout << "Monster isMonsterDead() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Monster isMonsterDead() test FAILED" << std::endl;
		testFailed++;
	}

	// Expected return is false
	test = enemy2.isMonsterDead();
	if (test == false)
	{
		std::cout << "Monster isMonsterDead() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Monster isMonsterDead() test FAILED" << std::endl;
		testFailed++;
	}

	// Expected return is a number greater than 0
	testNr = enemy2.getAttackValue();
	if (testNr > 0)
	{
		std::cout << "Monster getAttackValue() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Monster getAttackValue() test FAILED!" << std::endl;
		testFailed++;
	}
	testNr = 0; //reset before next test.
	 
	//******************************************************************
	// Tests for Player getAttackValue, getEvadeValue, inflictDamage,
	// isPlayerDead, getPosition and setPosition
	//******************************************************************
	// Expected return is a number greater than 0
	testNr = user.getAttackValue();
	if (testNr > 0)
	{
		std::cout << "Player getAttackValue() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Player getAttackValue() test FAILED!" << std::endl;
		testFailed++;
	}
	testNr = 0; //reset before next test.

	// Expected return is a number greater than 0
	testNr = user.getEvadeValue();
	if (testNr > 0)
	{
		std::cout << "Player getEvadeValue() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Player getEvadeValue() test FAILED!" << std::endl;
		testFailed++;
	}
	testNr = 0; //reset before next test.

	// Expected return is false
	test = user.inflictDamage(0);
	if (test == false)
	{
		std::cout << "Player inflictDamage(0) test is OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Player inflictDamage(0) test FAILED!" << std::endl;
		testFailed++;
	}

	// Expected return is true
	test = user.inflictDamage(50000);
	if (test == true)
	{
		std::cout << "Player inflictDamage(50000) test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Player inflictDamage(50000) test FAILED" << std::endl;
		testFailed++;
	}

	// Expected return is true
	test = user.isPlayerDead();
	if (test == true)
	{
		std::cout << "Player isPlayerDead() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Player isPlayerDead() test FAILED!" << std::endl;
		testFailed++;
	}

	// Expected return is false
	test = user2.isPlayerDead();
	if (test == false)
	{
		std::cout << "Player isPlayerDead() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Player isPlayerDead() test FAILED!" << std::endl;
		testFailed++;
	}

	// Expected return is Position (1, 1)
	user.setPosition(pos1);
	pos2 = user.getPosition();
	if (pos2.x == pos1.x && pos2.y == pos1.y)
	{
		std::cout << "Player setPosition() and getPosition tests OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Player setPosition() and getPosition tests FAILED!" << std::endl;
		testFailed++;
	}

	//******************************************************************
	// Tests for Room setEnemyAlive(), isMonsterDead(), getMonster() and
	// getLoot() functions.
	//******************************************************************
	r1.generate();
	monsterptr = r1.getMonster();
	// Expected return is not a nullptr
	if (monsterptr != nullptr)
	{
		std::cout << "Room generate() and getMonster test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Room generate() and getMonster test FAILED!" << std::endl;
		testFailed++;
	}

	// Expected return is false
	test = r1.isMonsterDead();
	if (test == false)
	{
		std::cout << "Room isMonsterDead() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Room isMonsterDead() test FAILED!" << std::endl;
		testFailed++;
	}

	// Expected return is not a nullptr
	itemptr = r1.getLoot();
	if (itemptr != nullptr)
	{
		std::cout << "Room getItem() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Room getItem() test FAILED!" << std::endl;
		testFailed++;
	}

	// Expected return is nullptr
	r1.setEnemyStatus(true);
	monsterptr = r1.getMonster();
	if (monsterptr == nullptr)
	{
		std::cout << "Room setEnemyStatus() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << "Room setEnemyStatus() test FAILED!" << std::endl;
		testFailed++;
	}

	//*********************************************************
	// Testing of Inventory functions.
	//*********************************************************
	// create 3 items to test inventory with
	Item testItem1("item1", 0, ITEM::ARMOR, 0);
	Item testItem2("item2", 50, ITEM::WEAPON, 0);

	// empty inventory
	Inventory testInventory;


	// testInventory shall not contain any item
	if (!testInventory.hasItems())
	{
		// currently has no items and shall return false
		std::cout << "Inventory hasItems() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		// returned true and therefor failed
		std::cout << "Inventory hasItems() test FAILED!" << std::endl;
		testFailed++;
	}


	// add item to testInventory and shall now contain a item
	testInventory.addItem(&testItem1);


	// testInventory has now items
	if (testInventory.hasItems())
	{
		// returned true and therefore the function works
		std::cout << "Inventory hasItems() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		// has items and shall not return false
		std::cout << "Inventory hasItems() test FAILED!" << std::endl;
		testFailed++;
	}


	// since this item was added it shall now contain it (see if the values are the same)
	if (testItem1.getString() == testInventory.getItem(testItem1.getString())->getString()
		&& testItem1.getPower() == testInventory.getItem(testItem1.getString())->getPower()
		&& testItem1.getItemType() == testInventory.getItem(testItem1.getString())->getItemType())
	{
		// item returned and therefore a success
		std::cout << "Inventory getItem() and addItem() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		// item not returned and therefore not a success
		std::cout << "Inventory getItem() and/or addItem() test FAILED!" << std::endl;
		testFailed++;
	}

	// adding a second item
	testInventory.addItem(&testItem2);

	// remove first item to see if the second stays
	testInventory.removeItem(&testItem1);

	// since this item was added it shall now contain it (see if the values are the same)
	if (testItem2.getString() == testInventory.getItem(testItem2.getString())->getString()
		&& testItem2.getPower() == testInventory.getItem(testItem2.getString())->getPower()
		&& testItem2.getItemType() == testInventory.getItem(testItem2.getString())->getItemType())
	{
		// item returned and therefore a success
		std::cout << "Inventory getItem() and addItem() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		// item not returned and therefore not a success
		std::cout << "Inventory getItem() and/or addItem() test FAILED!" << std::endl;
		testFailed++;
	}

	// testItem1 has been removed and shall not be in inventory
	if (!testInventory.getItem(testItem1.getString()))
	{
		// item not returned and therefore a success
		std::cout << "Inventory removeItem() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		// item returned and therefore has not been deleted
		std::cout << "Inventory removeItem() test FAILED!" << std::endl;
		testFailed++;
	}

	// removes the last item and inventory shall now be empty
	testInventory.removeItem(&testItem2);


	// check if inventory is empty
	if (!testInventory.hasItems())
	{
		// Inventory is empty
		std::cout << "Inventory removeItem() and hasItems() test OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		// Inventory is not empty and therefore failed
		std::cout << "Inventory removeItem() and/or hasItems() test FAILED!" << std::endl;
		testFailed++;
	}

	// Dungeon related testing

	Dungeon dungeon;
	dungeon.generate();
	Position position = { 0, 0 };
	Item* testLoot;
	int fails = 0;
	for (int i = 0; i < DUNGEON_WIDTH; i++)
	{
		position.x = i;
		for (int j = 0; j < DUNGEON_WIDTH; j++)
		{
			position.y = j;
			testLoot = dungeon.getLoot(position);
			if (testLoot == nullptr)
				fails++;
		}
	}
	std::cout << "Fresh Dungeon: Looted " << (DUNGEON_HEIGHT*DUNGEON_WIDTH) - fails << " rooms out of expected " << (DUNGEON_HEIGHT*DUNGEON_WIDTH);
	if (fails == 0)
	{
		std::cout << " OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << " Failed!" << std::endl;
		testFailed++;
	}

	fails = 0;
	for (int i = 0; i < DUNGEON_WIDTH; i++)
	{
		position.x = i;
		for (int j = 0; j < DUNGEON_WIDTH; j++)
		{
			position.y = j;
			testLoot = dungeon.getLoot(position);
			if (testLoot != nullptr)
				fails++;
		}
	}

	std::cout << "Looted Dungeon: Looted " << fails << " rooms out of expected 0";
	if (fails == 0)
	{
		std::cout << " OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << " Failed!" << std::endl;
		testFailed++;
	}

	fails = 0;
	bool isMonsterDead;
	for (int i = 0; i < DUNGEON_WIDTH; i++)
	{
		position.x = i;
		for (int j = 0; j < DUNGEON_WIDTH; j++)
		{
			position.y = j;
			isMonsterDead = dungeon.isMonsterDead(position);
			if (!isMonsterDead)
				dungeon.setMonsterDead(position);
		}
	}

	std::cout << "Looked through all rooms and killed all monsters OK!" << std::endl;

	for (int i = 0; i < DUNGEON_WIDTH; i++)
	{
		position.x = i;
		for (int j = 0; j < DUNGEON_WIDTH; j++)
		{
			position.y = j;
			isMonsterDead = dungeon.isMonsterDead(position);
			if (!isMonsterDead)
				fails++;
		}
	}

	std::cout << "Enemies remaining in the dungeon: " << fails << " out of expected 0";
	if (fails == 0)
	{
		std::cout << " OK!" << std::endl;
		testSuccess++;
	}
	else
	{
		std::cout << " Failed!" << std::endl;
		testFailed++;
	}


	std::cout << "\n\nTotal number of tests: " << testSuccess + testFailed << std::endl;
	std::cout << "Number of successfull tests: " << testSuccess << std::endl;
	std::cout << "Number of failed tests: " << testFailed << std::endl;

	std::cin.ignore();
	return 0;
}