
/*
Write a program with 2 functions (Pass by Reference) :

getValue() – Asks the user to enter an integer value and returns it.

Factorial () computes the factorial of a number (n!).  The function is passed an integer value and returns a computed factorial value.

The main() function should loop asking for a value and computing the factorial until the user selects to quit.

*/

#include <iostream>
using namespace std;


//Function declaration 
int getValue();
void calcFactorial(int myValue, int &factorial); // pass by reference 

int main()
{
	//Declare local variables 
	char answer;

	do {				
			
			int value; 
			int factorial = 0;
			value = getValue(); //initialize value to getValue()

			cout << " You entered: " << value << endl;


			//Call the function to get factorial 
			calcFactorial(value, factorial);
			cout << " The factorial of " << value << " is " << factorial << endl;
			cout << " ====================== " << endl;
			cout << " Enter Y if you want to continue, or enter N to quit" << endl;
			cin >> answer;

	} while ((answer == 'Y') || (answer == 'y'));
	return 0;
	

	//system("pause");
	//return 0;
}

int getValue() 
{

	int input; //declare datatype for local variable named input 
	cout << " Enter an integer number of which you want to see factorial " << endl;

	cin >> input; 
	return input; 

}

void calcFactorial(int value, int &factorial)
{
	factorial = 1;
	int num;

	for (num = 1; num <= value; num++ ) 
	{
		factorial = factorial * num;
	}

	return; 
}