#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> todos;  // stores the list of tasks
    int choice;
    std::string task;

    while (true) {
        std::cout << "\n=== To-Do List Menu ===\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();  // ignore leftover newline

        if (choice == 1) {
            std::cout << "Enter task: ";
            std::getline(std::cin, task);
            todos.push_back(task);
            std::cout << "Task added!\n";
        }
        else if (choice == 2) {
            std::cout << "\n--- Your Tasks ---\n";
            for (int i = 0; i < todos.size(); i++) {
                std::cout << i + 1 << ". " << todos[i] << "\n";
            }
            if (todos.empty()) {
                std::cout << "No tasks yet!\n";
            }
        }
        else if (choice == 3) {
            std::cout << "Exiting...\n";
            break;
        }
        else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
