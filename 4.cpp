#include <iostream>
using namespace std;

int main() 
{
    int userInts, evenSum = 0, oddSum = 0; 
   
    cout << "Enter a Set of Integers, Using a 0 to Indicate You Are Finished Entering Numbers: "; 
    cin >> userInts; 

    while (userInts != 0) { 
        if (userInts % 2 == 0) { 
            evenSum += userInts; 
        }
        else {
            oddSum += userInts; 
        }
        cin >> userInts;
    }

    cout << "The Sum of the Even Numbers = " << evenSum << endl; 
    cout << "The Sum of the Odd Numbers = " << oddSum << endl;
    
    system("pause>0");
    return 0;
}
