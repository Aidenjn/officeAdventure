
/****************************************************** 
 * ** Program: officeAdventure.cpp 
 * ** Author: Aiden Nelson
 * ** Date: 1/21/2017 
 * ** Description: A text based adventure. Player can make choices which will enevtually lead to them getting fired or promoted.
 * ** Input: User choices(ex: option 1, 2, 3...) 
 * ** Output: Text story.
 * ******************************************************/
#include <iostream>
#include <ctime> 
#include <cstdlib> 

using namespace std;

//int optionCheck3 (int option) {
	
//	while (cin.fail()) {
//		cout << "That is not an option, try again: ";
//		cin << option
//	}
//	return option
//}

int main() {

	bool playAgain = true;
	int luck = 4;
	bool coffee = false;
	int optionNumber = 0;
	int chance = 0;

	while (playAgain == true) {
		
		luck = 5;
		coffee = false;
		playAgain = false;

		cout << "You're at work. The current time is 8:06 am. What would you like to do?" << endl;
		cout << "option 1: Sleep" << endl;
		cout << "option 2: Work" << endl;
		cout << "option 3: Grab some coffee" << endl;
		cout << "Please enter the number of the option you would like to take: ";
		cin >> optionNumber;
		cout << " " << endl;

		if (optionNumber == 1) {
			cout << "You take a delicous nap. The slumber seems to open your pores as you are carried away into a deep and delightful dream." << endl;
			cout << "Suddenly a man shakes you awake. It's Jeffery." << endl;
			cout << " " << endl;
			cout << "\" Howdy fellow co-worker! How is your spirit on this fine and finicky day?\" " << endl;
			cout << " " << endl;
			luck--;
		}
		else if (optionNumber == 2) {
			cout << "You start to go to work. You work hard. You start to sweat. Stars start to dance around the room. Way to stay focused!" << endl;
			cout << "Suddenly a man walks up to you and gives you a smile." << endl;
			cout << " " << endl;
			cout << "\" Howdy fellow co-worker! How is your spirit on this fine fantastic day?\" " << endl;
			luck++;
		}
		else {
			cout << "You walk over to the coffee machine and grab some Folgers Columbian Dark Roast™." << endl;
			cout << "Jeffery, your fellow co-worker, is standing nearby. Looks like he's about to grab some coffee." << endl;
			coffee = true;
		}

//encounter Jeffery
		cout << " " << endl;
		cout << "Jeffery is staring at you with big bright eyes. What would you like to do?" << endl;
		cout << "option 1: Talk about his wife's recent passing" << endl;
		cout << "option 2: Talk about the weather" << endl;
		if (coffee == 1) {
			cout << "option 3: Offer Jeffery some coffee." << endl;
		}
		cout << "Please enter the number of the option you would like to take: ";
		cin >> optionNumber;
		cout << " " << endl;
		cout << " " << endl;		
		if (optionNumber == 1) {
//Ask Jeffery about wife's passing
			cout << "You choose to make conversation with Jeffery about his wife's tragic death which had occured no less than a week ago. Now what was her name again?" << endl;
			cout << "option 1: Annabelle" << endl;
			cout << "option 2: Sarah" << endl;
			cout << "option 3: David" << endl;
			cout << "Please enter the number of the option you would like to take: ";
			cin >> optionNumber;
			cout << " " << endl;
			cout << " " << endl;
			if (optionNumber == 1) {
				cout << "\" Jeffery, I heard about what happened to Annabelle, and I just wanted to tell you that if you need a friend, I'll be there for you.\" " << endl;
				cout << " " << endl;
				cout << "\" Thanks dude, I have always wanted a friend like you!\" " << endl;
				cout << " " << endl;
				cout << "Jeffery gives you a high five and walks away." << endl;
				luck = luck + 3;
			}
			else if (optionNumber == 2) {
				cout << "\" Hey Jeffery, I heard about Sarah. I wanted to offer you my condolences.\" " << endl;
				cout << " " << endl;
				cout << "Jeffery walks up to your face and gives you a light but passionate slap on the cheek." << endl;
				cout << " " << endl;	
				cout << "\" That's not my name you hooligan!\" he tells you as he runs off saltily." << endl;
				luck--;
			}
			else {
				cout << "\" Was your wife's name David?\" you ask." << endl;
				cout << " " << endl;
				cout << "\" No, that's my son.\" he says sadly. He then turns and walks away, a tear glistening on his right cheek." << endl;
				luck -= 2;
			}
		}
		else if (optionNumber == 2) {
			cout << "\" Nice weather we're having today. Have you seen the meaty raindrops outside? They sure make me thirsty for a cold mountain dew!\" you tell him vigorously." << endl;
			cout << " " << endl;
			cout << "Jeffery gives you a wink and goes back to his desk." << endl;
			luck++;
		}
		else {
			cout << "\" Thanks for the offer but I hate coffee. My wife died from a hypercaffeinated pumpkin latte that she bought from starbucks.\" " << endl;
			cout << " " << endl;
			cout << "Jeffery slaps the coffee out of your hand. It falls slowly to the floor and creates a massive coffee stain. He turns and walks away with a tear glistening on his left cheek." << endl;
			coffee = false;
			luck--;
		}

// sitting at desk
		cout << " " << endl;
		cout << " " << endl;
		cout << "The current time is 10:42 am. What would you like to do?" << endl;
		cout << "option 1: Use the restroom" << endl;
		cout << "option 2: Staple stuff" << endl;
		if (coffee == true) {
			cout << "option 3: Drink Coffee" << endl;
		}
		cout << "Please enter the number of the option you would like to take: ";
		cin >> optionNumber;
		cout << " " << endl;
		cout << " " << endl;
		if (optionNumber == 1) {
			cout << "You choose to use the restroom. You have a great time and immediately start to feel better. Now that you're done how would you like to proceed?" << endl;
			cout << "option 1: Wash hands" << endl;
			cout << "option 2: Be a dirty dan" << endl;
			cout << "Please enter the number of the option you would like to take: ";
			cin >> optionNumber;
			cout << " " << endl;
			cout << " " << endl;
			if (optionNumber == 1) {
				cout << "You come out of that room clean as a whistle." << endl;
			}
			else {
				cout << "You come out of that room with pride eminating from you like the sun." << endl;
				luck++;
			}
		}
		else if (optionNumber == 2) {
			cout << "You wind up accidently stapling yourself. Tough luck." << endl;
			luck++;
		}
		else {
			cout << "You take a big inhale of coffee, it burns your lungs and you spit it all over the floor." << endl;
		}
//Meet the boss	
		cout << " " << endl;
		cout << " " << endl;
		cout << "Your boss walks by, he's looking suave. What would you like to do? This is your moment." << endl;
		cout << "option 1: Ask for a promotion" << endl;
		cout << "option 2: Tell a joke" << endl;
		if (coffee == true) {
			cout << "option 3: Offer coffee" << endl;
		}
		cout << "Please enter the number of the option you would like to take: ";
		cin >> optionNumber;
		cout << " " << endl;
		cout << " " << endl;
		if (optionNumber == 1) {
			luck--;
		}
		else if (optionNumber == 2) {
			cout << "\" Two windmills are standing in a field, one says to the other: Are you a big metal fan?\" " << endl;
			luck--;
		}
		else {
			cout << "You feed the coffee to your boss being careful not to get any drops on his custom tailored suit." << endl;
			luck++;
		}
		cout << " " << endl;
		
		chance = rand() % 10;

		if (chance < luck) {
			cout << "Your boss gives you a big smile." << endl;
			cout << " " << endl;
			cout << "\" You've been working pretty hard today, and I like the cut of your jibby. I think it's time you got a promotion.\" " << endl;
			cout << " " << endl;
			cout << "Congratulations, you won!" << endl;
		}
		else {
			cout << "Your boss frowns." << endl;
			cout << " " << endl;
			cout << "\" You've been screwing around this office all day. I'm sick of it. Please leave, you're fired.\" " <<endl;
			cout << " " << endl;
			cout << "Game over, you lose." << endl;
		}

		cout << "Would you like to play again?" << endl;
		cout << "option 1: Yes" << endl;
		cout << "option 2: No" << endl;
		cout << "Please enter the number of the option you would like to take: ";
		cin >> optionNumber;
		cout << " " << endl;
		
		if (optionNumber == 1) {
			playAgain = true;
		}
		else {
			playAgain = false;
		}
	}

	return 0;
}
