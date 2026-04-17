#define main student_main
#include "MainProgram.cpp"
#undef main

#include "catch_amalgamated.hpp"
#include <cmath>

static const double EPS = 1e-4;

// ================================================================
//  SECTION 1 - Warm-up  [10 pts]
// ================================================================

TEST_CASE("Section1 circle area formula", "[section1]")
{
    const double PI = 3.14159;

    SECTION("radius 1.0")
    {
        double r = 1.0;
        REQUIRE(std::fabs(PI * r * r - 3.14159) < EPS);
    }

    SECTION("radius 5.0")
    {
        double r = 5.0;
        REQUIRE(std::fabs(PI * r * r - 78.53975) < EPS);
    }

    SECTION("radius 0.0")
    {
        double r = 0.0;
        REQUIRE(std::fabs(PI * r * r - 0.0) < EPS);
    }

    SECTION("radius 2.5")
    {
        double r = 2.5;
        REQUIRE(std::fabs(PI * r * r - 19.6349375) < EPS);
    }
}

// ================================================================
//  SECTION 2 - Built-in Functions  [20 pts]
// ================================================================

TEST_CASE("Section2 sqrt", "[section2]")
{
    SECTION("sqrt 17.5") { REQUIRE(std::sqrt(17.5) == Catch::Approx(4.18330).epsilon(0.001)); }
    SECTION("sqrt 25.0") { REQUIRE(std::sqrt(25.0) == Catch::Approx(5.0).epsilon(0.001));     }
    SECTION("sqrt 0.0")  { REQUIRE(std::sqrt(0.0)  == Catch::Approx(0.0).epsilon(0.001));     }
}

TEST_CASE("Section2 ceil", "[section2]")
{
    SECTION("ceil 17.5")  { REQUIRE(std::ceil(17.5)  == Catch::Approx(18.0));  }
    SECTION("ceil 3.1")   { REQUIRE(std::ceil(3.1)   == Catch::Approx(4.0));   }
    SECTION("ceil -2.3")  { REQUIRE(std::ceil(-2.3)  == Catch::Approx(-2.0));  }
}

TEST_CASE("Section2 floor", "[section2]")
{
    SECTION("floor 17.5") { REQUIRE(std::floor(17.5) == Catch::Approx(17.0));  }
    SECTION("floor 3.9")  { REQUIRE(std::floor(3.9)  == Catch::Approx(3.0));   }
    SECTION("floor -2.3") { REQUIRE(std::floor(-2.3) == Catch::Approx(-3.0));  }
}

TEST_CASE("Section2 round", "[section2]")
{
    SECTION("round 17.5") { REQUIRE(std::round(17.5) == Catch::Approx(18.0));  }
    SECTION("round 17.4") { REQUIRE(std::round(17.4) == Catch::Approx(17.0));  }
    SECTION("round -1.5") { REQUIRE(std::round(-1.5) == Catch::Approx(-2.0));  }
}

// ================================================================
//  SECTION 3-A - celsiusToFahrenheit  [15 pts]
// ================================================================

TEST_CASE("Section3A celsiusToFahrenheit", "[section3]")
{
    SECTION("0 C")   { REQUIRE(celsiusToFahrenheit(0.0)   == Catch::Approx(32.0).epsilon(0.001));  }
    SECTION("100 C") { REQUIRE(celsiusToFahrenheit(100.0) == Catch::Approx(212.0).epsilon(0.001)); }
    SECTION("37 C")  { REQUIRE(celsiusToFahrenheit(37.0)  == Catch::Approx(98.6).epsilon(0.01));   }
    SECTION("-40 C") { REQUIRE(celsiusToFahrenheit(-40.0) == Catch::Approx(-40.0).epsilon(0.001)); }
    SECTION("25 C")  { REQUIRE(celsiusToFahrenheit(25.0)  == Catch::Approx(77.0).epsilon(0.001));  }
}

// ================================================================
//  SECTION 3-B - isPrime  [20 pts]
// ================================================================

