#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <cmath>
#include <map>
#include <list>

using namespace std;

float func(float x) {
	return (x * x - 2 * x + 2) / (x - 1);
}
void filesave(string str) {
	ofstream ofs("C:\\Users\\fegff\\Desktop\\test.txt", ofstream::out);
	if (ofs.is_open())
	{
		ofs << str << std::endl;
	}
	ofs.close();
}
string fileread() {
	string line, returning;

	ifstream in("C:\\Users\\fegff\\Desktop\\test.txt");
	if (in.is_open())
	{
		while (getline(in, line))
		{
			returning += line;
		}
	}
	in.close(); 
	return returning;
}
int charToInt(char c) {
	return c - '0';
}
int sign(int x) {
	return x >= 0
				? x > 0 
					? 1
					: 0
				: -1 ;
}
bool search(string str, char charing) {
	bool yesNo = false;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == charing) yesNo = true;
	}
	return yesNo;
}
int Sf(int m, int c, int i) {
	if (i >= 0) {
		return (m * Sf(m, c, i - 1) + i) % c;
	}
	else {
		return 1;
	}
}
int toInt(char charing) {
	switch (charing) {
		case 'A': return 10;
		case 'B': return 11;
		case 'C': return 12;
		case 'D': return 13;
		case 'E': return 14;
		case 'F': return 15;
		case 'G': return 16;
		case 'H': return 17;
		case 'I': return 18;
		case 'J': return 19;
		case 'K': return 20;
		case 'L': return 21;
		case 'M': return 22;
		case 'N': return 23;
		case 'O': return 24;
		case 'P': return 25;
		case 'Q': return 26;
		case 'R': return 27;
		case 'S': return 28;
		case 'T': return 29;
		case 'U': return 30;
		case 'V': return 31;
		case 'W': return 32;
		case 'X': return 33;
		case 'Y': return 34;
		case 'Z': return 35;
	}
}
string Char(int charing) {
	switch (charing) {
	case 10: return "A";
	case 11: return "B";
	case 12: return "C";
	case 13: return "D";
	case 14: return "E";
	case 15: return "F";
	case 16: return "G";
	case 17: return "H";
	case 18: return "I";
	case 19: return "J";
	case 20: return "K";
	case 21: return "L";
	case 22: return "M";
	case 23: return "N";
	case 24: return "O";
	case 25: return "P";
	case 26: return "Q";
	case 27: return "R";
	case 28: return "S";
	case 29: return "T";
	case 30: return "U";
	case 31: return "V";
	case 32: return "W";
	case 33: return "X";
	case 34: return "Y";
	case 35: return "Z";
	}
}
list<int> random(int m, int i, int c) {
	list<int> s = { rand() };
	for (int j = 0; j < i; j++)
	{
		s.push_back((m * s.back() + j) % c);
	}
	return s;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int operation, N, mi, ci, ii, pp, A[3][4],
		sumDeneg(0), sumCommis(0), sumVsego(0), N1, N2;
	float r, R, h, l, x, a, b, y, S, p, n, m, c, mii, B[4][2], C[3][5],
		sellerNaibInt(0.0f), sellerNaimInt(1000.0f),
		sellerComNaibInt(0.0f), sellerComNaimInt(1000.0f);
	float const pi = 3.14f;
	string lines, _lines, sinysoid[50][12], sellerNaib, sellerNaim, sellerComNaib, sellerComNaim;
	char tmp;
	bool next(true);
	long digital(0);
	list<int> listik;
	map<char, int> translitMap { 
		{ 'I', 1 }, 
		{ 'V', 5 },
		{ 'X', 10 },
		{ 'L', 50 },
		{ 'C', 100 },
		{ 'D', 500 },
		{ 'M', 1000 }
	};
	while (true) {
		cout << "\nВведите номер ДЗ: ";
		cin >> operation;
		switch (operation)
		{
		case 1:
			cout << "Уже было сделано :)";
			break;
		case 2:
			cout << "Введите номер Задачи: ";
			cin >> operation;
			switch (operation)
			{
			case 1://Домашнее задание № 2 - «Конус»
				cout << "Введите r : ";
				cin >> r;
				cout << "Введите R : ";
				cin >> R;
				cout << "Введите h : ";
				cin >> h;
				cout << "Введите l : ";
				cin >> l;
				cout << "V = " << (pi * h * (pow(R, 2) + R * r + pow(r, 2)) / 3) << " S = " << pi * (R * R + (R + r) * l + r * r);
				break;
			case 2://Домашнее задание № 2 - «Разветвление»
				cout << "Введите x : ";
				cin >> x;
				cout << "Введите a : ";
				cin >> a;
				cout << "w = " << (
					abs(x) < 1
					? a * log(abs(x))
					: sqrt(a - x * x)
					);
				break;
			case 3://Домашнее задание № 2 - «Функция»
				cout << "Введите x : ";
				cin >> x;
				cout << "Введите y : ";
				cin >> y;
				cout << "Введите b : ";
				cin >> b;
				cout << "z = " << (
					b - y > 0 && b - x > 0
					? to_string(log(b - y) * sqrt(b - x))
					: "Значение не может быть вычеслено так как один из оргументов меньше 0"
					);
				break;
			case 4://Домашнее задание № 2 - «Порядок»
				cout << "Введите N : ";
				cin >> N;

				if (N > 0)
					for (int i = N; i < N + 10; i++)
					{
						cout << i << " ";
					}
				else
					cout << "N - натуральное число, оно не может быть <=0";
				break;
			case 5://Домашнее задание № 2 - «Табуляция»
				for (float i = -4; i <= 4; i += 0.5)
				{
					cout << setw(5) << i << "|";
				}
				cout << "\n";
				for (float i = -4; i <= 4; i += 0.5)
				{
					if (i != 1)
						cout << setw(5) << round(func(i) * 100) / 100 << "|";
					else
						cout << setw(5) << "!= 0 |";
				}
				break;
			default:
				break;
			}
			break;
		case 3:
			cout << "Введите номер Задачи: ";
			cin >> operation;
			switch (operation)
			{
			case 1://Домашнее задание № 3 - «Заем»
				cout << "Введите S : ";
				cin >> S;
				cout << "Введите p : ";
				cin >> p;
				cout << "Введите n : ";
				cin >> n;
				r = p / 100;
				cout << "m = " << (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
				break;
			case 2://Домашнее задание № 3 - «Ссуда» 
				cout << "Введите S : ";
				cin >> S;
				cout << "Введите m : ";
				cin >> m;
				cout << "Введите n : ";
				cin >> n;
				pp = 0;
				for (float i = 1; i < 10000; i++)//  0 - 10 000% шаг в 1
				{
					r = i / 100;
					mii = (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
					if (fabs(mii - m) < 2)
					{
						pp = i;
						break;
					}
				}
				cout << (pp == 0 ? "Слишком малы выплаты m" : to_string(pp));
				break;
			case 3://Домашнее задание № 3 - «Копирование файла»
				filesave("1145h15h2h5h4h632h3h6h7h");
				break;
			case 4://Домашнее задание № 3 - «Фильтр»
				lines = fileread();
				for (char ch : lines) {
					if (isdigit(ch))
						cout << ch;
				}
				break;
			case 5://Домашнее задание № 3 - «Сортировка букв»
				cout << "Введите строку из букв : ";
				cin >> lines;
				//lines = "qwertyuiopasdfghjklzxcvbnmqwer";
				for (int j = 0; j < lines.length() - 1; j++) {
					for (int i = 0; i < lines.length() - 1; i++) {
						if (lines[i] > lines[i + 1]) {
							tmp = lines[i + 1];
							lines[i + 1] = lines[i];
							lines[i] = tmp;
						}
					}
				}
				cout << lines;
				break;
			default:
				break;
			}
			break;
		case 4:
			cout << "Введите номер Задачи: ";
			cin >> operation;
			switch (operation)
			{
			case 1://Домашнее задание № 4 - «Файл»
				filesave("554");
				lines = fileread();
				x = 0;
				for (char ch : lines) {
					if (isdigit(ch))
						x += charToInt(ch);
				}
				cout << x;
				break;
			case 2://Домашнее задание № 4 - «Знак числа»
				cout << "Введите число: ";
				cin >> x;
				cout << sign(x);
				break;
			case 3://Домашнее задание № 4 - «Геометрические фигуры»
				cout << "Введите п(прямоугольник) т(треугольник) к(круга): ";
				cin >> lines;
				if (search(lines, 'п')) {
					cout << "Введите a: ";
					cin >> a;
					cout << "Введите b: ";
					cin >> b;
					cout << "Ответ: " << a * b;
				}
				else if (search(lines, 'т')) {
					cout << "Введите a: ";
					cin >> a;
					cout << "Введите b: ";
					cin >> b;
					cout << "Введите c: ";
					cin >> c;
					p = (a + b + c) / 2;
					cout << "Ответ: " << sqrt(p * (p - a) * (p - b) * (p - c));//площадь герона
				}
				else if (search(lines, 'к')) {
					cout << "Введите r: ";
					cin >> r;
					cout << "Ответ: " << pi * r * r;
				}
				break;
			case 4://Домашнее задание № 4 - «Былая слава»
				cout << "* * * * * * * *----------------------------------" << endl;
				cout << "* * * * * * * *----------------------------------" << endl;
				cout << "* * * * * * * *----------------------------------" << endl;
				cout << "* * * * * * * *----------------------------------" << endl;
				cout << "* * * * * * * *----------------------------------" << endl;
				cout << "* * * * * * * *----------------------------------" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "-------------------------------------------------" << endl;
				break;
			case 5://Домашнее задание № 4 - «Синусоида»
				cout << "         *                          |        *                          " << endl;
				cout << "     *       *                      |    *       *                      " << endl;
				cout << "  *             *                   | *             *                   " << endl;
				cout << "*-----------------*-----------------*-----------------*----------------*" << endl;
				cout << "                    *             * |                   *             * " << endl;
				cout << "                       *       *    |                       *      *    " << endl;
				cout << "                           *        |                          *        " << endl;

				break;
			case 6://Домашнее задание № 4 - «Автоматный распознаватель»
				cout << "\nРаботает while !: " << endl;
				while (true)
				{
					cout << " \nВведите римское число: ";
					cin >> lines;
					N = 0;
					if (lines.length() == 1) {
						N = translitMap.at(lines[0]);
					}
					else {
						for (int i = 0; i < lines.length(); i++) {
							if (translitMap.at(lines[i]) < translitMap.at(lines[i + 1])) {
								N += translitMap.at(lines[i + 1]) - translitMap.at(lines[i]);
								i++;
							}
							else {
								N += translitMap.at(lines[i]);
							}

							if (i == lines.length() - 2) {
								N += translitMap.at(lines[i + 1]);
								i++;
							}
						}
					}

					cout << N;
				}
				break;
			case 7://Домашнее задание № 4 - «Генератор случайных чисел»
				listik = random(37, 3, 64);
				listik = random(25173, 13849, 65537);
				for (int number : listik)
					cout << number << endl;
				break;
			case 8://Домашнее задание № 4 - «Умножение матриц»
				//A продовцы\товары    В товары\цена-Комиссионные   C как в задание

				A[0][0] = 5; A[0][1] = 2; A[0][2] = 0; A[0][3] = 10;
				A[1][0] = 3; A[1][1] = 5; A[1][2] = 2; A[1][3] = 5;
				A[2][0] = 20; A[2][1] = 0; A[2][2] = 0; A[2][3] = 0;

				B[0][0] = 1.2f; B[0][1] = 0.5f;
				B[1][0] = 2.8f; B[1][1] = 0.4f;
				B[2][0] = 5.0f; B[2][1] = 1.0f;
				B[3][0] = 2.0f; B[3][1] = 1.5f;

				C[0][0] = 0; C[0][1] = 0;
				C[1][0] = 0; C[1][1] = 0;
				C[2][0] = 0; C[2][1] = 0;

				for (int i = 0; i < 3; i++)
				{
					cout << "Продовец - " + to_string(i + 1) + "  ";
					for (int j = 0; j < 4; j++)
					{
						cout << setw(5) << A[i][j] << "   ";
					}
					cout << "\n";
				}

				cout << "\n";

				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						C[i][0] = C[i][0] + A[i][j] * (B[j][0] - B[j][1]);
						C[i][1] = C[i][1] + A[i][j] * B[j][1];
						sumDeneg += A[i][j] * (B[j][0] - B[j][1]);
						sumCommis += A[i][j] * B[j][1];
						sumVsego += A[i][j] * B[j][0];
					}
				}

				for (int i = 0; i < 3; i++)
				{
					if (sellerNaibInt < C[i][0]) {
						sellerNaibInt = C[i][0];
						sellerNaib = "Продовец " + to_string(i + 1);
					}
					if (sellerNaimInt > C[i][0]) {
						sellerNaimInt = C[i][0];
						sellerNaim = "Продовец " + to_string(i + 1);
					}
					if (sellerComNaibInt < C[i][1]) {
						sellerComNaibInt = C[i][1];
						sellerComNaib = "Продовец " + to_string(i + 1);
					}
					if (sellerComNaimInt > C[i][1]) {
						sellerComNaimInt = C[i][1];
						sellerComNaim = "Продовец " + to_string(i + 1);
					}

				}
				cout << "Выручил больше денег: " << sellerNaib << ", а меньше денег: " << sellerNaim << endl;
				cout << "Выручил больше комиссионных: " << sellerComNaib << ", а меньше денег: " << sellerComNaim << endl;
				cout << "Общая сумма вырученных денег: " << sumDeneg << endl;
				cout << "Всего комиссионных: " << sumCommis << endl;
				cout << "Общая сумма денег прошедших через руки продовцов: " << sumVsego << endl;
				break;
			case 9://Домашнее задание № 4 - «Системы счисления»
				cout << "Введите число: ";
				cin >> lines;
				cout << "Введите систему счисления числа: ";
				cin >> N1;
				cout << "Введите систему счисления в какую надо преобразовать: ";
				cin >> N2;
				//переводим в 10-сятичную
				for (int i = 0; i < lines.length(); i++) {
					if (!isdigit(lines[i]))
						digital += toInt(lines[i]) * pow(N1, lines.length() - i - 1);
					else
						digital += charToInt(lines[i]) * pow(N1, lines.length() - i - 1);
				}

				//переводим в какую требуется
				lines = "";
				while (next) {
					lines.insert(0, (digital % N2 <= 9 ? to_string(digital % N2) : Char(digital % N2)));
					digital = digital / N2;
					if (digital < N2) {
						next = false;
						lines.insert(0, (digital <= 9 ? to_string(digital) : Char(digital)));
					}
				}
				cout << lines;
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}
    
}

// дз - 2, +++++
// дз - 3, +++++
// дз - 4, +++++++++