/*
#include<iostream>
#include <windows.h>

using namespace std; // �� ������������ ��� �������� ���������� ���-���� ����� �� ����� �� ��� ������������ std:cout

int main() {
	SetConsoleOutputCP(1251);
 	cout << "����� �����" << endl;
	cout << "��� ���" << endl;
	return 0;
}
*/
/*
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	int a, b;
	cout << "������ 2 �����" << endl;
	cin >> a >> b;
	cout << "����: " << a + b << endl;
	return 0;
}
*/
/*
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	int number;
	cout << "������ ����-��� �����" << endl;
	cin >> number;
	if (number % 2 == 0) {
		cout << "����� �����" << endl;
	}
	else {
		cout << "����� �� �����" << endl;
	}
}
*/
/*
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	int a, b;
	cout << "������ 2 �����" << endl;
	cin >> a >> b;
	cout << "����: " << a * b << endl;
	return 0;
}
*/
/*
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	int number1, number2 ;
	cout << "������ ��� �����" << endl;
	cin >> number1 >> number2;
	if (number1 < number2) {
		cout << "����� �����" << endl;
	}
    else if (number1 == number2 ) {
		cout << "����� ����" << endl;
	}
	else {
		cout << "����� �����" << endl;
	}
}
*/
/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
    int number;
	cout << "������ �����" << endl;
	cin >> number;
	if (number % 3 == 0 && number % 5 == 0 ) {
		cout << "����� ������ i 3 i 5" << endl;
	}
	else if (number % 3 == 0 && number % 5 != 0) {
		cout << "����� ������ ����� 3" << endl;
	}
	else if (number % 5 == 0 && number % 3 != 0) {
		cout << "����� ������ ����� 5" << endl;
	}
	else {
		cout << "����� �� ������ � 3 � 5" << endl;
	}
}
*/
/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int number1, number2, number3;
	cout << "������ 3 �����" << endl;
	cin >> number1 >> number2 >> number3;
	int min_num = number1;
	if (number2 < min_num) {
		min_num = number2;
	}
	if (number3 < min_num) {
		min_num = number3;
	}
	cout << "̳������� �����: " << min_num << endl;
}
*/
/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int year;
	cout << "������ ��" << endl;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		cout << year << " �� � ����������" << endl;
	}
	else {
		cout << year << " �� �� � ����������" << endl;
	}
}
*/
/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int num;
	int sum = 0;
	cout << "������ 5 �����" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		sum += num;
	}
	double avr = static_cast <double> (sum) / 5;
	cout << "������ ����������� �����: " << avr << endl;
}
*/
/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int num;
	int max_num;
	cout << "������ 7 �����" << endl;
	cin >> num;
	max_num = num;
	for (int i = 1; i < 7; i++) {
		cin >> num;
		if (num > max_num) {
			max_num = num;
		}
	}
		cout << max_num << " - ����������� �����" << endl;
}
*/


/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int num = 0;
	for (int yura = 0; yura < 1001;) {
		num += 1;
		cout << num << " yura loh" << endl;
		yura++;
		Sleep(1);
	}
}
*/


/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	for (int num = 1; num < 101; num++) {
		if (num % 3 == 0 && num % 5 == 0) {
			cout << "FizzBuzz" << endl;
		}
		else if (num % 3 == 0) {
			cout << "Fizz" << endl;
		}
		else if (num % 5 == 0) {
			cout << "Buzz" << endl;
		}
		else {
			cout << num << endl;
		}
	}
	return 0;
}
*/


/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int suma = 0;
	for (int num = 1; num <= 100; ++num) {
		suma += num;
	}
	cout << suma << " -���� ����� �� 1 �� 100" << endl;
}
*/


/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int num;
	cout << "�������� ����-��� �����" << endl;
	cin >> num;
	cout << "������� �������� �� " << num << endl;
	for (int a = 1; a <= 100; ++a) {
		cout << num << " * " << a << " = " << num * a << endl;
	}
	return 0;
}
*/


/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	for (int num = 1; num <= 50; ++num) {
		if (num % 2 == 0) {
			cout << num << "  ";
		}
	}
return 0;
}
*/




/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int  num;
	cout << "������ ����-��� ����� ��� ���������" << endl;
	cin >> num;
	int fact = 1;
	for (int a = 1; a <= num; ++a) {
		fact *= a;
	}
	cout << "�������� ����� " << num << " = " << fact << endl;
	return 0;
}
*/
 
/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int day;
	cout << "������ ����� ��� ����� �� 1 �� 7" << endl;
	cin >> day;

	switch (day) {
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Sereda" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Subota" << endl;
			break;
		case 7:
			cout << "Sunday" << endl;
			break;
		default: 
			cout << "������������ ���� �����" << endl;
		break;
	}
	return 0;
}
*/


