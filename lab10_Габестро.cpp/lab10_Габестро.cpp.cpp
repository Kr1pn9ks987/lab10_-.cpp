// lab10_Габестро.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

struct Employee {
    char surname[50];
    int age;
    int birth_month;
};

int main() {
    setlocale(LC_CTYPE, "ukr");

    const int MAX_EMPLOYEES = 100;
    Employee employees[MAX_EMPLOYEES];
    int n;

    cout << "Введіть кількість співробітників: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Співробітник #" << i + 1 << ":" << endl;
        cout << "Прізвище: ";
        cin >> employees[i].surname;
        cout << "Вік: ";
        cin >> employees[i].age;
        cout << "Місяць народження (1-12): ";
        cin >> employees[i].birth_month;
    }

    cout << "\nПовний список співробітників:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Прізвище: " << employees[i].surname << ", Вік: " << employees[i].age << ", Місяць народження: " << employees[i].birth_month << endl;
    }

    cout << "\nПрізвища співробітників, вік яких перевищує 28 років:" << endl;
    for (int i = 0; i < n; ++i) {
        if (employees[i].age > 28) {
            cout << employees[i].surname << endl;
        }
    }

    return 0;
}