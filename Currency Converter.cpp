#include <iostream>
#include <iomanip>

using namespace std;
int main() 

{
    // Conversion rates
    
	double amountUSD;
    cout << "Enter amount in USD: ";
    cin >> amountUSD;
    
    const double USD_TO_EUR = 0.915807;
    const double USD_TO_GBP = 0.786544;
    const double USD_TO_JPY = 143.705;
    const double USD_TO_INR = 81.9959;
    const double USD_TO_PKR = 286.44;

    // Conversion calculations
    double amountEUR = amountUSD * USD_TO_EUR;
    double amountGBP = amountUSD * USD_TO_GBP;
    double amountJPY = amountUSD * USD_TO_JPY;
    double amountINR = amountUSD * USD_TO_INR;
    double amountPKR = amountUSD * USD_TO_PKR;

    // Display results
    cout << fixed << setprecision(2);
    cout << "Amount\t\tCurrency" << endl;
    cout << "-------------------------" << endl;
    cout << amountUSD << "\t\tUSD" << endl;
    cout << amountEUR << "\t\tEUR" << endl;
    cout << amountGBP << "\t\tGBP" << endl;
    cout << amountJPY << "\t\tJPY" << endl;
    cout << amountINR << "\t\tINR" << endl;
    cout << amountPKR << "\t\tPKR" << endl;

    return 0;
}