TEST_CASE("Section3B isPrime true cases", "[section3]")
{
    SECTION("2 is prime")   { REQUIRE(isPrime(2)   == true); }
    SECTION("3 is prime")   { REQUIRE(isPrime(3)   == true); }
    SECTION("7 is prime")   { REQUIRE(isPrime(7)   == true); }
    SECTION("13 is prime")  { REQUIRE(isPrime(13)  == true); }
    SECTION("97 is prime")  { REQUIRE(isPrime(97)  == true); }
    SECTION("101 is prime") { REQUIRE(isPrime(101) == true); }
}

TEST_CASE("Section3B isPrime false cases", "[section3]")
{
    SECTION("1 not prime")   { REQUIRE(isPrime(1)   == false); }
    SECTION("0 not prime")   { REQUIRE(isPrime(0)   == false); }
    SECTION("4 not prime")   { REQUIRE(isPrime(4)   == false); }
    SECTION("9 not prime")   { REQUIRE(isPrime(9)   == false); }
    SECTION("100 not prime") { REQUIRE(isPrime(100) == false); }
    SECTION("-5 not prime")  { REQUIRE(isPrime(-5)  == false); }
}

// ================================================================
//  SECTION 3-C - maxOfThree  [15 pts]
// ================================================================

TEST_CASE("Section3C maxOfThree", "[section3]")
{
    SECTION("first is max")  { REQUIRE(maxOfThree(10,  3,  7) == 10); }
    SECTION("second is max") { REQUIRE(maxOfThree(1,  99, 50) == 99); }
    SECTION("third is max")  { REQUIRE(maxOfThree(5,   5,  8) ==  8); }
    SECTION("all equal")     { REQUIRE(maxOfThree(4,   4,  4) ==  4); }
    SECTION("all negative")  { REQUIRE(maxOfThree(-1, -5, -3) == -1); }
    SECTION("mixed signs")   { REQUIRE(maxOfThree(-10, 0,  5) ==  5); }
}

// ================================================================
//  SECTION 4 - Challenge: average  [20 pts]
// ================================================================

TEST_CASE("Section4 average", "[section4]")
{
    SECTION("five equal values")
    {
        double arr[] = {4.0, 4.0, 4.0, 4.0, 4.0};
        REQUIRE(average(arr, 5) == Catch::Approx(4.0).epsilon(0.001));
    }

    SECTION("ascending 1 to 5")
    {
        double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
        REQUIRE(average(arr, 5) == Catch::Approx(3.0).epsilon(0.001));
    }

    SECTION("single element")
    {
        double arr[] = {7.0};
        REQUIRE(average(arr, 1) == Catch::Approx(7.0).epsilon(0.001));
    }

    SECTION("three mixed values")
    {
        double arr[] = {10.0, 20.0, 30.0};
        REQUIRE(average(arr, 3) == Catch::Approx(20.0).epsilon(0.001));
    }

    SECTION("decimal values")
    {
        double arr[] = {1.5, 2.5, 3.0};
        REQUIRE(average(arr, 3) == Catch::Approx(2.3333).epsilon(0.001));
    }
}

TEST_CASE("Section4 sqrt of average", "[section4]")
{
    SECTION("sqrt of avg 4.0")
    {
        double arr[] = {4.0, 4.0, 4.0, 4.0, 4.0};
        REQUIRE(std::sqrt(average(arr, 5)) == Catch::Approx(2.0).epsilon(0.001));
    }

    SECTION("sqrt of avg 16.67")
    {
        double arr[] = {9.0, 16.0, 25.0};
        REQUIRE(std::sqrt(average(arr, 3)) == Catch::Approx(4.08248).epsilon(0.001));
    }
}

TEST_CASE("Section4 round to 2 decimals", "[section4]")
{
    SECTION("2.3333 rounds to 2.33")
    {
        double val = 2.3333;
        REQUIRE(std::round(val * 100.0) / 100.0 == Catch::Approx(2.33).epsilon(0.001));
    }

    SECTION("2.3350 rounds to 2.34")
    {
        double val = 2.3350;
        REQUIRE(std::round(val * 100.0) / 100.0 == Catch::Approx(2.34).epsilon(0.001));
    }
}