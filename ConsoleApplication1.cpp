#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    const double PI = 3.14;
    double x, y;
    cout << "Введите x" << endl;
    cin >> x;
    y = (sqrt(atan(1 + pow(sin(x), 2)) + log2(1 + exp(-x))))/ (log(pow(sin(x), 2) + PI));
    cout << "y(x)" << y << endl;
    system("pause");
    return 0;

}

