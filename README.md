*This project has been created as part of the 42 curriculum by smolines.*

# CPP Module 02

## Description

This repository contains the exercises of **Module 02** of the C++ curriculum at 42. Building on Modules 00 and 01, this module introduces **ad-hoc polymorphism** (operator overloading) and enforces the **Orthodox Canonical Form** for classes: every class from this module onward implements a default constructor, a copy constructor, a copy assignment operator, and a destructor.

The central topic of this module is **fixed-point numbers** — a numeric representation that trades some of the flexibility of floating-point numbers for more predictable performance and precision, historically used in graphics, audio, and embedded/scientific computing before floating-point hardware became ubiquitous.

### Exercise 00 — My First Class in Orthodox Canonical Form

A first, minimal `Fixed` class representing a fixed-point number, built in Orthodox Canonical Form:
- A private `int` storing the raw fixed-point value, and a private `static const int` storing the number of fractional bits (fixed to `8`).
- A default constructor, copy constructor, copy assignment operator, and destructor.
- `getRawBits()` / `setRawBits()` to access and modify the raw value directly.

At this stage, the class can only represent the value `0.0`.

### Exercise 01 — Towards a more useful fixed-point number class

Extends `Fixed` with:
- A constructor taking a plain `int` and converting it to the fixed-point representation.
- A constructor taking a `float` and converting it likewise.
- `toFloat()` and `toInt()` to convert the fixed-point value back to standard numeric types.
- An overload of the `<<` insertion operator so a `Fixed` can be printed directly as a floating-point-looking value.

### Exercise 02 — Now we're talking

`Fixed` becomes fully usable as a numeric type, with overloads for:
- The 6 comparison operators (`>`, `<`, `>=`, `<=`, `==`, `!=`).
- The 4 arithmetic operators (`+`, `-`, `*`, `/`).
- The 4 increment/decrement operators (pre/post `++` and `--`), each moving the value by the smallest representable step.
- Static `min()` / `max()` member functions, each overloaded for both mutable and `const` references.

### Exercise 03 — BSP

Uses the finished `Fixed` class in a small geometric utility. A `Point` class (also in Orthodox Canonical Form) represents a 2D point with `Fixed const` `x` and `y` coordinates. A `bsp()` function determines whether a given point lies strictly inside a triangle defined by three other points — returning `false` if the point sits exactly on an edge or vertex. ("BSP" here stands for Binary Space Partitioning, the technique this kind of point-in-triangle test is used for.)

## Instructions

### Compilation

```bash
make
```

Run inside each exercise's directory (`ex00/` through `ex03/`). Each Makefile compiles the corresponding source files with `c++ -Wall -Wextra -Werror` (compatible with `-std=c++98`), and includes the required `$(NAME)`, `all`, `clean`, `fclean`, and `re` rules.

### Running

**Exercise 00 / 01 / 02:**

```bash
./fixed
```

Runs a self-contained test demonstrating the `Fixed` class's behavior (construction, conversions, operators) at each stage of its development.

**Exercise 03:**

```bash
./bsp
```

Runs tests checking whether various points fall inside or outside a given triangle, using the `Fixed`-based `Point` class and the `bsp()` function.

## Resources

- [Wikipedia — Fixed-point arithmetic](https://en.wikipedia.org/wiki/Fixed-point_arithmetic)
- General documentation on operator overloading and the Orthodox Canonical Form in C++98
- General documentation on point-in-triangle tests (Binary Space Partitioning)

**AI usage:** AI assistance was used to help draft and structure this README file (organizing sections, describing each exercise's behavior and usage) based on the actual project source code and the official subject requirements. No AI-generated code was used in the implementation of the exercises themselves; all class design and logic were written and understood by the author.

## Project Structure

```
.
├── ex00/
│   ├── Makefile
│   ├── includes/
│   │   └── Fixed.hpp
│   └── src/
│       ├── Fixed.cpp
│       └── main.cpp
├── ex01/
│   ├── Makefile
│   ├── includes/
│   │   └── Fixed.hpp
│   └── src/
│       ├── Fixed.cpp
│       └── main.cpp
├── ex02/
│   ├── Makefile
│   ├── includes/
│   │   └── Fixed.hpp
│   └── src/
│       ├── Fixed.cpp
│       └── main.cpp
└── ex03/
    ├── Makefile
    ├── includes/
    │   ├── Fixed.hpp
    │   └── Point.hpp
    └── src/
        ├── BSP.cpp
        ├── Fixed.cpp
        ├── Point.cpp
        └── main.cpp
```
