# Number Engine
## Modular Console-Based Number Utility Program

### Overall Vision
Number Engine is a menu-driven C program designed to provide a small set of common number operations through a simple, continuous console interface. The program should demonstrate structured programming, modular functions, loops, conditional logic, and recursion.

### Mission
Build a clear and modular C program that allows users to perform basic number operations from a single menu while applying the required iterative and recursive programming concepts.

### Problem Statement
Design and develop a modular, menu-driven C program called Number Engine. The program must display a menu inside a continuous loop, accept the user's choice, perform the selected operation through custom functions, and terminate only when the user selects the exit option.
The implementation should demonstrate proper use of do-while, switch-case, conditional statements, iterative loops, custom functions, and recursion.

### Core Requirements

#### 1. Main Menu
Display the following options continuously until the user selects Exit:

=== MULTI-UTILITY NUMBER ENGINE ===  
1. Calculate Power (Base^Exponent) [Iterative]  
2. Check if a Number is Palindrome [Iterative]  
3. Calculate Sum of Digits [Recursive]  
4. Find GCD (Greatest Common Divisor) [Recursive]  
5. Exit  

Enter your choice (1-5):  

#### 2. Power Calculation
Implement:  
`int calculatePower(int base, int exp);`  

* Calculate base^exp using a for or while loop.  
* Handle exp = 0 by returning 1.  
* The calculation must be iterative.  

#### 3. Palindrome Check
Implement:  
`int reverseNumber(int num);`  
`int isPalindrome(int num);`  

* reverseNumber() must reverse the digits using a while loop.  
* Use the modulo (%) and division (/) operators.  
* Example: 1234 -> 4321.  
* isPalindrome() must call reverseNumber().  
* Return 1 when the original number is equal to its reverse; otherwise return 0.  

#### 4. Sum of Digits
Implement:  
`int sumOfDigits(int num);`  

This function must be recursive.  
* Base case: when num == 0, return 0.  
* Recursive step: `(num % 10) + sumOfDigits(num / 10)`  

#### 5. GCD Calculation
Implement:  
`int findGCD(int a, int b);`  

This function must be recursive and use the Euclidean Algorithm:  

gcd(a, b) =  
  a if b == 0  
  findGCD(b, a % b) if b > 0  

#### 6. Input Validation and Control Flow
* Use switch-case to process menu selections.  
* Use if-else and logical conditions where required for input validation.  
* The main program must use a do-while loop so the menu continues until option 5 is selected.  
* Invalid menu choices and invalid numeric inputs should be handled appropriately.  

### Expected Behavior
The program should produce results such as:  

Enter your choice (1-5): 3  

Enter a positive integer: 458  
-> Sum of digits of 458 is: 17  

Enter your choice (1-5): 2  

Enter a positive integer: 1221  
-> 1221 is a Palindrome!  

Enter your choice (1-5): 4  

Enter two positive integers: 48 18  
-> GCD of 48 and 18 is: 6  

When the user selects option 5, the program should exit with an appropriate message.  

### Implementation Expectations
* Declare function prototypes before main().  
* Build the menu using a do-while loop and switch statement.  
* Implement calculatePower() and reverseNumber() using iteration.  
* Implement sumOfDigits() and findGCD() using recursion.  
* Ensure recursive base cases are checked before the recursive calls.  
* Keep the program modular by separating each operation into its own function.