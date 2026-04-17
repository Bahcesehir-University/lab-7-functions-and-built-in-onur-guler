# Lab: Introduction to Functions & Built-in Functions

## Course Information

| Field | Details |
|---|---|
| Course | CMP1001 – Introduction to Programming (C++) |
| Lab Duration | 40 Minutes |
| Deliverable | `MainProgram.cpp` (single file) |

---

## Objective

By the end of this lab, students will be able to define their own functions in C++, pass arguments, return values, and confidently call common built-in functions from the `<cmath>` library.

---

## Prerequisites

Before starting this lab, you should be comfortable with:

- Declaring and using variables (`int`, `double`, `bool`)
- Using `cin` and `cout`
- Writing `if/else` conditions
- Writing basic `for` loops

---

## What You Will Learn

- How to **define** a function with parameters and a return type
- How to **call** a function from `main()`
- The difference between `void` and value-returning functions
- How to use built-in math functions: `sqrt`, `pow`, `ceil`, `floor`, `round`, `fabs`
- How to pass an **array** to a function

---

## Lab Structure

| Section | Topic | Time |
|---|---|---|
| Section 1 | Warm-up (variables, cin, arithmetic) | ~5 min |
| Section 2 | Core Concepts (built-in functions demo) | ~8 min |
| Section 3 | Guided Exercises (write 3 custom functions) | ~20 min |
| Section 4 | Challenge (statistics with arrays) | ~7 min |

### Section Descriptions

**Section 1 – Warm-up**
Compute the area of a circle. Recalls basic variable usage and arithmetic before introducing new material.

**Section 2 – Core Concepts**
Use `sqrt`, `ceil`, `floor`, and `round` on a sample value. Short in-code comments explain the syntax — no lecture slides needed.

**Section 3 – Guided Exercises**
Write three functions from scratch:
- `celsiusToFahrenheit` — arithmetic formula, return value
- `isPrime` — loop + early return, `bool` return type
- `maxOfThree` — conditional logic, multiple parameters

**Section 4 – Challenge**
Write an `average` function that accepts an array, then combine it with `sqrt` and `round` to produce a small statistics summary.

---

## How to Compile & Run

Make sure you have `g++` installed. From the terminal:

```bash
g++ MainProgram.cpp -o lab
./lab
```

On Windows (MinGW):

```bash
g++ MainProgram.cpp -o lab.exe
lab.exe
```

> **Tip:** Compile after completing each section, not just at the end. Catching errors early saves time.

---

## Submission Instructions

1. Complete all `// TODO:` blocks in `MainProgram.cpp`.
2. Make sure your code **compiles without errors**.
3. Test your program with at least two different inputs per section.
4. Submit **only** `MainProgram.cpp` to the course platform (GitHub Classroom / LMS).
5. Include your **name and student ID** in the header comment block at the top of the file.

> Do **not** split your code into multiple files. Everything must remain in `MainProgram.cpp`.

---

## Grading Criteria

| Criterion | Weight | Description |
|---|---|---|
| Correctness | 50% | Functions produce the right output for valid inputs |
| Completion | 20% | All TODO sections are attempted |
| Code Quality | 20% | Readable names, consistent indentation, brief comments |
| Challenge | 10% | Section 4 works correctly end-to-end |

**Total: 100 points**

---

## Estimated Time Breakdown

```
00:00 – 00:05  Read lab header and Section 1 instructions
00:05 – 00:10  Complete Section 1 (warm-up)
00:10 – 00:18  Study Section 2 comments, complete built-in functions exercise
00:18 – 00:38  Complete Section 3 (three guided functions)
00:38 – 00:40  Attempt Section 4 challenge
```

---

## Tips for Students

- **Define functions above `main()`** so you do not need forward declarations.
- A function should do **one thing only** — keep them short and focused.
- If your function is not returning the right value, add a `cout` inside it temporarily to trace the logic.
- `sqrt()` returns a `double`. When checking primality, cast your integer: `sqrt((double)n)`.
- For the challenge, remember that arrays decay to pointers when passed to a function — always pass the size separately.
- When in doubt, compile and test with a value you already know the answer to (e.g., `isPrime(7)` should be `true`).
