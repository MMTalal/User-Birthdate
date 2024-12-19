# User Birthdate

## Description
This program is a simple C++ application that collects basic user input and provides a summary of the data entered. It serves as a practice exercise for working with input, output, and basic data types in C++. 

The user is prompted to input:
1. Their first character (e.g., the first letter of their name or another meaningful character).
2. Their birth date, including the day, month, and year.

The program then summarizes the inputs and displays a greeting along with the full birth date.

---

## Features
- **Interactive Input**: The program guides users to provide specific data through prompts.
- **Data Display**: It outputs a formatted summary of the entered information.
- **Basic Validation**: While the program doesn't enforce strict input validation, it demonstrates how to handle different data types.

---

## How to Use
1. Compile the code using a C++ compiler (e.g., `g++`):
   ```bash
   g++ -o User_Birthdate main.cpp
   ```
2. Run the executable:
   ```bash
   ./User_Birthdate
   ```
3. Follow the on-screen prompts to enter your:
   - First character
   - Birth day (01-31)
   - Birth month (01-12)
   - Birth year (e.g., 2000)

4. View the summary of your inputs along with a friendly greeting.

---

## Example Output
```plaintext
Input your first character: M
Input your birth day (01-31): 15
Input your birth month (01-12): 08
Input your birth year (e.g., 2000): 1995

Summary of your input:
First character: M
Birth day: 15
Birth month: 8
Birth year: 1995

Hello, M! Your birth date is: 15/8/1995
```

---

## Requirements
- A C++ compiler (e.g., GCC, Clang, MSVC)
- Basic understanding of C++ to modify or extend the code, if needed

---

## Purpose
This project is a beginner-friendly demonstration of:
- Using `cin` and `cout` for user interaction.
- Managing simple input/output operations in C++.
- Formatting output for readability.

Feel free to customize and expand the program to include additional features like input validation or extended functionality!

---

## License
This code is open-source and can be used, modified, and distributed freely. Attribution is appreciated but not required.
