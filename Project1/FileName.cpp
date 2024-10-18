/*
#include<iostream>
#include <windows.h>

using namespace std; // Ми використовуєм щоб спрощено записувати ввід-вивід даних та інших дій без використання std:cout

int main() {
	SetConsoleOutputCP(1251);
 	cout << "хелоу ворлд" << endl;
	cout << "юра лох" << endl;
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
	cout << "Введіть 2 числа" << endl;
	cin >> a >> b;
	cout << "Сума: " << a + b << endl;
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
	cout << "Введіть будь-яке число" << endl;
	cin >> number;
	if (number % 2 == 0) {
		cout << "Число парне" << endl;
	}
	else {
		cout << "Число не парне" << endl;
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
	cout << "Введіть 2 числа" << endl;
	cin >> a >> b;
	cout << "Сума: " << a * b << endl;
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
	cout << "Введіть два числа" << endl;
	cin >> number1 >> number2;
	if (number1 < number2) {
		cout << "Число менше" << endl;
	}
    else if (number1 == number2 ) {
		cout << "Число рівне" << endl;
	}
	else {
		cout << "Число більше" << endl;
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
	cout << "Введіть число" << endl;
	cin >> number;
	if (number % 3 == 0 && number % 5 == 0 ) {
		cout << "Число кратне i 3 i 5" << endl;
	}
	else if (number % 3 == 0 && number % 5 != 0) {
		cout << "Число кратне тільки 3" << endl;
	}
	else if (number % 5 == 0 && number % 3 != 0) {
		cout << "Число кратне тільки 5" << endl;
	}
	else {
		cout << "Число не кратне ні 3 ні 5" << endl;
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
	cout << "Введіть 3 числа" << endl;
	cin >> number1 >> number2 >> number3;
	int min_num = number1;
	if (number2 < min_num) {
		min_num = number2;
	}
	if (number3 < min_num) {
		min_num = number3;
	}
	cout << "Мінімальне число: " << min_num << endl;
}
*/
/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int year;
	cout << "Введіть рік" << endl;
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		cout << year << " рік є високосним" << endl;
	}
	else {
		cout << year << " рік не є високосним" << endl;
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
	cout << "Введіть 5 чисел" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		sum += num;
	}
	double avr = static_cast <double> (sum) / 5;
	cout << "Середнє арифметичне число: " << avr << endl;
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
	cout << "Введіть 7 чисел" << endl;
	cin >> num;
	max_num = num;
	for (int i = 1; i < 7; i++) {
		cin >> num;
		if (num > max_num) {
			max_num = num;
		}
	}
		cout << max_num << " - максимальне число" << endl;
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
	cout << suma << " -сума чисел від 1 до 100" << endl;
}
*/


/*
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	int num;
	cout << "Напишіть будь-яке число" << endl;
	cin >> num;
	cout << "Таблиця множення на " << num << endl;
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
	cout << "Введіть будь-яке число для факторіалу" << endl;
	cin >> num;
	int fact = 1;
	for (int a = 1; a <= num; ++a) {
		fact *= a;
	}
	cout << "Факторіал числа " << num << " = " << fact << endl;
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
	cout << "Введіть номер дня тижня від 1 до 7" << endl;
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
			cout << "Неправильний день тижня" << endl;
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
	cout << "Виберіть транспортний засіб (1 - Машина, 2 - Велосипед, 3 - Літак, 4 - Лодка)" << endl;
	cin >> choice;
	switch (choice) {
		case car:
			cout << "Ви вибрали машину" << endl;
			break;
		case bicycle:
			cout << "Ви вибрали велосипед" << endl;
			break;
		case airplane:
			cout << "Ви вибрали літак" << endl;
			break;
		case boat:
			cout << "Ви вибрали лодку" << endl;
			break;
		default:
			cout << "Неправильне введене число, введіть число від 1 до 4" << endl;
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
	cout << "Напишіть значення в метрах" << endl;
	cin >> metr;
	cout << "Виберіть величину для конвертації (1 - Км, 2 - Ярд, 3 - Миля)" << endl;
	cin >> choice;
	switch (choice) {
		case km:
			cout << metr << " = " << metr * 0.001 << " кілометрів" << endl;
			break;
		case yard:
			cout << metr << " = " << metr * 1.09361 << " ярдів" << endl;
			break;
		case mile:
			cout << metr << " = " << metr * 0.000621371 << " миль" << endl;
			break;
		default:
			cout << "Неправильно введене число, оберіть число від 1 до 3" << endl;
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
	cout << "Введіть 2 числа" << endl;
	cin >> num1 >> num2;
	int choice;
	cout << "Введіть 1 - щоб додати, 2 - щоб помножити" << endl;
	cin >> choice;
	if (choice == 1) {
		cout << "Сума додавання - " << plu(num1, num2) << endl;
	}
	else if (choice == 2) {
		cout << "Сума множення - " << mnoz(num1, num2) << endl;
	}
	else 
	cout << "Введіть число 1 або 2" << endl;
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
	cout << "Введіть число" << endl;
	cin >> num;
	if (chot(num)) {
		cout << num << " - парне число" << endl;
	}
	else if (nchot(num)) {
		cout << num << " - не парне число" << endl;
	}
	else 
	cout << "Введіть число" << endl;
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
	cout << "Введіть 3 числа" << endl;
	cin >> num1 >> num2 >> num3;
	cout << "Максимальне число - " << max1(num1, num2, num3) << endl;
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
	cout << "Введіть число" << endl;
	cin >> num;
	cout << num << " - факторіал числа = " << fact(num) << endl;
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
	cout << "Введіть 4 числа" << endl;
	cin >> num1 >> num2 >> num3 >> num4;
	cout << "Середнє арифметичне число - " << avg(num1, num2, num3, num4) << endl;
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
	cout << "Введіть номер числа Фібоначчі" << endl;
	cin >> num;
	cout << "Число Фібоначчі - " << fibonaci(num) << endl;
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
	cout << "Введіть число для перевірки чи воно просте" << endl;
	cin >> num1;
	if (num(num1)) {
		cout << "Число просте - " << num1 << endl;
	}
	else cout << "Число не просте - " << num1 << endl;
	return 0;
}
*/