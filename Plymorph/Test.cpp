
#include "iostream"
#include "string"
#include "Characters.h"

using namespace std;

void main()
{
	string pause;
	// We do not comment endl; because we assume everyone should know what it means. We just use it to make the console output more readable.

	Character basePlayer; // Constructs a Character
	basePlayer.printInfo(); // Default Print Info that displays all attributes of basePlayer
	cout << endl;
	Character basePlayerWithAttributes = Character("Base", 100); // Constructs an object called basePlayerWithAttributes and sets its attributes to the passed in values.
	basePlayerWithAttributes.printInfo(); // Default print info that displays all attributes of basePlayerWithAttributes

	cout << endl;
	Mage baseMage; // Constructs a Mage using Character as Parent
	baseMage.printInfo(); // Default Print Info from Mage
	cout << endl;
	Mage baseMageWithAttributes = Mage("Jim the Mage", 115, 150, "Fireball"); // Constructs an object called baseMageWithAttributes and sets its attributes to the passed in values.
	baseMageWithAttributes.printInfo(); // Default print info that displays all attributes of baseMageWithAttributes

	cout << endl;
	Warrior baseWarrior; // Constructs a Warrior using Character as Parent
	baseWarrior.printInfo(); // Default Print Info from Warrior
	cout << endl;
	Warrior baseWarriorWithAttributes = Warrior("John the Warrior", 125, 75, "Battle Axe"); // Constructs an object called baseWarriorWithAttributes and sets its attributes to the passed in values.
	baseWarriorWithAttributes.printInfo(); // Default Print Info that displays all attributes of baseWarriorWithAttributes
	cout << endl;

	Mage staticPolyMage = Mage("Jack the Mage", 110, 150, "Blizzard"); // Constructs an object called staticPolyMage and sets its attributes to the passed in values.
	staticPolyMage.printInfo(false); // New Print Info function that accepts a boolean value to determine if we do what is inside the function
	cout << endl;
	Warrior staticPolyWarrior = Warrior("Jill the Warrior", 150, 50, "Great Sword"); // Constructs an object called staticPolyWarrior and sets its attributes to the passed in values.
	staticPolyWarrior.printInfo(true); // New Print Info function that accepts a boolean value to determine if we do what is inside the function
	cout << endl;

	cin >> pause; // This will pause the system, so we can view our output. We elected not to use system ("pause"), but that is another option we could have used.
}