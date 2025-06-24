#include<iostream>
using namespace std;

string task[100];
bool done[100];
int total = 0;

void add() {
    cin.ignore();
    cout << "Enter task: ";
    getline(cin, task[total]);
    done[total] = false;
    total++;
    cout << "Task added!\n";
}

void show() {
    if (total == 0) {
        cout << "No tasks to show.\n";
        return;
    }

    for (int i = 0; i < total; i++) {
        cout << i + 1 << ". " << task[i];
        if (done[i]) cout << " [Done]";
        cout << endl;
    }
}

void markDone() {
    int n;
    cout << "Which task is done? Enter number: ";
    cin >> n;
    if (n >= 1 && n <= total) {
        done[n - 1] = true;
        cout << "Marked as done!\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

void del() {
    int n;
    cout << "Enter task number to delete: ";
    cin >> n;
    if (n >= 1 && n <= total) {
        for (int i = n - 1; i < total - 1; i++) {
            task[i] = task[i + 1];
            done[i] = done[i + 1];
        }
        total--;
        cout << "Task deleted!\n";
    } else {
        cout << "Invalid number.\n";
    }
}

int main() {
    int ch;

    do {
        cout << "\n------ TO-DO LIST ------\n";
        cout << "1. Add Task\n2. View Tasks\n3. Mark as Done\n4. Delete Task\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        if (ch == 1) add();
        else if (ch == 2) show();
        else if (ch == 3) markDone();
        else if (ch == 4) del();
        else if (ch == 5) cout << "Thanks for using!\n";
        else cout << "Wrong choice!\n";

    } while (ch != 5);

    return 0;
}
