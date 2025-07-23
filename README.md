# EXPERIMENT 05(A): CHECKING WHETHER A NUMBER IS EVEN OR ODD IN C++

## AIM
To write a C++ program that takes a number as input and determines whether it is even or odd using the modulus operator.

## TOOLS USED
- **Language**: C++
- **Compiler**: g++ (GNU Compiler Collection)
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor

## THEORY
In C++, the **modulus operator `%`** is used to determine the remainder after division. For any integer:
- If the number divided by 2 gives a remainder of 0, it is **even**.
- If it gives a remainder of 1, it is **odd**.

This operation is simple and widely used to distinguish even and odd integers.

### Example:
- `5 % 2 = 1` : Odd  
- `6 % 2 = 0` : Even

### ALGORITHM
1. Start  
2. Declare an integer variable `num_input`  
3. Prompt the user to input a number  
4. Use `cin` to read the input  
5. Use `if-else` to check:
   - If `num_input % 2 == 0` → print "EVEN"
   - Else print "ODD"  
6. End

## CONCLUSION
I wrote a C++ program to determine if a given number is even or odd using the modulus operator. This experiment helped me apply conditional statements and understand how to check number parity in programming.

# EXPERIMENT 05(B): FINDING THE LARGEST OF THREE NUMBERS IN C++

## AIM
To write a C++ program that takes three numbers as input and determines the largest among them using conditional statements.

## TOOLS USED
- **Language**: C++
- **Compiler**: g++ (GNU Compiler Collection)
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor

## THEORY
In programming, we often need to compare multiple values. Using conditional statements like `if`, `else if`, and `else`, we can determine the maximum value among multiple numbers.

To find the largest of three numbers:
- Compare the first number with the second and third.
- If it's greater than both, it's the largest.
- Otherwise, compare the remaining two and find the maximum.

This logic ensures that the largest number is correctly identified using simple comparison operations.

### Example:
For inputs `num1 = 4`, `num2 = 9`, `num3 = 2`,  
Output will be **9 is the largest number**

## ALGORITHM
1. Start  
2. Declare three integer variables: `num_1`, `num_2`, `num_3`  
3. Prompt the user to input three numbers  
4. Read the input using `cin`  
5. Use nested `if-else` statements to compare the values:
   - If `num_1 > num_2` and `num_1 > num_3` → print `num_1` is the largest  
   - Else if `num_2 > num_3` → print `num_2` is the largest  
   - Else print `num_3` is the largest  
6. End

## CONCLUSION
I wrote a C++ program to find the largest of three numbers using conditional statements. This experiment enhanced my understanding of nested `if-else` structures and logical comparison in C++.

# EXPERIMENT 05(C): CHECKING WHETHER A YEAR IS A LEAP YEAR IN C++

## AIM
To write a C++ program that checks whether a given year is a leap year or not.

## TOOLS USED
- **Language**: C++
- **Compiler**: g++ (GNU Compiler Collection)
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor

## THEORY
A **leap year** occurs every 4 years and has 366 days instead of the regular 365. The extra day is added to the month of February (29 days instead of 28).  
The leap year rule is:
- If a year is divisible by 4, it **might** be a leap year.
- But if it is also divisible by 100, it is **not** a leap year,
- Unless it is also divisible by 400, in which case **it is** a leap year.

### Conditions:
- Year % 4 == 0 : Possible leap year  
- Year % 100 == 0 : Not a leap year  
- Year % 400 == 0 : Definitely a leap year

### Example:
- `2000` : Leap year (divisible by 400)  
- `1900` : Not a leap year (divisible by 100 but not 400)  
- `2024` : Leap year (divisible by 4 but not by 100)

## ALGORITHM
1. Start  
2. Declare an integer variable `year`  
3. Prompt the user to enter a year  
4. Use `cin` to take input  
5. Use conditional checks:
   - If `year % 4 == 0`  
     - If `year % 100 == 0`  
       - If `year % 400 == 0` → Leap Year  
       - Else Not a Leap Year  
     - Else Leap Year  
   - Else Not a Leap Year  
6. Display result  
7. End

## CONCLUSION
I wrote a C++ program to determine if a given year is a leap year. This experiment helped me understand how to apply nested conditions and modular arithmetic to solve real-world calendar problems in code.

# EXPERIMENT 05(D): SIMPLE CALCULATOR USING SWITCH STATEMENT IN C++

## AIM
To write a C++ program that performs basic arithmetic operations (Addition, Subtraction, Multiplication, Division) using a switch-case construct.

## TOOLS USED
- **Language**: C++
- **Compiler**: g++ (GNU Compiler Collection)
- **Platform**: Linux / Windows / macOS
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor

## THEORY
In C++, the `switch` statement allows us to execute one block of code among many options based on the value of a variable or expression.

This experiment simulates a basic calculator that:
- Accepts two numbers from the user
- Performs one of four operations based on user choice:
  1. Addition
  2. Subtraction
  3. Multiplication
  4. Division

Each case handles one operation, and `break` prevents fall-through to other cases.

- Division should use `float` type for precise decimal output.
- Typecasting is used for floating-point division.

## ALGORITHM
1. Start  
2. Declare necessary variables: `choice`, `num_1`, `num_2`, and result variables  
3. Display the operation menu  
4. Read user choice  
5. Use a `switch` statement to handle each operation:
   - Case 1: Addition
   - Case 2: Subtraction
   - Case 3: Multiplication
   - Case 4: Division  
6. Take two numbers as input for the selected case  
7. Perform the operation and display the result  
8. Use `break` after each case  
9. End

## CONCLUSION
I wrote a C++ program that functions as a basic calculator using the `switch` control structure. This experiment improved my understanding of decision-making constructs and arithmetic operations in C++.
