# C++ To-Do List Application

## 📌 Overview
A simple **console-based To-Do List** application written in C++.  
It allows users to:
- Add tasks
- View tasks
- Delete tasks
- Save tasks to a file (tasks.txt)
- Load tasks from file when restarted

This project is designed for beginners to practice **C++ basics** like arrays, loops, user input, and file handling.

---

## 🚀 Getting Started

### 1. Prerequisites
- Install **MinGW (g++)** or any C++ compiler.
- Make sure `g++` is added to your **PATH** so you can run it in PowerShell/Command Prompt.

Check version:
```sh
g++ --version
2. Clone or Create the Project
Save your C++ source file (todo.cpp) inside a folder, e.g.:

makefile
Copy code
C:\Users\Pranjali Rajguru\Cpp\todo.cpp
3. Compile the Program
Open PowerShell in the folder where your file is saved:

sh
Copy code
g++ todo.cpp -o todo.exe
4. Run the Program
sh
Copy code
./todo.exe
🛠 Features
✅ Add new tasks

✅ Display all tasks

✅ Delete a task

✅ Save tasks automatically to tasks.txt

✅ Load tasks on program startup

📖 Example Usage
mathematica
Copy code
===== To-Do List Menu =====
1. Add Task
2. View Tasks
3. Delete Task
4. Exit
============================
Enter choice: 1
Enter task: Finish assignment
Task added and saved!
If you exit and restart, the tasks are loaded from tasks.txt.
📂 Files

todo.cpp → main source code

todo.exe → compiled program

tasks.txt → stores all saved tasks


