# 💻 Device Discount Management System (C++)

A simple **Device Discount Management System** developed using C++. This project demonstrates important Object-Oriented Programming (OOP) concepts such as Encapsulation, Inheritance, Abstraction, Virtual Functions, and Runtime Polymorphism.

The program calculates discounts for different devices, including Laptops and Smartphones, based on their power consumption.

## 📌 Features

- Create Laptop objects.
- Create Smartphone objects.
- Store device brand information.
- Store power consumption.
- Store device prices.
- Protect data using private attributes.
- Set values using setter functions.
- Get values using getter functions.
- Calculate discounts based on device conditions.
- Implement runtime polymorphism using virtual functions.
- Store different device objects using an array of base-class pointers.
- Accept dynamic input from the user.
- Display device information and calculated discounts.

## 🛠️ Technologies Used

- **Language:** C++
- **Concepts:** Object-Oriented Programming (OOP)
- **Compiler:** GCC / MinGW
- **IDE:** Visual Studio Code

## 📂 Project Structure

```text
EXAM 4/
├─ output.png
├── main.cpp
└── README.md
```

## 💡 OOP Concepts Used

### 1. Base Class – Device

The `Device` class contains three private attributes:

- `brand` – Stores the device brand.
- `powerConsumption` – Stores device power consumption.
- `price` – Stores the device price.

It also contains public getter and setter functions.

### 2. Inheritance

Two classes are derived from the Device class:

- `Laptop` – Calculates laptop discounts.
- `Smartphone` – Calculates smartphone discounts.

Both classes inherit the public functions of the Device class.

### 3. Encapsulation

- Data members are declared as private.
- Setter functions assign values.
- Getter functions retrieve private values.

### 4. Abstraction

The `calculateDiscount()` function is declared as a pure virtual function in the Device class.

Each derived class provides its own implementation.

```cpp
virtual float calculateDiscount() = 0;
```

### 5. Virtual Function

The virtual `display()` and `calculateDiscount()` functions allow derived classes to provide their own implementations.

### 6. Runtime Polymorphism

An array of base-class pointers is used to store the addresses of different device objects.

```cpp
Device* devices[2];

devices[0] = &l;
devices[1] = &s;
```

Calling functions through these pointers executes the appropriate derived-class implementation.

## 🎯 Discount Calculation Criteria

| Device | Condition | Discount |
|---|---|---:|
| Laptop | Power ≥ 60 Watts | 10% |
| Laptop | Power below 60 Watts | 5% |
| Smartphone | Power ≤ 30 Watts | 8% |
| Smartphone | Power above 30 Watts | 4% |

## 🔧 Functions Used

| Function | Purpose |
|---|---|
| `setBrand()` | Sets device brand |
| `getBrand()` | Returns device brand |
| `setPowerConsumption()` | Sets power consumption |
| `getPowerConsumption()` | Returns power consumption |
| `setPrice()` | Sets device price |
| `getPrice()` | Returns device price |
| `calculateDiscount()` | Calculates device discount |
| `display()` | Displays device information |

## ▶️ Sample Output

```text
Enter Laptop Brand: Dell
Enter Laptop Power Consumption: 65
Enter Laptop Price: 50000

Enter Smartphone Brand: Samsung
Enter Smartphone Power Consumption: 25
Enter Smartphone Price: 30000

===== Device Information =====

----- Laptop Details -----
Brand: Dell
Power Consumption: 65 Watts
Price: 50000
Discount: 5000
Calculated Discount: 5000

----- Smartphone Details -----
Brand: Samsung
Power Consumption: 25 Watts
Price: 30000
Discount: 2400
Calculated Discount: 2400
```

## 🎓 Learning Objectives

- Understand inheritance using base and derived classes.
- Learn encapsulation using private attributes.
- Understand abstraction using pure virtual functions.
- Learn virtual functions in C++.
- Understand runtime polymorphism.
- Practice arrays of base-class pointers.
- Implement function overriding.
- Calculate discounts using conditional statements.
- Accept and display dynamic user input.

## 👨‍💻 Author

**Vishal Chanchalani**