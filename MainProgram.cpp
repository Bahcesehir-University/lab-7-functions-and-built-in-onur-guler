// ============================================================
//  Lab Title   : Introduction to Functions & Built-in Functions
//  Course      : CMP1001 – Introduction to Programming (C++)
//  Duration    : 40 Minutes
//  Description : In this lab you will write your own functions
//                and use common C++ built-in functions from
//                <cmath> and <cstdlib>.
//
//  Instructions:
//    1. Read each section carefully before coding.
//    2. Complete every // TODO: block.
//    3. Compile often:  g++ MainProgram.cpp -o lab && ./lab
//    4. Ask your instructor if you are stuck for more than 5 min.
// ============================================================

#include <iostream>
#include <cmath>    // sqrt, pow, abs, ceil, floor, round
#include <cstdlib>  // rand, srand
#include <ctime>    // time  (used to seed the random generator)
using namespace std;

// ============================================================
//  SECTION 1 – WARM-UP  (~ 5 min)
//  Goal: quickly recall variables, cin, cout, and arithmetic.
// ============================================================

int main()
{
    // ----------------------------------------------------------
    // Exercise 1-A : Circle area
    // Ask the user for a radius (double), compute the area
    // using the formula:  area = 3.14159 * r * r
    // Print the result.
    // ----------------------------------------------------------

    double radius;
    const double PI = 3.14159;

    cout << "=== Warm-up: Circle Area ===" << endl;

    // TODO: Ask the user to enter the radius
    // TODO: Read the radius into the variable 'radius'
    // TODO: Compute the area and print it




    // ============================================================
    //  SECTION 2 – CORE CONCEPTS  (~ 8 min)
    //
    //  WHAT IS A FUNCTION?
    //  A function is a named block of code that performs one task.
    //  You define it ONCE, then CALL it as many times as you need.
    //
    //  Syntax:
    //      returnType  functionName(paramType param, ...)
    //      {
    //          // body
    //          return value;   // omit if returnType is void
    //      }
    //
    //  BUILT-IN FUNCTIONS (from <cmath>):
    //      sqrt(x)          – square root of x
    //      pow(base, exp)   – base raised to exp
    //      abs(x)           – absolute value  (integers)
    //      fabs(x)          – absolute value  (doubles)
    //      ceil(x)          – round UP  to nearest integer
    //      floor(x)         – round DOWN to nearest integer
    //      round(x)         – round to nearest integer
    //
    //  Example – a simple function that squares a number:
    //
    //      int square(int n)
    //      {
    //          return n * n;
    //      }
    //
    //  Then inside main() you call it like:
    //      int result = square(5);   // result == 25
    //
    // ============================================================

    // ----------------------------------------------------------
    // Exercise 2-A : Built-in functions demo
    // Use the built-in functions above on the value 17.5
    // and print the results as shown below:
    //
    //  sqrt(17.5)  = ...
    //  ceil(17.5)  = ...
    //  floor(17.5) = ...
    //  round(17.5) = ...
    // ----------------------------------------------------------

    double val = 17.5;

    cout << "\n=== Built-in Functions ===" << endl;

    // TODO: Print sqrt of val
    // TODO: Print ceil of val
    // TODO: Print floor of val
    // TODO: Print round of val




    // ============================================================
    //  SECTION 3 – GUIDED EXERCISES  (~ 20 min)
    //  Write the functions ABOVE main() in the space provided,
    //  then call them from here.
    // ============================================================

    // ----------------------------------------------------------
    // Exercise 3-A : celsiusToFahrenheit
    //
    // Write a function:
    //      double celsiusToFahrenheit(double c)
    // Formula: F = (C * 9.0 / 5.0) + 32
    //
    // Test it by asking the user for a Celsius temperature,
    // calling your function, and printing the Fahrenheit result.
    // ----------------------------------------------------------

    double celsius;
    cout << "\n=== Temperature Converter ===" << endl;

    // TODO: Ask the user for a Celsius value and read it
    // TODO: Call celsiusToFahrenheit and print the result




    // ----------------------------------------------------------
    // Exercise 3-B : isPrime
    //
    // Write a function:
    //      bool isPrime(int n)
    // A number is prime if it is > 1 and has no divisors
    // other than 1 and itself.
    // Hint: loop from 2 to sqrt(n); if n % i == 0, not prime.
    //
    // Ask the user for an integer and print whether it is prime.
    // ----------------------------------------------------------

    int number;
    cout << "\n=== Prime Checker ===" << endl;

    // TODO: Ask the user for an integer and read it
    // TODO: Call isPrime and print "X is prime" or "X is not prime"




    // ----------------------------------------------------------
    // Exercise 3-C : maxOfThree
    //
    // Write a function:
    //      int maxOfThree(int a, int b, int c)
    // that returns the largest of three integers.
    //
    // Ask the user for three integers and print the maximum.
    // ----------------------------------------------------------

    int x, y, z;
    cout << "\n=== Max of Three ===" << endl;

    // TODO: Ask the user for three integers and read them
    // TODO: Call maxOfThree and print the result




    // ============================================================
    //  SECTION 4 – CHALLENGE  (~ 7 min)
    //  Think carefully before you code.
    // ============================================================

    // ----------------------------------------------------------
    // Challenge : Simple Statistics
    //
    // Write a function:
    //      double average(double arr[], int size)
    // that returns the average of the elements in an array.
    //
    // Then in main():
    //   1. Declare an array of 5 doubles and ask the user to
    //      fill it.
    //   2. Call average() and print the result.
    //   3. Using built-in functions, also print:
    //        - the square root of the average
    //        - the average rounded to 2 decimal places
    //          (hint: round(avg * 100) / 100.0)
    // ----------------------------------------------------------

    const int SIZE = 5;
    double grades[SIZE];

    cout << "\n=== Challenge: Statistics ===" << endl;

    // TODO: Read 5 values from the user into the array
    // TODO: Call average() and store the result
    // TODO: Print the average, sqrt of average, and rounded average




    cout << "\n=== Lab Complete! ===" << endl;
    return 0;
}

// ============================================================
//  WRITE YOUR FUNCTIONS HERE  (above main, below this comment)
//  OR directly above main() – both placements work.
//
//  Functions needed:
//    double celsiusToFahrenheit(double c)   – Section 3-A
//    bool   isPrime(int n)                  – Section 3-B
//    int    maxOfThree(int a, int b, int c) – Section 3-C
//    double average(double arr[], int size) – Challenge
// ============================================================
