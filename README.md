# C++ Learning Project

A C++ competitive programming practice repository with configured development environment.

## Files

- `pattern.cpp` - Main C++ program that reads input and produces output
- `input.txt` - Test input file
- `output.txt` - Generated output file

## Setup

### Prerequisites
- MinGW-w64 GCC compiler
- VS Code with C/C++ extension

### Building and Running
```bash
g++ -std=c++17 pattern.cpp -o pattern.exe
./pattern.exe < input.txt > output.txt
```

### VS Code Tasks
- **Ctrl+Shift+B** (or **Ctrl+Shift+P** → "Tasks: Run Build Task") → "compile and run"

**Important for Windows users:** If the task doesn't work, change your default terminal:
1. Press **Ctrl+Shift+P**
2. Type "Terminal: Select Default Profile"
3. Choose "Command Prompt" (cmd)

## Features
- Configured for `#include <bits/stdc++.h>`
- Automated build and test with I/O redirection
- IntelliSense support for competitive programming headers