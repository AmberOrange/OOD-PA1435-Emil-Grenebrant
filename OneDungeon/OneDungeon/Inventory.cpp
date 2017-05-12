#include "Inventory.h"


Inventory::Inventory()
{
}

Inventory::~Inventory()
{
}

// equip item
void Inventory::equip(std::string choice, IPlayer* player)
{
	// Get gear name
	char* temp;
	choice.copy(temp, 100, 6);
	std::string gear = temp;

	// If string contains null values
	int counter = 0;
	while (gear[counter] != NULL)
		counter++;
	gear[counter] = '\0';

	// Get gear and set it
	IItem* item = this->getGear(gear);
	player->setGear(item);
}

// Return item of choice, if gear
IItem* Inventory::getGear(std::string choice)
{
	int size = this->items.size();
	for (int i = 0; i < size; i++)
	{
		if (choice == this->items[i])
			return this->items[i];
	}

	return nullptr;
}

// use consumables
void Inventory::use(std::string choice, IPlayer* player)
{

}

bool Inventory::isItem(std::string choice)
{
	return true;
}

std::string Inventory::getPlayerChoice()
{
	std::string choice;
	std::cout << "What would you like to do?" << std::endl;
	
	do {
		std::cin >> choice;
	} while (choice != "Equip" || choice != "Use" || choice != "Exit");

	return choice;
}

// Open inventory
void Inventory::inventory(IPlayer* player)
{
	std::string choice = 0;
	int size = 0;

	/* Display all items in inventory

	std::cout << "Items in inventory: " << std::endl;


	size = this->items.size();
	for (int i = 0; i < size; i++)
		this->items[i]->display();
	*/

	do {

		choice = this->getPlayerChoice();
		
		// Equip
		if (choice[0] == 'E' 
			&& choice[1] == 'q' 
			&& choice[2] == 'u'
			&& choice[3] == 'p'
			&& choice[4] == 'i'
			&& choice[5] == 'p')
		{
			this->equip(choice, player);
		}

		// Use
		else if (choice[0] == 'U'
			&& choice[1] == 's'
			&& choice[2] == 'e')
		{
			this->use(choice, player);
		}

	} while (choice != "Exit");	// Exit if player writes 0
}