# 🚗 Car Details Management System (C++)

A simple **Car Details Management System** developed using C++. This program demonstrates the concept of **Encapsulation** in Object-Oriented Programming (OOP) using private attributes and public getter and setter functions.

## 📌 Features

- 🚘 Store car model details.
- 📅 Store car manufacturing year.
- 🏎️ Store car speed.
- 🔒 Protect data using private access specifiers.
- ✏️ Set values using setter functions.
- 📋 Get values using getter functions.
- ⌨️ Accept dynamic input from the user.
- 📊 Display complete car information.

## 🛠️ Technologies Used

- **Language:** C++
- **Concepts:** Object-Oriented Programming (OOP)
- **Compiler:** GCC / MinGW
- **IDE:** Visual Studio Code

## 📂 Project Structure

```text
EXAM 2/
├── output.png
├── main.cpp
└── README.md
```

## 💡 OOP Concepts Used

### 1. Class and Object
- `Car` is the class.
- `c` is the object of the Car class.

### 2. Encapsulation
- Combines data members and member functions inside a single class.
- Protects data using the private access specifier.

### 3. Private Attributes
The following attributes are declared as private:
- `model` – Stores the car model.
- `year` – Stores the manufacturing year.
- `speed` – Stores the car speed.

### 4. Setter Functions
Setter functions are used to assign values to private attributes.

- `setModel()` – Sets the car model.
- `setYear()` – Sets the car year.
- `setSpeed()` – Sets the car speed.

### 5. Getter Functions
Getter functions are used to retrieve private attribute values.

- `getModel()` – Returns the car model.
- `getYear()` – Returns the car year.
- `getSpeed()` – Returns the car speed.

## ▶️ Sample Output

```text
Enter Car Model: BMW
Enter Car Year: 2025
Enter Car Speed: 220

----- Car Details -----
Model: BMW
Year: 2025
Speed: 220 km/h
```

## 🚀 How to Run the Program

For Windows:

```bash
car.exe
```

## 🎯 Learning Objectives

- Understand the concept of Encapsulation.
- Learn private and public access specifiers.
- Understand getter and setter functions.
- Learn how to access private data through public member functions.
- Practice class and object implementation.
- Accept and display user input in C++.

## 👨‍💻 Author

**Vishal Chanchalani**