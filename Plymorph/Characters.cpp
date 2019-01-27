
// This file contains all function bodies for characters.h

#include "iostream"
#include "Characters.h"
#include "string"


using namespace std;


Character::Character() // default constructor body
{
}
Character::Character(string baseName, int baseHealth) // my constructor body for Character
{
	name = baseName; // set name to the value passed in for baseName
	health = baseHealth; // set health to the value passed in for baseHealth
}
string Character::getName() // getName function body
{
	return name; // return the name attribute
}
int Character::getHealth() // getHealth function body
{
	return health; // return the health attribute
}
void Character::setName(string baseName) // setName function body, accepts a string
{
	name = baseName; // set name to the value passed in for baseName
}
void Character::setHealth(int baseHealth) // setHealth function body, accepts an int
{
	if (baseHealth <= 0) // if baseHealth is less than or equal to 0
	{
		cout << "Invalid Health Value Setting Health to 1 \n"; // tell user the value is not acceptable
		health = 1; // and set the health attribute value to 1
	}
	else // if baseHealth is not less than or equal to 0
	{
		health = baseHealth; // set health to the value passed in for baseHealth
	}
}
void Character::printInfo() // printInfo function body
{
	cout << "Name: " << name << endl; // print attribute of name
	cout << "Health: " << health << endl; // print attribute of health
}



Mage::Mage() // default constructor for Mage
{
}
Mage::Mage(string mageName, int mageHealth, int mageMana, string mageSpell) // constructor for mage that takes in 4 arguments, 2 of these are from parent class, 2 of them are from this class
{
	name = mageName; // set parent constructor value for name to the value passed in for mageName
	health = mageHealth; // set parent constructor value for health to value passed in for mageHealth
	mana = mageMana; // set attribute for mana to value passed in for MageMana
	spell = mageSpell; // set attribute spell to value passed in for mageSpell
}
int Mage::getMana() // function body for getMana
{
	return mana; // returns the value stored for the mana attribute
}
string Mage::getSpell() // function body for getSpell
{
	return spell; // returns the value stored for the spell attribute
}
void Mage::setMana(int mageMana) // function body for setMana
{
	mana = mageMana; // set mana attribute to the value passed in for mageMana
}
void Mage::setSpell(string mageSpell) // function body for setSpell
{
	spell = mageSpell; // set spell attribute to the value passed in for mageSpell
}
void Mage::printInfo() // function body for printInfo
{
	cout << "Name: " << name << endl; // display the attribute stored in name
	cout << "Health: " << health << endl; // display the attribute stored in health
	cout << "Mana: " << mana << endl; // display the attribute stored in mana
	cout << "Spell: " << spell << endl; // display the attribute stored in spell
}
void Mage::printInfo(bool print) // function body for printInfo
{
	Character::printInfo(); // access the printInfo function from the parent class
	if (print) // if the passed in boolean is true
	{
		cout << "Mana: " << mana << endl; // display the attribute stored in mana
		cout << "Spell: " << spell << endl; // display the attribute stored in spell
	}
}

// Everything in warrior works the same way it does for mage, so I won't be commenting Warrior

Warrior::Warrior()
{
}
Warrior::Warrior(string warriorName, int warriorHealth, int warriorStamina, string warriorWeapon)
{
	name = warriorName;
	health = warriorHealth;
	stamina = warriorStamina;
	weapon = warriorWeapon;
}
int Warrior::getStamina()
{
	return stamina;
}
string Warrior::getWeapon()
{
	return weapon;
}
void Warrior::setStamina(int warriorStamina)
{
	stamina = warriorStamina;
}
void Warrior::setWeapon(string warriorWeapon)
{
	weapon = warriorWeapon;
}
void Warrior::printInfo()
{
	cout << "Name: " << name << endl;
	cout << "Health: " << health << endl;
	cout << "Stamina: " << stamina << endl;
	cout << "Weapon: " << weapon << endl;
}
void Warrior::printInfo(bool print)
{
	Character::printInfo();
	if (print)
	{
		cout << "Stamina: " << stamina << endl;
		cout << "Weapon: " << weapon << endl;
	}
}