/*
#include <iostream>
#include <windows.h>

using namespace std;

enum transport {
	car = 1,
	bicycle,
	airplane,
	boat,
};

int main() {
	SetConsoleOutputCP(1251);
	int choice;
	cout << "������� ������������ ���� (1 - ������, 2 - ���������, 3 - ˳���, 4 - �����)" << endl;
	cin >> choice;
	switch (choice) {
		case car:
			cout << "�� ������� ������" << endl;
			break;
		case bicycle:
			cout << "�� ������� ���������" << endl;
			break;
		case airplane:
			cout << "�� ������� ����" << endl;
			break;
		case boat:
			cout << "�� ������� �����" << endl;
			break;
		default:
			cout << "����������� ������� �����, ������ ����� �� 1 �� 4" << endl;
			break;
	}
	return 0;
}
*/


/*
#include <iostream>
#include <windows.h>

using namespace std;

enum transport {
	km = 1,
	yard,
	mile,
};

int main() {
	SetConsoleOutputCP(1251);
	int choice;
	double metr;
	cout << "�������� �������� � ������" << endl;
	cin >> metr;
	cout << "������� �������� ��� ����������� (1 - ��, 2 - ���, 3 - ����)" << endl;
	cin >> choice;
	switch (choice) {
		case km:
			cout << metr << " = " << metr * 0.001 << " ��������" << endl;
			break;
		case yard:
			cout << metr << " = " << metr * 1.09361 << " ����" << endl;
			break;
		case mile:
			cout << metr << " = " << metr * 0.000621371 << " ����" << endl;
			break;
		default:
			cout << "����������� ������� �����, ������ ����� �� 1 �� 3" << endl;
	}
	return 0;
}
*/


/*
#include <iostream>
#include <windows.h>

using namespace std;

int plu(int c, int d) {
	return c + d;
}
int mnoz(int a, int b) {
	return a * b;
}

int main() {
	SetConsoleOutputCP(1251);
	int num1, num2;
	cout << "������ 2 �����" << endl;
	cin >> num1 >> num2;
	int choice;
	cout << "������ 1 - ��� ������, 2 - ��� ���������" << endl;
	cin >> choice;
	if (choice == 1) {
		cout << "���� ��������� - " << plu(num1, num2) << endl;
	}
	else if (choice == 2) {
		cout << "���� �������� - " << mnoz(num1, num2) << endl;
	}
	else 
	cout << "������ ����� 1 ��� 2" << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <windows.h>

using namespace std;

bool chot(int a) {
	return a % 2 == 0;
}
bool nchot(int a) {
	return a % 2 == 1;
}

int main() {
	SetConsoleOutputCP(1251);
	int num;
	cout << "������ �����" << endl;
	cin >> num;
	if (chot(num)) {
		cout << num << " - ����� �����" << endl;
	}
	else if (nchot(num)) {
		cout << num << " - �� ����� �����" << endl;
	}
	else 
	cout << "������ �����" << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <windows.h>

using namespace std;

int max1(int a, int b, int c) {
	if (a > b && a > c) return a;
	else if (b > c) return b;
	else return c;
}

int main() {
	SetConsoleOutputCP(1251);
	int num1, num2, num3;
	cout << "������ 3 �����" << endl;
	cin >> num1 >> num2 >> num3;
	cout << "����������� ����� - " << max1(num1, num2, num3) << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <windows.h>

using namespace std;

long long fact(long long number) {
	if (number == 0 || number == 1) return 1;
	return number * fact(number - 1);
}
int main() {
	SetConsoleOutputCP(1251);
	long long num;
	cout << "������ �����" << endl;
	cin >> num;
	cout << num << " - �������� ����� = " << fact(num) << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <windows.h>

using namespace std;

double avg(int a, int b, int c, int d) {
	return (a + b + c + d) / 4.0;
}

int main() {
	SetConsoleOutputCP(1251);
	int num1, num2, num3, num4;
	cout << "������ 4 �����" << endl;
	cin >> num1 >> num2 >> num3 >> num4;
	cout << "������ ����������� ����� - " << avg(num1, num2, num3, num4) << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <windows.h>

using namespace std;

int fibonaci(int a) {
	if (a <= 1) {
		return a;
	}
	return fibonaci(a - 1) + fibonaci(a - 2);
}

int main() {
	SetConsoleOutputCP(1251);
	int num;
	cout << "������ ����� ����� Գ�������" << endl;
	cin >> num;
	cout << "����� Գ������� - " << fibonaci(num) << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <windows.h>

using namespace std;

bool num(int a) {
	if (a < 2) {
		return false;
	}
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	SetConsoleOutputCP(1251);
	int num1;
	cout << "������ ����� ��� �������� �� ���� ������" << endl;
	cin >> num1;
	if (num(num1)) {
		cout << "����� ������ - " << num1 << endl;
	}
	else cout << "����� �� ������ - " << num1 << endl;
	return 0;
}
*/