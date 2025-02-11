#include <iostream>
#include <vector>

using namespace std;

// Employee class
class Employee {
private:
    string name;
    int id;
    float salary;

public:
    // Constructor to initialize employee details
    Employee(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    // Display employee details
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: $" << salary << endl;
    }
};

int main() {
    vector<Employee> employees;
    int n;

    cout << "Enter the number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int id;
        float salary;

        cout << "\nEnter details for Employee " << i + 1 << ":" << endl;
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); // Ignore newline character left in buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;

        employees.push_back(Employee(name, id, salary));
    }

    cout << "\nEmployee Details:\n";
    for (const auto& emp : employees) {
        emp.display();
    }

    return 0;
}
