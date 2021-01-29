//Problem 3 Program
#include <iostream>

using namespace std;

int main (int argc, char **argv)
{
  int hours;
  if (argc == 2){ //checks if hours was a parameter and sets hours.
    hours = stoi(argv[1]);
	} else if (argc == 1){ //if no parameters are entered, gets user input for hours.
    cout << "How many hours did you work this week?" << endl;
    cin >> hours;
  } else { //If parameters are miss used then prints error and ends program.
    cout << "ERROR: must provide correct number of parameters." << endl;
		return -1;
  }


  double pay = 0;
  //Calculates pay from hours
  if (hours > 40) {
    pay = (40 * 16) + ((hours - 40) * 24);
  } else {
    pay = hours * 16;
  }
  //Prints out hours, pay, payments and take-home pay.
  cout.precision(2);
  cout << "Hours worked: " << hours << endl;
  cout << fixed;
  cout << "Gross pay is: $" << pay << endl;
  cout << "Social security tax is(6%): $" << (double)(pay * 0.06) << endl;
  cout << "Federal tax is(14%): $" << (double)(pay * 0.14) << endl;
  cout << "State income tax is(5%): $" << (double)(pay * 0.05) << endl;
  cout << "Medical insurance is $10.00" << endl;
  cout << "Net take-home pay is: $" << (double)(pay * 0.75)-10.0 << endl;


  return 0;
}
