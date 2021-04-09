#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variables for game
	string roomOneChoice;
	string roomTwoChoice;
	string roomThreeChoice;
	string roomFourChoice;

	bool saveNeighbour = false;

	int badChoices = 0;

	string surviveOrDeath;//could make into a bool later

	//Welcome player to game
	cout << "Welcome to Zombie Simulater !" << endl;

	//Read files conataining the storyline here
	//cout << "A science experiment gone wrong, has resulted in a new deadly virus infecting the living, and dead ! A zombie outbreak is bound to happen soon, can you survice the night of the dead ? Or will the undead feast on your brains ?" << endl;

	//Start game 
	cout << "Room 1: The living room" << endl;
	cout << "One chilling evening, an emergency alert pops up on the TV. The Prime Minister of Canada says 'This is not a test, I repeat this is not a test, there has been a zombies outbreak!'. The TV cuts out, and there is the chilling sound of the undead swarming your house. They immedietely start breaking down the windows. " << endl;
	cout << "Choices: 'Panick', 'Run', or 'Barricade windows'" << endl;
	getline(cin, roomOneChoice);//Gets users choice for room 1
	cout << endl;

	if (roomOneChoice == "Panick")
	{
		cout << "You panicked ! Big mistake, in the state of panick you did not hear the zombie that got through the back and got bitten. Stay calm next time ! Youre able to fight the zombie off your back, but not without some severe injuries. " << endl;
		badChoices++;
	}
	else if (roomOneChoice == "Run")
	{
		cout << "You ran ! You run directly to the closet for a baseball bat to defend yourself. Smart choice. " << endl;
		
	}
	else if (roomOneChoice == "Barricade windows")
	{
		cout << "You chose to barricade the windows ! You grab any furniture you can and play it up against the window, slowing the zombies from breaking in. Buys you time to get your baseball bat from the closet. " << endl;
	}
	else
	{
		cout << "Error: Bad input, please make sure you are type the choices exactly how they are presented. " << endl;
	}

	//Room 2
	cout << endl << "Room 2: The closet" << endl;
	cout << "You are now in a closet. Good news is you have a weapon to defend youself with. The bad news is the zombies are closing in." << endl;
	cout << "Choices: 'Lock door', 'Fight', 'Grab Hazmat'" << endl;
	getline(cin, roomTwoChoice);//Gets users choice for room 2

	if (roomTwoChoice == "Lock door")
	{
		cout << "You locked the door ! Bad choice, the zombies now are breaking down the door. Luckily you escape once the door broke down, but not without some consequences. You make your way into the kitchen for medical supplies, but then you see your neighbour being surrounded by zombies outside of the window" << endl;
		badChoices++;
	}
	else if (roomTwoChoice == "Fight")
	{
		cout << "You fight your way through the zombies, and make your way into the kitchen where you see the your neighbour being surrounded outside." << endl;
	}
	else if (roomTwoChoice == "Grab Hazmat")
	{
		cout << "You grab the Hazmat suit, and use it as armor to run your way through the horde of zombies, and make your way into the kitchen. You look out the window, and see your neighbour being swarmed by a pack of zombies. " << endl;
	}

	//Room 3 
	cout << endl << "Room 3: The kitchen" << endl;
	cout << "You are now in the kitchen. With your neighbour struggling to fight off the zombies, you have some tough choices to make." << endl;
	cout << "Choices: 'Pass bat', 'Open Window', 'Defend Yourself'" << endl;
	getline(cin, roomThreeChoice); //Gets users choice for room 3

	if (roomThreeChoice == "Pass bat")
	{
		cout << "You passed the bat to your neighbour ! An honourable sacrifice, but it will cost you a limb or two ! " << endl;
		badChoices++;
	}
	else if (roomThreeChoice == "Open Window")
	{
		cout << "You opened the window to save your neighbour ! You now have support. " << endl;
		saveNeighbour = true;
	}
	else if (roomThreeChoice == "Defend Yourself")
	{
		cout << "You defend yourself, but sadly your neighbour gets overwhelmed. " << endl;
		saveNeighbour = false;
	}

	//Room 4
	cout << endl << "Room 4: The final choice" << endl;
	cout << "You now are faced with the final challenge. Zombies are now overwhelming the house, and your choices are limited, but you must escape the house. " << endl;
	cout << "Choices: 'Front Door', 'Window', 'Back Door'" << endl;
	getline(cin, roomFourChoice); //Gets users choice for room 4

	if (roomFourChoice == "Front Door")
	{
		cout << "You chose to run out the front door ! Bad choice, remember this is where the zombies original attacked from !" << endl;
		badChoices++;
	}
	else if (roomFourChoice == "Window")
	{
		cout << "You chose to jump put the window ! Bad idea, remember this is where your neighbour was just attacked from !" << endl;
		badChoices++;
	}
	else if (roomFourChoice == "Back Door")
	{
		cout << "You chose to run out the back door ! Good choice, the least amount of zombies are there." << endl;
	}




	return 0;
}