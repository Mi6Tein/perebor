// n3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include "pch.h"
#include <iostream>

using namespace std;

bool f(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return true;
	}
	return false;
}

int F(int n)
{
	int b = 1;
	if (n <= 2) return 1;
	if (f(n)) {
		for (int i = 2; i < n; i++) if (n % i == 0 && !f(i)) b *= F(i);
		return b;
	}
	else return n - 1;
}

int main()
{
	int n;
	cin >> n;
	cout << F(n) << " ";
	system("pause");
	return 0;
}

