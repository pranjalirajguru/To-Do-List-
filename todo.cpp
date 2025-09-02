#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

struct Task {
    string name;
    bool completed;
};

// Function to load tasks from file
void loadTasks(vector<Task>& tasks) {
    ifstream file("tasks.txt");
    if (!file) return;

    string line;
    while (getline(file, line)) {
        if (line.size() > 0) {
            bool status = (line[0] == '1'); // 1 = completed, 0 = pending
            string taskName = line.substr(2);
            tasks.push_back({taskName, status});
        }
    }
    file.close();
}

// Function to save tasks to file
void saveTasks(const vector<Task>& tasks) {
    ofstream file("tasks.txt");
    for (auto& task : tasks) {
        file << (task.completed ? "1 " : "0 ") << task.name << endl;
    }
    file.close();
}

void showTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks found.\n";
        return;
    }
    cout << "\nYour To-Do List:\n";
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].name 
             << (tasks[i].completed ? " [✔ Done]" : " [ ]") << endl;
    }
}

int main() {
    vector<Task> tasks;
    loadTasks(tasks);

    int choice;
    do {
        cout << "\n=== TO-DO LIST MENU ===\n";
        cout << "1. Add Task\n";
        cout << "2. Show Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string task;
            cout << "Enter new task: ";
            getline(cin, task);
            tasks.push_back({task, false});
            saveTasks(tasks);
        } 
        else if (choice == 2) {
            showTasks(tasks);
        } 
        else if (choice == 3) {
            showTasks(tasks);
            int num;
            cout << "Enter task number to mark as done: ";
            cin >> num;
            if (num > 0 && num <= tasks.size()) {
                tasks[num - 1].completed = true;
                saveTasks(tasks);
            } else {
                cout << "Invalid task number.\n";
            }
        } 
        else if (choice == 4) {
            showTasks(tasks);
            int num;
            cout << "Enter task number to delete: ";
            cin >> num;
            if (num > 0 && num <= tasks.size()) {
                tasks.erase(tasks.begin() + (num - 1));
                saveTasks(tasks);
            } else {
                cout << "Invalid task number.\n";
            }
        }
    } while (choice != 5);
    cout << "Goodbye! Your tasks are added & saved.\n";
    return 0;
}
