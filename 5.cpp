#include <iostream>
#include <iomanip>

using namespace std;

double calcBill(int income, int cMinutes, double hRate); 

int main()
{
    int income, cMinutes;   
    double hRate;

    cout << "Clients Income: $";    
    cin >> income;
    cout << "Consulting Time (In Minutes): ";
    cin >> cMinutes;
    cout << "Hourly Rate: $";
    cin >> hRate;
    cout << fixed << showpoint << setprecision(2);  
    cout << "The Total Bill Is: $" << calcBill(income, cMinutes, hRate) << endl;   
    
    return 0;
}

double calcBill(int income, int cMinutes, double hRate) {
    
    if (income <= 25000) {  
        if (cMinutes <= 30)
            return 0;
        else
            return (hRate * 0.40 * (cMinutes - 30) / 60);   
    }
    else {
        if (cMinutes <= 20) 
            return 0;
        else
            return (hRate * 0.70 * (cMinutes - 20) / 60);  
    }
}
