// Lost Fortune 
// A personalized adventure game

#include <iostream>
#include <iostream>

using std::cout; //:: is scope resolution operator
using std::cin;
using std::endl;
using std::string;

//literals are elements that represent explicit values
//"Game Over" is a string literal while 32 are numeric literal

int main()
{
	const int GOLD_PIECES = 1000;//GOLD_PIECES is a constant that stores num of gold pieces
	// in the fortune the adventurers seek
	int adventurers, killed, survivors;
	//adventurers stores the num of adventurers on the quest
	//killed stores the number that are killed on the journey
	//survivors are for the num of adventurers that remain

	string leader; //string variable that holds the name of the player
	//string type can hold more than one character (char)

	//get the information
	cout << "Welcome to the Game, Lost Fortune \n\n"; // new lines \n must be within the string to work
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	cin >> adventurers;

	//cin gets the string from the user only with strings that have no whitespace like tabs or spaces


	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	//telling the story here

	cout << "\nA brave group of " << adventurers << " set out on a quest " << "\n";
	cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue, " << leader << ".\n";
	cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought admirably under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventurers, " << killed << " were vanquished, ";

	cout << "leaving just " << survivors << " survivors in the group. \n";

	cout << "\nThe party was about to give up all hope. ";
	cout << "But while laying the deceased to rest, ";
	cout << "they stumbled upon the buried fortune. ";
	cout << "So the adventurers spilt " << GOLD_PIECES << " gold pieces. ";
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course. \n";

	return 0;
}