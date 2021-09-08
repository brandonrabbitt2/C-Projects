#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	double currentSalaryA, percentPayIncreaseA, updatedSalaryA;
	string lastNameA, firstNameA;
	double currentSalaryB, percentPayIncreaseB, updatedSalaryB;
	string lastNameB, firstNameB;
	double currentSalaryC, percentPayIncreaseC, updatedSalaryC;
	string lastNameC, firstNameC;

	ifstream inFile; 
	ofstream outFile;
	inFile.open("Ch3_Data.txt"); 
	outFile.open("Ch3_Output.dat");
	outFile << setprecision(2) << fixed << showpoint;

	inFile >> lastNameA >> firstNameA >> currentSalaryA >> percentPayIncreaseA; 
	inFile >> lastNameB >> firstNameB >> currentSalaryB >> percentPayIncreaseB;
	inFile >> lastNameC >> firstNameC >> currentSalaryC >> percentPayIncreaseC;

	updatedSalaryA = currentSalaryA + (currentSalaryA * percentPayIncreaseA / 100);
	updatedSalaryB = currentSalaryB + (currentSalaryB * percentPayIncreaseB / 100);
	updatedSalaryC = currentSalaryC + (currentSalaryC * percentPayIncreaseC / 100);

	outFile << lastNameA << " " << firstNameA << " " << updatedSalaryA << endl;
	outFile << lastNameB << " " << firstNameB << " " << updatedSalaryB << endl;
	outFile << lastNameC << " " << firstNameC << " " << updatedSalaryC << endl;

	inFile.close();
	outFile.close();

	system("pause>0");
	return 0;
}
