#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    file.open("studentscores.txt"); 

    if (file.fail())
    {
        cout << "The File Could Not Be Opened." << endl;    
        system("pause>0");
    }
    else
    {
        int score;
        int scoreRange[8] = { 0,0,0,0,0,0,0,0 }; 
        file >> score;  
        while (!file.eof()) 
        {
            if (score >= 0 && score <= 24)
                scoreRange[0]++;

            else if (score >= 25 && score <= 49)
                scoreRange[1]++;

            else if (score >= 50 && score <= 74)
                scoreRange[2]++;

            else if (score >= 75 && score <= 99)
                scoreRange[3]++;

            else if (score >= 100 && score <= 124)
                scoreRange[4]++;

            else if (score >= 125 && score <= 149)
                scoreRange[5]++;

            else if (score >= 150 && score <= 174)
                scoreRange[6]++;

            else if (score >= 175 && score <= 200)
                scoreRange[7]++;
            else
                cout << "An Error Occurred With the File." << endl; 
            
            file >> score;
            system("pause>0");
        }

        cout << "Amount of Students in Range Score of 0-24: " << scoreRange[0] << endl; 
        cout << "Amount of Students in Range Score of 25-49: " << scoreRange[1] << endl;
        cout << "Amount of Students in Range Score  of 50-74: " << scoreRange[2] << endl;
        cout << "Amount of Students in Range Score of 75-99: " << scoreRange[3] << endl;
        cout << "Amount of Students in Range Score of 100-124: " << scoreRange[4] << endl;
        cout << "Amount of Students in Range Score of 125-149: " << scoreRange[5] << endl;
        cout << "Amount of Students in Range Score of 150-174: " << scoreRange[6] << endl;
        cout << "Amount of Students in Range Score of 175-200: " << scoreRange[7] << endl;
       
        file.close();
        system("pause>0");
    }

}
