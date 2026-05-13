#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
//#include <locale>

using namespace std;
/*
*/
int main()
{
	setlocale(LC_ALL, "uk_UA");
	//setlocale(LC_ALL, "rus");
	int age = 7 / 3.1;
	int score = -3;
	int count = 0;
	const double pi = 3.14159;
	float x = 2.5f;  // суфікс f для float

	cout << age << endl;  // 135

	// Операції:
	cout << "Operation";
	cout << age + 10*5 << endl;  // 135
	cout << age * 2 << endl;  // 34
	cout << 17 / 5 << endl;  // 3
	cout << 17 % 2 << endl;  // 1



	double price = 99.90;
	
	/*
	// Форматований вивід:
	cout << fixed << setprecision(2)<< price << endl; // 99.90
	cout << fixed << setprecision(2)<< pi << endl; // 3.14

	string name = "Олена";
	string city = "Київ";

	// Конкатенація:
	string full = name + " з " + city;

	// Вивід:
	cout << "Привіт, " << name << "!" << endl;

	// Довжина:
	cout << name.length() << endl; // 5


	string s = "42";
	// stoi = string to int
	int n = stoi(s);   // -> 42

	// stof, stod теж є
	double f = stod("3.14");

	// to_string
	string b = to_string(100);

	// bool — булевий тип
	bool is_student = true;
	bool has_done_hw = false;

	cout << is_student << endl;
	// 1 (true виводить як 1)

	// Виведення словом:
	cout << boolalpha << is_student<<"\n";  // true

	//Константи — const / readonly
	const double PI = 3.14159;
	const int MAX_SCORE = 100;
	// constexpr — ще суворіше:
	constexpr int DAYS = 7;
	//PI = 5.1;

	/*
	бібліотека <iomanip>
	
	setw(n) (Set Width) - ширина наступного поля
	setprecision(n) - кількість знаків після коми
	setfill('c') — заповнює порожні місця


	cout << "Пі: " << fixed << setprecision(2) << PI << "\n\n";

	cout << "Прайс-лист:\n";
	cout << left << setw(15) << "Товар" << "|" << setw(10) << "Ціна |" << "\n";
	cout << setfill('-') << setw(26) << "-" << "\n"; // Лінія роздільник
	cout << setfill(' ') << left << setw(15) << "Яблуко" << "|" << setw(10) << "15.50" << "\n";
	cout << left << setw(15) << "Ананас" << "|" << setw(10) << "120.00" << "\n";
	cout << endl;

              // 0

	int a, c;
	cout << "Перше: ";  cin >> a;
	cout << "Друге: ";  cin >> c;
	cout << boolalpha;
	cout << a << "==" << c << " -> " << (a == c) << "\n";
	cout << a << "!=" << c << " -> " << (a != c) << "\n";
	cout << a << "> " << c << " -> " << (a > c) << "\n";
	cout << a << "< " << c << " -> " << (a < c) << "\n";

	*/

return 0;
}