//Problem 1 Program
#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
	//If console input is incorrect then ends program with an error.
	if (argc != 2){
		cout << "ERROR: must provide correct number of parameters." << endl;
		return -1;
	}
	//Calculates the weigh in tons and number of boxes per ton.
	double input = stod(argv[1]);
  const double ton = 35273.92;
  double tonInput = input / ton;
  double total = 1/tonInput;

	//Prints the weight in tons and number of boxes per ton.
  cout << "Weight in tons: " << tonInput << endl;

	cout << "Number of boxes for 1 ton: " << total << endl;



	return 0;
}
