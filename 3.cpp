#include <iostream>
#include <string>
using namespace std;

int main()
{
    string wordIn; 
    string wordOut;
    char letters;

    cout << "Enter Any English Word: "; 
    cin >> wordIn; 
    
    for (int a = 0; a < wordIn.length(); a++) 

    {
        letters = wordIn.at(a); 
        switch (letters) 

        {
        case 'A': case 'a':
            wordOut += " Alpha";
            break;
        case 'B': case 'b':
            wordOut += " Bravo";
            break;
        case 'C': case 'c':
            wordOut += " Charlie";
            break;
        case 'D': case 'd':
            wordOut += " Delta";
            break;
        case 'E': case 'e':
            wordOut += " Echo";
            break;
        case 'F': case 'f':
            wordOut += " Foxtrot";
            break;
        case 'G': case 'g':
            wordOut += " Golf";
            break;
        case 'H': case 'h':
            wordOut += " Hotel";
            break;
        case'I': case 'i':
            wordOut += " India";
            break;
        case 'J': case 'j':
            wordOut += " Juliet";
            break;
        case 'K': case 'k':
            wordOut += " Kilo";
            break;
        case 'L': case 'l':
            wordOut += " Lima";
            break;
        case 'M': case 'm':
            wordOut += " Mike";
            break;
        case 'N': case 'n':
            wordOut += " November";
            break;
        case 'O': case 'o':
            wordOut += " Oscar";
            break;
        case'P': case 'p':
            wordOut += " Papa";
            break;
        case 'Q': case 'q':
            wordOut += " Quebec";
            break;
        case 'R': case 'r':
            wordOut += " Romeo";
            break;
        case 'S': case 's':
            wordOut += " Sierra";
            break;
        case 'T': case 't':
            wordOut += " Tango";
            break;
        case 'U': case 'u':
            wordOut += " Uniform";
            break;
        case 'V': case 'v':
            wordOut += " Victor";
            break;
        case 'W': case 'w':
            wordOut += " Whiskey";
            break;
        case'X': case 'x':
            wordOut += " X-Ray";
            break;
        case 'Y': case 'y':
            wordOut += " Yankee";
            break;
        case 'Z': case 'z':
            wordOut += " Zulu";
            break;
       
        default: cout << "Invalid Word! Please Try Again Using a Valid Word."; 
          
            system("pause>0");
            return 0; 
        }
    }
    cout << "The Corresponding ICAO Alphabet Word Is:" << wordOut << endl;
   
    system("pause>0");
    return 0;
