# CIS165 Lab 4

This repository contains two C++ programs for Lab 4: average.cpp and ocean_levels.cpp.

---

## Compilation and Running Instructions

Make sure you have a C++ compiler installed (such as g++), open your terminal in the repository folder, and use the commands below.

### 1. Average of Five Values (average.cpp)
* **To compile:**
  g++ -std=c++17 -Wall -Wextra average.cpp -o average

* **To run:**
  * Windows Powershell: .\average.exe
  * Windows Command Prompt: average
  * Mac/Linux: ./average

### 2. Ocean-Level Projections (ocean_levels.cpp)
* **To compile:**
  g++ -std=c++17 -Wall -Wextra ocean_levels.cpp -o ocean_levels

* **To run:**
  * Windows Powershell: .\ocean_levels.exe
  * Windows Command Prompt: ocean_levels
  * Mac/Linux: ./ocean_levels

---

## Program Tests

| Program and test | Values used | Expected results | Actual results | Match or correction |
| :--- | :--- | :--- | :--- | :--- |
| **Average — assigned values** | 28, 32, 37, 24, 33 | Sum: 154, Average: 30.8 | Sum: 154, Average: 30.8 | Match |
| **Average — changed values** | 10.5, 12.2, 15.0, 8.4, 11.1 | Sum: 57.2, Average: 11.44 | Sum: 57.2, Average: 11.44 | Match |
| **Ocean — assigned rate** | 1.5 | 5 yrs: 7.5 mm, 7 yrs: 10.5 mm, 10 yrs: 15 mm | 5 yrs: 7.5 mm, 7 yrs: 10.5 mm, 10 yrs: 15 mm | Match |
| **Ocean — changed rate** | 2.4 | 5 yrs: 12 mm, 7 yrs: 16.8 mm, 10 yrs: 24 mm | 5 yrs: 12 mm, 7 yrs: 16.8 mm, 10 yrs: 24 mm | Match |

## Code Explanations

### Why should the five values and the average use the double data type?
Using double allows the program to handle numbers with decimal places. Even if whole integers are assigned, calculating an average often yields a fractional component. If int were used instead, integer division would truncate decimal digits, producing inaccurate results.

### Trace the assigned values through sum and average.
1. The five variables are initialized: value1 = 28.0, value2 = 32.0, value3 = 37.0, value4 = 24.0, value5 = 33.0.
2. The sum calculation evaluates 28.0 + 32.0 + 37.0 + 24.0 + 33.0, storing 154.0 in sum.
3. The average calculation evaluates sum / 5.0 (154.0 / 5.0), storing 30.8 in average.

### Why should the average calculation divide the completed sum rather than only the final value?
Due to mathematical operator precedence, dividing without parentheses or without using the stored total would only divide the last term (e.g., value1 + value2 + value3 + value4 + (value5 / 5)), which produces an incorrect result. Dividing the pre-computed sum ensures the entire set of numbers is properly averaged.

### Explain how the ocean-level calculations use the annual rate and number of years.
The program multiplies the constant annual rise rate (RISE_RATE_MM_PER_YEAR) by the specific duration in years (years1, years2, years3). Each product represents the cumulative ocean level rise over that time period.

### Why is the annual ocean-level rate a good candidate for a named constant?
The annual rate is a fixed environmental baseline value that does not change during program execution. Defining it as a const double prevents accidental modification in code and makes updating the rate simple if requirements change.

### Why does the assignment require calculations to be stored before using cout?
Storing calculation results in named variables before printing separates processing logic from presentation output. This improves code readability, makes debugging easier, and enforces structured variable management.