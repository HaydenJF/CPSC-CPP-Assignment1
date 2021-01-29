//Problem 2 program
#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  int max;
  int people;
  if (argc == 3){ //checks if inputs were given
    max = stoi(argv[1]);
    people = stoi(argv[2]);
	} else if (argc == 1){ //checks if no inputs were given then makes user add inputs
    cout << "What is your party maximum?" << endl;
    cin >> max;
    cout << "How many people are going to the party?" << endl;
    cin >> people;
  } else { //if there are incorrect parameters ends program with error message.
    cout << "ERROR: must provide correct number of parameters." << endl;
		return -1;
  }

  //Prints if the party is legal and what the difference is between party members and max.
  if (max >= people) {
    cout << "It is legal to hold the party. " << (max - people) << " can join." << endl;
  } else {
    cout << "There are two many people to hold the party. " << (people - max) << " must go." << endl;
  }

  return 0;
}
