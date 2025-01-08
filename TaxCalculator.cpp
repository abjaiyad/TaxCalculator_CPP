// Program Name: TaxCalculator_CPP
// Author: Amad Bin Jaiyad
// Description: This program calculates state tax, county tax, and total tax based on total sales.

#include <iostream>
using namespace std;

int main() {
    // Declare the total sales amount
    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    // Calculate state tax
    const double stateTaxRate = 0.04; // 4%
    double stateTax = sales * stateTaxRate;
    cout << "State Tax (4%): $" << stateTax << endl;

    // Calculate county tax
    const double countyTaxRate = 0.02; // 2%
    double countyTax = sales * countyTaxRate;
    cout << "County Tax (2%): $" << countyTax << endl;

    // Calculate total tax
    double totalTax = stateTax + countyTax;
    cout << "Total Tax: $" << totalTax << endl;

    return 0;
}
