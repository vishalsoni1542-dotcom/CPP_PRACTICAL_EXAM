# 💻 Device Management System (C++)

A simple **Device Management System** developed using C++. This program demonstrates Object-Oriented Programming (OOP) concepts such as Encapsulation, Inheritance, and Abstraction using a base class and two derived classes.

## 📌 Features

- 💻 Create a Laptop object.
- 📱 Create a Smartphone object.
- 🏷️ Store device brand information.
- ⚡ Store power consumption details.
- 🔒 Protect data using private attributes.
- ✏️ Set values using setter functions.
- 📋 Get values using getter functions.
- 🖥️ Display Laptop information.
- 📱 Display Smartphone information.
- ⌨️ Accept dynamic input from the user.

## 🛠️ Technologies Used

- **Language:** C++
- **Concepts:** Object-Oriented Programming (OOP)
- **Compiler:** GCC / MinGW
- **IDE:** Visual Studio Code

## 📂 Project Structure

```text
EXAM 3/
├── output.png
├── main.cpp
└── README.md
```

## 💡 OOP Concepts Used

### 1. Base Class – Device

The `Device` class contains two private attributes:

- `brand` – Stores the device brand.
- `powerConsumption` – Stores device power consumption.

It also provides public getter and setter functions to access and modify these attributes.

### 2. Inheritance

Two classes are derived from the `Device` class:

- `Laptop` – Displays laptop information.
- `Smartphone` – Displays smartphone information.

Both classes inherit the public member functions of the Device class.

### 3. Encapsulation

- Data members are declared as private.
- Public setter functions assign values.
- Public getter functions retrieve values.

### 4. Abstraction

The `display()` functions provide a simple way to display device information without exposing the internal data implementation.

## 🔧 Functions Used

| Function | Purpose |
|---|---|
| `setBrand()` | Sets device brand |
| `getBrand()` | Returns device brand |
| `setPowerConsumption()` | Sets power consumption |
| `getPowerConsumption()` | Returns power consumption |
| `display()` | Displays device details |

## ▶️ Sample Output

```text
Enter Laptop Brand: Dell
Enter Laptop Power Consumption: 65

Enter Smartphone Brand: Samsung
Enter Smartphone Power Consumption: 25

----- Laptop Details -----
Brand: Dell
Power Consumption: 65 Watts

----- Smartphone Details -----
Brand: Samsung
Power Consumption: 25 Watts
```

## 🚀 How to Run the Program

For Windows:

```bash
device.exe
```

## 🎯 Learning Objectives

- Understand base and derived classes.
- Learn the concept of inheritance.
- Understand encapsulation using private attributes.
- Practice getter and setter functions.
- Understand basic abstraction.
- Accept and display dynamic user input.
- Learn code reusability through inheritance.

## 👨‍💻 Author

**Vishal Chanchalani**