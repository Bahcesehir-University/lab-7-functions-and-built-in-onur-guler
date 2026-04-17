# Grading Rubric — CMP1001 Lab: Functions & Built-in Functions

## Overview

| Section | Topic | Points | Makefile Target |
|---|---|---|---|
| Section 1 | Warm-up: Circle Area | 10 | `make test-s1` |
| Section 2 | Built-in Functions | 20 | `make test-s2` |
| Section 3 | Custom Functions | 50 | `make test-s3` |
| Section 4 | Challenge | 20 | `make test-challenge` |
| **Total** | | **100** | `make grade` |

---

## Section 1 – Warm-up (10 pts)

**What is tested:** The student correctly uses the formula `PI * r * r` to compute the circle area.

| Test Case | Input | Expected Output | Points |
|---|---|---|---|
| S1-A | radius = 1.0 | area ≈ 3.14159 | 2.5 |
| S1-B | radius = 5.0 | area ≈ 78.53975 | 2.5 |
| S1-C | radius = 0.0 | area = 0.0 | 2.5 |
| S1-D | radius = 2.5 | area ≈ 19.635 | 2.5 |

**Note:** These tests verify the formula only. Since `main()` is interactive, the formula is re-evaluated in the test with the same constant (`PI = 3.14159`). If the student's formula is correct, all four pass.

---

## Section 2 – Built-in Functions (20 pts)

**What is tested:** Correct use of `sqrt`, `ceil`, `floor`, `round` from `<cmath>`.

### sqrt (5 pts)

| Test Case | Input | Expected | Points |
|---|---|---|---|
| S2-sqrt-A | sqrt(17.5) | ≈ 4.1833 | 2 |
| S2-sqrt-B | sqrt(25.0) | 5.0 | 1.5 |
| S2-sqrt-C | sqrt(0.0) | 0.0 | 1.5 |

### ceil (5 pts)

| Test Case | Input | Expected | Points |
|---|---|---|---|
| S2-ceil-A | ceil(17.5) | 18 | 2 |
| S2-ceil-B | ceil(3.1) | 4 | 1.5 |
| S2-ceil-C | ceil(-2.3) | -2 | 1.5 |

### floor (5 pts)

| Test Case | Input | Expected | Points |
|---|---|---|---|
| S2-floor-A | floor(17.5) | 17 | 2 |
| S2-floor-B | floor(3.9) | 3 | 1.5 |
| S2-floor-C | floor(-2.3) | -3 | 1.5 |

### round (5 pts)

| Test Case | Input | Expected | Points |
|---|---|---|---|
| S2-round-A | round(17.5) | 18 | 2 |
| S2-round-B | round(17.4) | 17 | 1.5 |
| S2-round-C | round(-1.5) | -2 | 1.5 |

---

## Section 3 – Custom Functions (50 pts)

### 3-A: `celsiusToFahrenheit` (15 pts)

**What is tested:** Function exists, returns a `double`, formula `(C * 9/5) + 32` is correct.

| Test Case | Input (°C) | Expected (°F) | Points |
|---|---|---|---|
| S3A-1 | 0.0 | 32.0 (freezing) | 3 |
| S3A-2 | 100.0 | 212.0 (boiling) | 3 |
| S3A-3 | 37.0 | 98.6 (body temp) | 3 |
| S3A-4 | -40.0 | -40.0 (crossover) | 3 |
| S3A-5 | 25.0 | 77.0 (room temp) | 3 |

### 3-B: `isPrime` (20 pts)

**What is tested:** Correct prime detection including edge cases.

| Test Case | Input | Expected | Points |
|---|---|---|---|
| S3B-1 | 2 | true | 2 |
| S3B-2 | 3 | true | 2 |
| S3B-3 | 7 | true | 2 |
| S3B-4 | 13 | true | 1 |
| S3B-5 | 97 | true | 1 |
| S3B-6 | 1 | false | 2 |
| S3B-7 | 0 | false | 2 |
| S3B-8 | 4 | false | 2 |
| S3B-9 | 9 | false | 2 |
| S3B-10 | 100 | false | 1 |
| S3B-11 | -5 | false | 1 |
| S3B-12 | 101 | true | 2 |

### 3-C: `maxOfThree` (15 pts)

**What is tested:** Correct maximum returned for all positional and edge cases.

| Test Case | Input | Expected | Points |
|---|---|---|---|
| S3C-1 | (10, 3, 7) | 10 (first) | 3 |
| S3C-2 | (1, 99, 50) | 99 (second) | 3 |
| S3C-3 | (5, 5, 8) | 8 (third) | 2 |
| S3C-4 | (4, 4, 4) | 4 (all equal) | 2 |
| S3C-5 | (-1, -5, -3) | -1 (negatives) | 3 |
| S3C-6 | (-10, 0, 5) | 5 (mixed) | 2 |

---

## Section 4 – Challenge (20 pts)

### `average` function (12 pts)

| Test Case | Input | Expected | Points |
|---|---|---|---|
| S4-1 | {4,4,4,4,4} | 4.0 | 2 |
| S4-2 | {1,2,3,4,5} | 3.0 | 3 |
| S4-3 | {7} (size=1) | 7.0 | 2 |
| S4-4 | {10,20,30} | 20.0 | 3 |
| S4-5 | {1.5,2.5,3.0} | ≈ 2.333 | 2 |

### sqrt of average (4 pts)

| Test Case | Input | Expected | Points |
|---|---|---|---|
| S4-6 | avg of {4,4,4,4,4} | sqrt(4.0) = 2.0 | 2 |
| S4-7 | avg of {9,16,25} | sqrt(16.67) ≈ 4.0825 | 2 |

### rounding to 2 decimal places (4 pts)

| Test Case | Input | Expected | Points |
|---|---|---|---|
| S4-8 | round(2.3333 × 100)/100 | 2.33 | 2 |
| S4-9 | round(2.3350 × 100)/100 | 2.34 | 2 |

---

## Score Interpretation

| Score | Grade | Meaning |
|---|---|---|
| 90 – 100 | A | Excellent — all sections complete and correct |
| 75 – 89 | B | Good — minor errors or one incomplete section |
| 60 – 74 | C | Satisfactory — core functions work, challenge incomplete |
| 45 – 59 | D | Partial — basic exercises done, significant gaps |
| 0 – 44 | F | Insufficient — major functions missing or non-compiling |

---

## Instructor Notes

- **Does not compile:** Award 0 for all sections. Write a note explaining the compilation error.
- **Partial compilation:** If the student commented out `main()` or changed function signatures, attempt to fix the include in `grader_tests.cpp` before giving 0.
- **Close but wrong formula:** For `celsiusToFahrenheit`, if the student wrote `(C * 9 / 5) + 32` using integer division (9/5 = 1), deduct half the section points and add a comment.
- **isPrime with no edge cases:** A common mistake is not handling `n <= 1`. Tests S3B-6, S3B-7, and S3B-11 specifically catch this.
- **Challenge – rounding:** Students may have used `(int)(avg * 100 + 0.5) / 100.0` instead of `round()`. Accept this as correct if the test passes.
- **Late submissions:** Apply your standard late penalty after the automated score is computed.
