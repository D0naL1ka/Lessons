#include <iostream>
#include <string>

//#include <locale>

using namespace std;
/*

*/
int main()
{
	//setlocale(LC_ALL, "uk_UA");
	
	int number = 14;
	long long number3 = 1234567890123456789LL;
	float number1 = 3.14f;
	double number2 = 5.5;
	char symbol = 'A';
	string text = "Hello World!";
	bool isTrue = true;
	bool isFalse = false;

	cout << "int: " << number << endl;
	cout << "float: " << number1 << endl;
	cout << "double: " << number2 << endl;
	cout << "long long: " << number3 << endl;
	cout << "char: " << symbol << endl;
	cout << "string: " << text << endl;
	cout << "isTrue: " << isTrue << endl;
	cout << "isFalse: " << isFalse << endl;
	
	
	//cin >> number;
	//cout << "int: " << number << endl;

	int a = number;
	cout << "int a: " << a << endl;

	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << "Size of double: " << sizeof(double) << " bytes" << endl;
	cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
	cout << "Size of char: " << sizeof(char) << " bytes" << endl;
	cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;

	int b = 2+2;
	int c = 2*3;

	cout << "int b: " << b << endl;
	cout << "int c: " << c << endl;

	//cout << "Hello World!\n" << endl;

}