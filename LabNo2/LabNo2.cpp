#include <iostream>
#include <Windows.h>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    float a, b, c;
    cout << "Введите первый коэффициент: ";
    cin >> a;
    cout << "Введите второй коэффициент: ";
    cin >> b;
    cout << "Введите третий коэффициент: ";
    cin >> c;
    float D = b * b - 4 * a * c;
    if (a == 0) {
        cout << "Это не квадратное уравнение" << endl;
        system("pause");
        return 0;
    }
    else {
        if (D < 0) {
            cout << "Нет действительных корней";
        }
        else {
            if (D == 0) {
                float x = -b / (2 * a);
                cout << "Корень уравнения: " << x << endl;

                system("pause");
                return 0;
            }
            else {
                float x1 = (-b - sqrt(D)) / (2 * a);
                float x2 = (-b + sqrt(D)) / (2 * a);
                cout << "Первый корень уравнения: " << x1 << endl;
                cout << "Второй корень уравнения: " << x2 << endl;
                system("pause");
                return 0;
            }
        }
    }

}