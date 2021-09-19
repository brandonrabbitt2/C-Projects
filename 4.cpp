#include <iostream>
using namespace std;

int main() 
{
    int userInts, evenSum = 0, oddSum = 0; //Declare variables
   
    cout << "Enter a Set of Integers, Using a 0 to Indicate You Are Finished Entering Numbers: "; //Prompt user to input a set of integers
    cin >> userInts; //Set of integers are stored

    while (userInts != 0) { // Checks to see if the two operands are equal 
        if (userInts % 2 == 0) { //Checks if the integers are odd or even
            evenSum += userInts; //Even numbers are added to evenSum
        }
        else {
            oddSum += userInts; //Odd numbers are added to oddSum
        }
        cin >> userInts;
    }

    cout << "The Sum of the Even Numbers = " << evenSum << endl; //Sum of odd and even numbers are displayed to user
    cout << "The Sum of the Odd Numbers = " << oddSum << endl;
    
    system("pause>0");
    return 0;
}
