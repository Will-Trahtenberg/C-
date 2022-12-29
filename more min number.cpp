#include <iostream>
using namespace std;

void main() {

	setlocale(LC_ALL, "RUS");
	int(n);
	
	cout << "enter number, no more 99: " << endl;
	cin >> n;
	if ((n / 10) > (n % 10)) {
		cout << "more num " << n / 10 << endl;
		cout << "min num " << n % 10 << endl;
	}
	else if ((n / 10) < (n % 10))
	{
		cout << "more num " << n / 10 << endl;
		cout << "min num " << n % 10 << endl;
	}
}