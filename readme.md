# Object-Oriented vs Functional Programming Examples

This repository contains simple examples demonstrating both object-oriented (OOP) and functional programming approaches to common programming problems.

## Examples Included

### 1. Counter

- **OOP Version**: Uses a class to encapsulate the counter state
- **Functional Version**: Uses pure functions to manipulate counter value

### 2. Student

- **OOP Version**: Student class with private data and public methods
- **Functional Version**: Uses simple data structures and pure functions

### 3. Point

- **OOP Version**: Point class with coordinate manipulation
- **Functional Version**: Direct coordinate variables with calculation functions

### 4. Rectangle

- **OOP Version**: Rectangle class with length/width encapsulation
- **Functional Version**: Simple area calculation function

### 5. Calculator

- **OOP Version**: Calculator class maintaining state
- **Functional Version**: Pure math functions without state

## Key Differences Demonstrated

| Concept          | OOP Approach             | Functional Approach          |
| ---------------- | ------------------------ | ---------------------------- |
| State Management | Encapsulated in objects  | Passed between functions     |
| Data Access      | Through methods          | Direct variable access       |
| Code Structure   | Classes with methods     | Standalone functions         |
| Mutability       | Objects can change state | Data is typically immutable  |
| Composition      | Through inheritance      | Through function composition |

## How to Use

Each example includes:

1. The original OOP version (class-based)
2. A functional alternative
3. A main program demonstrating usage

Simply compile and run any example to see it in action:

```bash
g++ example.cpp -o example
./example
```

## When to Use Each Approach

**Use OOP when:**

- You need to model complex systems with state
- Data and behavior naturally belong together
- You need inheritance hierarchies
- Working in codebases that use OOP patterns

**Use Functional when:**

- Operations are primarily data transformations
- You need thread-safe code
- Working with simple data processing
- You want more predictable, testable code

## Contributors

Feel free to contribute additional examples or improve the existing ones!
