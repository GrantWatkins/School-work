#include <iostream> //tells the compiler to add header files to the code

using namespace std; //the type of namespace


int main() //main function
{
	int num; //declare variable

	cout << "*******************************************************************" << endl;
	cout << "****************Welcome to my first program************************" << endl;
	cout << "Convert a large number of seconds into hours, minutes, and seconds." << endl;
	cout << "*******************************************************************" << endl; //write title box
	cout << endl; 
	cout << "Please enter a large number of seconds: "; //ask for data
	cin >> num; //input
	int hour = num / 3600; //the math
	int min = (num % 3600) / 60;
	int sec = num % 60;

	cout << "The number of hours in the number is: "<< hour << endl; //output
	cout << "The number of minutes in the number is:" << min << endl;
	cout << "The number of seconds in the number is:" << sec << endl;
}