#include <iostream>//tells the compiler to add header files to the code
#include <fstream>
#include <iomanip>

using namespace std; //the type of namespace


int main() //main function
{
    //declare variable
	string name;
	string frag;
	double ord;
	string des;
	double frage;
	int i;
	int p;
	double ship;
	double tot;

	cout << "**************************************************" << endl;
	cout << "ITCS 2530 - Programming Assignment for week #3*" << endl;
	cout << "**************************************************" << endl; //write title box
	cout << endl;
	cout << "Please enter the item name (no spaces): "; //ask for data
	cin >> name; //input
	cout << "Is the item fragile? (y/n): "; 
	cin >> frag;
	if (frag == "y") 
		frage = 2;
    if (frag == "Y")
		frage = 2;
	if (frag == "n")
	    frage = 0;
	if (frag == "N")
		frage = 0;
	//else
	//{
	//	cout << "Invalid input" << endl;
	//	return 0;
//	}

	cout << "Please enter your order total ($): "; 
	cin >> ord;
	if (ord < 50)
		 p = 0;
	if (ord > 50 < 100)
		 p = 1;
	if (ord > 100 < 150)
		 p = 2;
	if (ord > 150)
		 p = 3;
	//else
	//{
	//	cout << "Invalid input" << endl;
//		return 0;
	//}
	cout << "Please enter your destination. (usa/can/aus/MARS): "; 
	cin >> des;
	if (des == "usa")
		i = 0;
	if (des == "can")
		 i = 1;
	if (des == "aus")
		 i = 2;
	if (des == "USA")
		 i = 0;
	if (des == "CAN")
		 i = 1;
	if (des == "AUS")
		 i = 2;

	if (des == "MARS")
		i = 3;
	if (des == "mars")
		i = 3;
	//else
//	{
	//	cout << "Invalid input" << endl;
	//	return 0;
//	}


	if (i == 0 and p == 0)
		 ship = 6;
	if (i == 1 and p == 0)
		 ship = 8;
	if (i == 2 and p == 0)
		 ship = 10;
	if (i == 0 and p == 1)
		 ship = 9;
	if (i == 1 and p == 1)
		ship = 12;
	if (i == 2 and p == 1)
		ship = 14;
	if (i == 0 and p == 2)
		 ship = 12;
	if (i == 1 and p == 2)
		ship = 15;
	if (i == 2 and p == 2)
		ship = 17;
	if (i == 0 and p == 3)
		ship = 0;
	if (i == 1 and p == 3)
		ship = 0;
	if (i == 2 and p == 3)
		ship = 0;

	if (i == 3 and p == 0)
		ship = 100;
	if (i == 3 and p == 1)
		ship = 200;
	if (i == 3 and p == 2)
		ship = 300;
	if (i == 3 and p == 3)
		ship = 400;

	ship = ship + frage;
	tot = ship + ord;

	cout << "Your item is: " ; //output
	cout << right << name << endl;
	cout << "Your shipping cost is $";
	cout << right << ship << endl;
	cout << "You are shipping to ";
	cout << right << des << endl;
	cout << "Your total shipping costs are $";
	cout << right << tot << endl;
	cout << endl;
	cout << "Thank You!";

	ofstream fyle; //constructor
	fyle.open("Order.txt"); //create file
	fyle << "Your item is: "; //output
	fyle << right << name << endl;
	fyle << "Your shipping cost is $";
	fyle << right << ship << endl;
	fyle << "You are shipping to ";
	fyle << right << des << endl;
	fyle << "Your total shipping costs are $";
	fyle << right << tot << endl;
	fyle << endl;
	fyle << "Thank You!";
	fyle.close(); //close


	return 0;
}