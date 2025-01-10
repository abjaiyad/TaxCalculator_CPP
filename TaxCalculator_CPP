// Program Name: TaxCalculator_CPP
// Author: Amad Bin Jaiyad

#include <iostream>
using namespace std;

int main()
{
    // Enter Total Sales
    double totalSales;
    cout << "Enter Total Sales: $";
    cin >> totalSales;

    // Enter State Tax
    double stateTaxRate;
    cout << "Enter State Tax Rate (as a percentage): ";
    cin >> stateTaxRate;
    stateTaxRate /= 100; // Convert percentage to decimal

    // Calculate State Tax
    double stateTax = totalSales * stateTaxRate;
    cout << "State Tax: $" << stateTax << endl;

    // Enter County Tax
    double countyTaxRate;
    cout << "Enter County Tax Rate (as a percentage): ";
    cin >> countyTaxRate;
    countyTaxRate /= 100; // Convert percentage to decimal

    // Calculate County Tax
    double countyTax = totalSales * countyTaxRate;
    cout << "County Tax: $" << countyTax << endl;

    // Calculate Total Tax
    double totalTax = stateTax + countyTax;
    cout << "Total Tax: $" << totalTax << endl;

    return 0;
}
