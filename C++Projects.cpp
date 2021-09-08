#include <iostream> //Header file that containts all functions of the program
using namespace std; //Makes all things under the std namespace available without having to prefix std:: before each of them

int main() //Function needs to return some integer at the end of the execution
{ //Opening bracket for main body
    int milesPerGallon, tankSize; //Variables that will hold whole numbers

    cout << "First, Enter Your Automobiles Gas Tank Size in Gallons: "; //String in between "" will appear in the command output
    cin >> tankSize; //Accepts input from user and stores it in the variable

    cout << "Now, Enter the Miles Per Gallon Your Automobile Gets: "; //String in between "" will appear in the command output
    cin >> milesPerGallon; //Accepts input from user and stores it in the variable

    cout << "You will be able to drive roughly " << tankSize * milesPerGallon << " miles before a refuel is needed." << endl; //Displays string with equation solution in the command output, program ends

    system("pause>0"); //Tells OS to pause the program (Gets rid of junk text that appears after running the code)
    return 0; //Program executes without error
} //Closing bracket for main body
