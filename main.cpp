#include <iostream>
#include <cmath>
using namespace std;
void ratesInput (float& January, float& February, float& March, float& April, float& May, float& June, float& July, float& August, float& September, float& October, float& November, float& December ) {
    cout << "Enter values for 12 months one by one\n";
    cout << "\nJanurary: ";
    cin >> January;
    cout << "\nFebrurary: ";
    cin >> February;
    cout << "\nMarch: ";
    cin >> March;
    cout << "\nApril: ";
    cin >> April;
    cout << "\nMay: ";
    cin >> May;
    cout << "\nJune: ";
    cin >> June;
    cout << "\nJuly: ";
    cin >> July;
    cout << "\nAugust: ";
    cin >> August;
    cout << "\nSeptember: ";
    cin >> September;
    cout << "\nOctober: ";
    cin >> October;
    cout << "\nNovember: ";
    cin >> November;
    cout << "\nDecember: ";
    cin >> December;
}    //>>--------------------------------<<
void InfCalc(float January, float February, float March, float April, float May, float June, float July, float August, float September, float October, float November, float December) {
    {
        double MonthsInfRatesAdd = 0.0;
        double MonthsArray[12] = { January, February, March, April, May, June, July, August, September, October, November, December
        };
        for (int i = 0; i < 12; i++) {
            MonthsInfRatesAdd += MonthsArray[i];
        }
        double MonthsInfRatesAverage = MonthsInfRatesAdd/12;
        double MonthInfRatesAverageToPercent = MonthsInfRatesAverage/100.0;
        double x = 1.0+MonthInfRatesAverageToPercent;
        double MonthlyAvgToAnnualy = (pow( x , 12.0)) - 1;
        cout << "\nMonthly Inflation Rates Sum = " << MonthsInfRatesAdd;
        cout << "\nMonthly Inflation Rates Average = " <<  MonthsInfRatesAverage;
        cout << "\nMonthly Inflation To annually = " << MonthlyAvgToAnnualy * 100 << '%' << endl;
    }}

int main() {
    float January, February, March, April, May, June, July, August, September, October, November, December;
    ratesInput(January, February, March, April, May, June, July, August, September, October, November, December);
    InfCalc(January, February, March, April, May, June, July, August, September, October, November, December);


    return 0;
}
