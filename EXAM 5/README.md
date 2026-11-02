# Animal Abstraction & Runtime Polymorphism

A simple C++ program that demonstrates **Abstraction, Inheritance, Pure Virtual Functions, and Runtime Polymorphism** using `Animal`, `Lion`, and `Fish` classes.

## 📌 Features

- Abstract base class `Animal`.
- Derived class `Lion`.
- Derived class `Fish`.
- Displays animal sounds.
- Displays animal movements.
-  Takes animal names as user input.
- Uses an array of base-class pointers.
- Demonstrates runtime polymorphism.

## 🛠️ Technologies Used

- **Language:** C++
- **Concepts:** Object-Oriented Programming (OOP)
- **Compiler:** GCC / MinGW
- **Editor:** Visual Studio Code

## 📂 Project Structure

```text
Animal-Polymorphism/
├── output.png
├── main.cpp
└── README.md
```

## 🧠 OOP Concepts Used

### 1. Abstraction
The `Animal` class is an abstract class that contains pure virtual functions.

### 2. Pure Virtual Functions
```cpp
virtual void makeSound() = 0;
virtual void move() = 0;
```
These functions must be implemented by derived classes.

### 3. Inheritance
`Lion` and `Fish` inherit the `Animal` class.

```cpp
class Lion : public Animal
class Fish : public Animal
```

### 4. Encapsulation
The `name` variable is declared as `protected` and is accessed through the `setName()` function.

### 5. Runtime Polymorphism
An array of base-class pointers stores the addresses of derived-class objects.

```cpp
Animal* animals[2];

animals[0] = &l;
animals[1] = &f;
```

The correct overridden functions are called at runtime.
```

## 🎯 Learning Objectives

- Understand abstract classes.
- Learn pure virtual functions.
- Understand inheritance.
- Practice runtime polymorphism.
- Learn how to use an array of base-class pointers.
- Take input from users in C++.

## 👨‍💻 Author

**Vishal Chanchalani**