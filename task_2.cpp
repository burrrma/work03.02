//Я не успела сделать это с помощью указателей!!((


#include <iostream>
#include <string>
#include <string>

struct Employee {
    int index;
    std::string name;
    std::string secondname;
    double salary;
};


void Print(Employee employee) {
    std::cout << "Index: " << employee.index << ", Name: " << employee.name << ", Second Name: " << employee.secondname << ", Salary: " << employee.salary;

}



void Add(Employee* arr) {
    Employee NewEmployee;
    std::cout << "Enter index of new employee: " << std::endl;
    std::cin >> NewEmployee.index;
    std::cout << "Enter name of new employee: " << std::endl;
    std::cin >> NewEmployee.name;
    std::cout << "Enter second name of new employee: " << std::endl;
    std::cin >> NewEmployee.secondname;
    std::cout << "Enter salary of new employee: " << std::endl;
    std::cin >> NewEmployee.salary;
    arr[NewEmployee.index] = NewEmployee;
    Print(NewEmployee);
}

void Delete(Employee* arr) {
    int index;
    std::cout << "Enter index of employee you want to delete: " << std::endl;
    std::cin >> index;
    arr[index] = { 0, " ", " ", 0.0 };
}

void Change(Employee* arr) {
    int index;
    std::cout << "Enter index of employee you want to delete: " << std::endl;
    std::cin >> index;
    std::cout << "Enter name of new employee: " << std::endl;
    getline(std::cin, arr[index].name);
    std::cout << "Enter second name of new employee: " << std::endl;
    getline(std::cin, arr[index].secondname);
    std::cout << "Enter salary of new employee: " << std::endl;
    std::cin >> arr[index].salary;
    std::cout << "Index: " << arr[index].index << ", Name: " << arr[index].name << ", Second Name: " << arr[index].secondname << ", Salary: " << arr[index].salary;

}

void PrintAll(Employee* arr) {
    for (int i = 0; i < 4; i++) {
        Print(arr[i]);
        std::cout << std::endl;
    }
}



int main() {
    while (true) {
        //void (*ptrfunc)(Employee); //объявление указателя
        int action;
        std::cout << "Select an action. If you want to add a new employee, enter 1. If you want to delete an existing employee, enter 2. If you want to update information about an employee, enter 3. If you want to see all employees of the company, enter 4. " << std::endl;
        std::cin >> action;

        Employee arr[50];
        if (action == 1) {
            Add(arr);
        };

        if (action == 2) {
            Delete(arr);
        };

        if (action == 3) {
            Change(arr);
        }
        if (action == 4) {
            PrintAll(arr);
        }
    }
}