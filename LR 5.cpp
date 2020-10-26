#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double L;
    cout << "Введіть довжину в сантиметрах" << endl;
    cin >> L;
    L = (int)L / 100;
    cout << "Довжина в метрах складає: " << L << endl;
    system("pause");

}
