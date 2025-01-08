# TaxCalculator_CPP

## Question
Imagine you have a store and have earned $95,000. As part of your tax return, you need to pay state and county taxes at different rates:  
- **State Tax Rate:** 4%  
- **County Tax Rate:** 2%  

Write a C++ program that calculates the following:  
1. Total sales.  
2. State tax.  
3. County tax.  
4. Total tax (sum of state and county taxes).  

---

## Overview
**TaxCalculator_CPP** is a simple program written in C++ that solves the above problem by calculating taxes based on a sales amount of $95,000. It demonstrates fundamental programming concepts like constants, variables, arithmetic operations, and formatted output.

---

## Features
- Input: Fixed sales amount ($95,000).  
- Output:  
  - Total Sales  
  - State Tax  
  - County Tax  
  - Total Tax  
- Beginner-friendly structure and logic.

---

## Sample Output
```plaintext
Sales: $95000
State Tax (4%): $3800
County Tax (2%): $1900
Total Tax: $5700
```

---

## How to Use
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/TaxCalculator_CPP.git
   ```
2. Open the `taxCalculator.cpp` file in your favorite IDE (e.g., Code::Blocks, Visual Studio).  
3. Compile and run the program to view the results.

---

## Code Explanation
1. **Constants:** The tax rates are defined as constants for easy maintenance:
   ```cpp
   const double stateTaxRate = 0.04;
   const double countyTaxRate = 0.02;
   ```
2. **Calculations:** Tax amounts are calculated using basic arithmetic:
   ```cpp
   double stateTax = sales * stateTaxRate;
   double countyTax = sales * countyTaxRate;
   double totalTax = stateTax + countyTax;
   ```
3. **Output:** Results are displayed in a clear, formatted manner:
   ```cpp
   cout << "Sales: $" << sales << endl;
   cout << "State Tax (4%): $" << stateTax << endl;
   ```

---

## Author
This program was developed by **Amad Bin Jaiyad** as part of his journey to master programming in C++.

---

## License
This project is open-source and free to use. Contributions are welcome!
