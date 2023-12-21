# Assignment 2

## 1. Overview
Welcome to the suite of C++ console applications. This collection includes three distinct programs: `problem1.cpp`, `problem2.cpp`, and `problem3.cpp`. Each program addresses a specific problem, providing solutions or meaningful interactions based on user input.

### Intended Audience
This application is designed for users who are interested in:
- Solving mathematical expressions (problem1.cpp)
- Exploring the meaning of their birthday date (problem2.cpp)
- Calculating and understanding their BMI (problem3.cpp)

### Problem Statements
1. **Problem 1: Mathematical Expression Solver**
   - Solves mathematical expressions provided in string format.

2. **Problem 2: Birthday Date Meaning Generator**
   - Prompts users for their birthday date and provides information based on month, day, and year.

3. **Problem 3: BMI Calculator**
   - Collects user information (name, age, gender, height, weight) and calculates BMI, providing relevant health information.

## 2. Features of the App

### Problem 1: Mathematical Expression Solver
- Accepts a mathematical expression as a string.
- Evaluates and solves the expression.
- Provides the result.

### Problem 2: Birthday Date Meaning Generator
- Interactive input for the user's birthday date.
- Uses a switch statement to provide information based on month, day, and year.
- Option to try another date or exit.

### Problem 3: BMI Calculator
- Collects personal information from the user.
- Converts height to inches and calculates BMI.
- Classifies BMI based on predefined categories.
- Outputs a comprehensive summary including name, age, gender, height, weight, BMI, and its meaning.

## 3. How to Run the App

### Prerequisites
- C++ compiler installed (e.g., GCC or Visual Studio C++ Compiler).

### Running the Programs
Clone the repository:
```
git clone https://github.com/$USER_NAME/assignment-2
```
Change directory to `verif`:
```
cd verif/
```

**Mathematical Expression Solver (problem1.cpp):**
```
make all TARGET=problem1
./problem1
```

**Birthday Date Meaning Generator (problem2.cpp):**
```
make all TARGET=problem2
./problem2
```

**BMI Calculator (problem3.cpp):**
```
make all TARGET=problem3
./problem3
```