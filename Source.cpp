#include <iostream>
using namespace std;

//

// Сумма всех чисел от A до B
inline int sum_A_to_B(int A, int B) {
	int res = 0;
	for (int i = A; i <= B; i++)
		res += i;
	return res;
}
//Перегруженные функции
//Максимум двух целых чисел
int max_el(int A, int B) {
	cout << "Получены два целых числа.\n";
	return A > B ? A : B;
}
//Максимум двух вещественных чисел
double max_el(double A, double B) {
	cout << "Получены два вещественных числа.\n";
	return A > B ? A : B;
}
//Максимум трёх коротких чисел
short max_el(short A, short B, short C) {
	cout << "Получены три коротких числа.\n";
	return A > (B > C ? B : C) ? A : (B > C ? B : C);
}
//Максимум трёх коротких чисел
void max_el(int A, int B, bool C) {
	cout << "Получены два странных числа O_о\n";
	cout << (A > B ? A : B) << endl;
}

//Шаблонные функции
//Функция поиска модуля числа
template <typename T>
T absolute(T num) {
	return num < 0 ? -num : num;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//SUM_A_TO_B
	/*cout << "Введите два числа: ";
	cin >> n >> m;
	cout << "Сумма чисел от " << n << " до " << m << " = " << sum_A_to_B << endl;*/
	//MAX_EL
	cout << max_el(10, 7)<<endl;
	cout << max_el(50, 20)<<endl;
	cout << max_el(0.3, 0.8) << endl; //0.8

	short s1 = 15, s2 = 20, s3 = 10;
	cout << max_el(s1, s2, s3)<<endl;

	max_el(2, 4, true);

	//ABSOLUTE
	cout << absolute(7) << endl; //7
	cout << absolute(-11) << endl;
	cout << absolute(0.16) << endl;
	cout << absolute(-1.5) << endl;
	cout << absolute(true) << endl;

	return 0;
}