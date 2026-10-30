# 🎓 Student Management System (C++)

A simple **Student Management System** developed using C++. This program demonstrates the use of classes, private data members, constructors, arrays of objects, and user input.

## 📌 Features

- 🎓 Create multiple student objects.
- 📝 Accept student details from the user.
- 🔒 Use private data members for data security.
- 🏗️ Implement default and parameterized constructors.
- 📚 Store student records using an array of objects.
- 📋 Display all student details.
- 🔄 Support multiple student entries.

## 🛠️ Technologies Used

- **Language:** C++
- **Concepts:** Object-Oriented Programming (OOP)
- **Compiler:** GCC / MinGW
- **IDE:** Visual Studio Code

## 📂 Project Structure

```text
EXAM 1/
├── output.png
├── main.cpp
└── README.md
```

## 💡 OOP Concepts Used

### 1. Class and Object
- `Student` is the class.
- `students[100]` creates an array of student objects.

### 2. Encapsulation
- `name` and `rollNumber` are declared as private attributes.

### 3. Default Constructor
- Initializes the student name with an empty string.
- Initializes the roll number with 0.

### 4. Parameterized Constructor
- Accepts student name and roll number as arguments.
- Initializes student object data.

### 5. Array of Objects
- Stores multiple student objects in a single array.

### 6. Member Function
- `display()` prints student information.

## ▶️ Sample Output

```text
Enter Number of Students: 2

Enter Student 1 Details:
Enter Name: Rahul
Enter Roll Number: 101

Enter Student 2 Details:
Enter Name: Amit
Enter Roll Number: 102

----- Student Details -----

Name: Rahul
Roll Number: 101

Name: Amit
Roll Number: 102
```

## 🚀 How to Run the Program

**Step 1:** Clone the repository.

**Step 2:** Open the project folder.

```bash
cd Student-Management-System
```

**Step 3:** Compile the program.

```bash
g++ main.cpp -o student
```

**Step 4:** Run the program.

```bash
./student
```

For Windows:

```bash
student.exe
```

## 🎯 Learning Objectives

- Understand classes and objects in C++.
- Learn default and parameterized constructors.
- Practice encapsulation using private attributes.
- Understand arrays of objects.
- Accept dynamic user input.
- Display multiple student records using loops.

## 👨‍💻 Author

**Vishal Chanchalani**