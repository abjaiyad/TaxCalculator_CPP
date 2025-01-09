// Program Name: MonthlyBudgetTracker_CPP
// Author: Amad Bin Jaiyad
// Description: This program calculates the total monthly budget for a household.
// It prompts the user to input their monthly income and fixed expenses (Rent, Utilities, Groceries),
// then calculates and displays the total expenses and remaining savings.

#include<iostream>
using namespace std;

int main(){
    // Declare Monthly Income
    double monthlyIncome;
    cout << "Enter Monthly Income: $";
    cin >> monthlyIncome;

    // Declare Fixed Expenses
    double rent, utilities, groceries;
    cout << "Enter Rent: $";
    cin >> rent;
    cout << "Enter Utilities: $";
    cin >> utilities;
    cout << "Enter Groceries: $";
    cin >> groceries;

    // Calculate Total Expenses
    double totalExpenses = rent + utilities + groceries;
    cout << "Total Expenses: $" << totalExpenses << endl;

    // Calculate Savings
    double savings = monthlyIncome - totalExpenses;
    cout << "Savings: $" << savings << endl;

    return 0;
}