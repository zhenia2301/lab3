// lab5_perm_dan.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num1;
    double num2;
    double num3;
    cout << "Перевод:" << endl;
    cout << "[1]сажней в метры" << endl;
    cout << "[2]из дюймов в сантиметры" << endl;
    cout << "[3]футов в метры" << endl;
    cout << "[4]драхм в граммы" << endl;
    cout << "[5]унций в граммы" << endl;
    cout << "[6]фунтов в килограммы" << endl;
    cout << "[7]аршинов в метры" << endl;
    cout << "[8]золотников в граммы" << endl;
    cout << "[9]дюймов в миллиметры" << endl;
    cout << "Выберите нужное:";
    cin >> num1;
    system("cls");
    cout << "Введите число, которое нужно перевести:";
    cin >> num2;
    system("cls");
    switch (num1)
    {
    case 1:
        num3 = num2 * 2.1366;
        cout << "Результат:" << num3;
        break;
    case 2:
        num3 = num2 * 2.5;
        cout << "Результат:" << num3;
        break;
    case 3:
        num3 = num2 * 0.3048;
        cout << "Результат:" << num3;
        break;
    case 4:
        num3 = num2 * 3.7325;
        cout << "Результат:" << num3;
        break;
    case 5:
        num3 = num2 * 29.86;
        cout << "Результат:" << num3;
        break;
    case 6:
        num3 = num2 * 0.40951;
        cout << "Результат:" << num3;
        break;
    case 7:
        num3 = num2 * 0.7112;
        cout << "Результат:" << num3;
        break;
    case 8:
        num3 = num2 * 4.2657;
        cout << "Результат:" << num3;
        break;
    case 9:
        num3 = num2 * 25.3995;
        cout << "Результат:" << num3;
        break;
    default:
        break;
    }

    return 0;
}*/
/*#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double S;
    double N;
    double R;
    cout << "Введите сумму вклада:";
    cin >> S;
    cout << "Введите количество лет:";
    cin >> N;
    R = S + ((S * 0.03) * N);
    cout<<"Результат:" << R;
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num = 0;

    cout << "Введите высоту  равнобедренного треугольника: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 1; j < num - i; j++)
        {
            cout << ' ';
        }

        for (int j =num - 2 * i; j <= num; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    const int num1 = 10;
    long long num2 = 1;
    for (int i = 1; i <= num1; i++)
        num2 *= (i * (i + 1)) / 2;
    cout << num2 << endl;
    return 0;
}*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int i = 0;
    int sum = 0;
    int num = 0;

    cout << "Введите число (0 - это выход): \n";


    do {
        cout << "Число " << i + 1 << "=";
        cin >> num;

        if (num) {
            i++;
            sum += num;
        }
    } while (num);

    cout << "Количество введенных чисел :" << i + 1 << endl;
    cout << "Общяя сумма:" << sum << endl;
    cout << "Среднее арифметическое :" << sum / (i + 1) << endl;

    return 0;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
