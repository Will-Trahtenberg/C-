
#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "RUS");
    float z, b, a, betta, x, y = 0;
    int j;

    cout << "������� ���������� �����: ";
    cin >> j;

    for (int i = 1; i <= j; i++)
    {
        cout << "������� �������� Z, B, A, Betta ��� X" << i << ":\n";
        cout << "Z = ";
        cin >> z;
        cout << "B = ";
        cin >> b;
        cout << "A = ";
        cin >> a;
        cout << "Betta = ";
        cin >> betta;

        x = pow(z, 3) - b + pow(a, 2) / pow(tan(betta), 2);
        y += x;
    }

    cout << "\ny = " << y << endl;

    cin.get();
    return 0;
}