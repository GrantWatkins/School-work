#include <iostream>//tells the compiler to add header files to the code
#include <fstream>
#include <iomanip>
#include <string>

using namespace std; //the type of namespace


int main() //main function
{
	//declare variable

	int i = 0;
	int temp = 0;
	int numA = 0;
	int numE = 0;
	int numI = 0;
	int numO = 0;
	int numU = 0;
	int numR = 0;
	int numT = 0;
	int numZ = 0;
	int total = 0;

	cout << "**************************************************" << endl;
	cout << "******* Welcome to my Letter Count Program *******" << endl;
	cout << "**************************************************" << endl; //write title box
	cout << endl;
	

	
	ifstream file("Constitution_of_the_United_States.html"); //open file
	string line;
	while (getline(file, line)) { //get each line from file
		for (i=0; i < line.length(); ++i) //check if vowl
		{
			if (line[i] == 'a')
			{
				++numA;
			}
			else if (line[i] == 'A')
			{
				++numA;
			}
			else if (line[i] == 'e')
			{
				++numE;
			}
			else if (line[i] == 'E')
			{
				++numE;
			}
			else if (line[i] == 'i')
			{
				++numI;
			}
			else if (line[i] == 'I')
			{
				++numI;
			}
			else if (line[i] == 'o')
			{
				++numO;
			}
			else if (line[i] == 'O')
			{
				++numO;
			}
			else if (line[i] == 'u')
			{
				++numU;
			}
			else if (line[i] == 'U')
			{
				++numU;
			}
			else if (line[i] == 'r')
			{
				++numR;
			}
			else if (line[i] == 'R')
			{
				++numR;
			}
			else if (line[i] == 't')
			{
				++numT;
			}
			else if (line[i] == 'T')
			{
				++numT;
			}
			else if (line[i] == 'z')
			{
				++numZ;
			}
			else if (line[i] == 'Z')
			{
				++numZ;
			}
			else
			{
				temp = temp;
			}
		}
	}
	//cout << "Analyzing file " << file << endl;
	
	total = numA + numE + numI + numO + numU;

	cout << "The number of A's: "<< numA << endl; //output
	cout << "The number of E's: " << numE << endl;
	cout << "The number of I's: " << numI << endl;
	cout << "The number of O's: " << numO << endl;
	cout << "The number of U's: " << numU << endl;
	cout << "The number of R's: " << numR << endl;
	cout << "The number of T's: " << numT << endl;
	cout << "The number of Z's: " << numZ << endl;
	cout << "The vowel count is: " << total << endl;


















	return 0;
}