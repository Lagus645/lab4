#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <clocale>
using namespace std;

int main() {
	srand(time(0));
	setlocale(LC_ALL, "russian");
	const int n = 6;
	const int g = (n-1);
	int m[n];
	int m2[g];
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 100 - 50;
	}
	cout << "Было:" << endl;
	for (int i = 0; i < n; i++) {
		cout << " " << m[i];
	}
	cout << endl;
	int t = m[0];
	for (int i = 0; i < (n - 1); i++) {
		m[i] = m[i + 1];
	}
	m[n - 1] = t;
	for (int i = 0; i < g; i++) {
		m2[i] = m[i];
	}
	cout << "После удаления: " << endl;
	for (int i = 0; i < g; i++) {
		cout << " " << m2[i];
	}
	cout << endl;
	cout << "На сколько элементов сместить массив вправо? ";
	int k;
	cin >> k;
	int temp[g];
	for (int i = 0; i < k; i++) {
		temp[i] = m2[g - k + i];
	}

	for (int i = g - 1; i >= k; i--) {
		m2[i] = m2[i - k];
	}

	for (int i = 0; i < k; i++) {
		m2[i] = temp[i];
	}
	cout << "Стало: " << endl;
for (int i = 0; i < g; i++) {
	cout << " " << m2[i];
	}
	cout << endl;
	return 0;
}