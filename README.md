# 🧮 C++ Calculator Project (Modular Approach)

## 📌 Project Overview

This project is a basic calculator application in C++ developed using a modular programming approach.
The calculator performs four fundamental arithmetic operations:

* Addition
* Subtraction
* Multiplication
* Division

Each operation is implemented in a separate source file, making the project easy to understand, maintain, and extend.

---

## 🎯 Objectives

* To understand modular programming in C++
* To practice function declaration and definition
* To demonstrate team collaboration
* To implement basic arithmetic operations

---

## 📁 Project Structure
calculator/
│
├── main.cpp        # Main program (menu-driven interface)
├── operations.h    # Function declarations
├── add.cpp         # Addition function
├── sub.cpp         # Subtraction function
├── mul.cpp         # Multiplication function
├── div.cpp         # Division function (with error handling)
---

## ⚙️ Features

* Menu-driven calculator
* User-friendly console interface
* Separate files for each operation
* Error handling for division by zero
* Easy to expand with more functions

---

## 👨‍💻 Team Contribution

The project is divided among 4 team members:

| Member      | Responsibility                               |
| ----------- | -------------------------------------------- |
| Member 1    | Addition module (add.cpp)                  |
| Member 2    | Subtraction module (sub.cpp)               |
| Member 3    | Multiplication module (mul.cpp)            |
| All Members | Integration in main.cpp                    |

---

## ▶️ How to Compile and Run

### Step 1: Open Terminal

Navigate to project folder:
cd calculator
### Step 2: Compile
g++ main.cpp add.cpp sub.cpp mul.cpp div.cpp -o calc
### Step 3: Run
./calc
---

## 💡 Sample Output
--- Calculator Menu ---
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit
Enter choice: 1
Enter two numbers: 5 3
Result = 8
---

## 🛡️ Error Handling

* Prevents division by zero
* Displays error message instead of crashing

---

## 🚀 Future Enhancements

* Add scientific operations (sqrt, power, etc.)
* Implement using OOP (Classes & Objects)
* Create GUI-based calculator
* Add input validation for invalid entries

---

## 📚 Concepts Used

* Functions
* Header files
* Modular programming
* Conditional statements
* Loops
* Basic error handling

---

## 🏁 Conclusion

This project demonstrates how a simple calculator can be designed using a modular and team-based approach in C++. It helps in understanding real-world software development practices like code organization and collaboration.

---