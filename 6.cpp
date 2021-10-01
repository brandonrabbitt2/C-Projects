#include <iostream>
#include <string>

using namespace std;

bool isvowel(char a)
{
	string vowels = "AEIOUaeiou";
	if ((int)vowels.find(a) == -1)
		return false;
	return true;
}

int main()
{
	cout << "Enter a String: ";	
	string originalString, newString = "String Without Vowels: ";
	cin >> originalString;	

	for (int i = 0; i < originalString.length(); i++)	
		if (!isvowel(originalString[i])) 
			newString += originalString[i];
	cout << newString << endl;
	
	system("pause>0"); 
	return 0;
}
