# 📚 clsMyStack — Stack Library

A generic C++ stack implementation built on top of `clsMyQueue` using inheritance, supporting standard LIFO behavior alongside all extended queue utilities.

---

## 📖 Overview

`clsMyStack` is a reusable template-based C++ class that implements a stack (LIFO) data structure. It inherits from `clsMyQueue` and overrides the `Push()` method to insert at the beginning instead of the end, achieving LIFO behavior while reusing all other queue functionality.

---

## ✨ Features

- **Standard Stack Operations**: Push, Pop, Top, Bottom, Size, IsEmpty, Clear
- **Inherited Extended Operations**: Reverse, InsertAtFront, InsertAtBack, InsertAfter, GetItem, UpdateItem, Print
- **Generic Type Support**: Works with any data type via C++ templates

---

## 🚀 How to Use

Include the header file in your project:

```cpp
#include "clsMyStack.h"
```

### Basic Usage
```cpp
clsMyStack<int> stack;

stack.Push(10);
stack.Push(20);
stack.Push(30);

stack.Print();        // 30 20 10
cout << stack.Top();  // 30
cout << stack.Bottom(); // 10
cout << stack.Size(); // 3

stack.Pop();
stack.Print();        // 20 10
```

---

## 🧠 Concepts Used

- **Templates** — Generic class supporting any data type via `template <class T>`
- **OOP** — Encapsulation of stack behavior inside a class
- **Inheritance** — Inherits from `clsMyQueue` and overrides `Push()` for LIFO behavior
- **Method Overriding** — `Push()` is overridden to insert at the beginning instead of the end
- **LIFO Design** — Push adds to the front, Pop removes from the front
- **Code Reuse** — All other queue methods (Pop, Size, IsEmpty, Reverse…) are reused without modification

---

## 🔑 Key Methods

| Method | Description |
|---|---|
| `Push()` | Adds an item to the top of the stack (overrides queue behavior) |
| `Pop()` | Removes the top item from the stack (inherited) |
| `Top()` | Returns the value at the top of the stack |
| `Bottom()` | Returns the value at the bottom of the stack |
| `Size()` | Returns the number of items in the stack (inherited) |
| `IsEmpty()` | Returns true if the stack has no items (inherited) |
| `Clear()` | Removes all items from the stack (inherited) |
| `Reverse()` | Reverses the stack in-place (inherited) |
| `Print()` | Prints all stack items from top to bottom (inherited) |

---

## 🔗 Dependencies

| Library | Role |
|---|---|
| `clsMyQueue` | Parent class — provides base queue structure and extended operations |
| `clsDblLinkedList` | Underlying storage used internally by `clsMyQueue` |

---

## 📄 License

This project is open source and free to use for educational purposes.

---

## 👤 Author

👤 **Mahmoud Abd El-Sattar**  
📧 mahmoud.abdelsattar.dev@gmail.com
💼 [linkedin.com/in/mahmoud-abd-el-sattar](https://www.linkedin.com/in/mahmoud-abd-el-sattar-1b227522a)
