#include "pch.h"
#include <iostream> 

using namespace std;

bool f(int n) {
	for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return 0;
	return 1;
}

int main()
{
	int n, res = 1;
	cin >> n;
	for (int i = 0, k = 2; i < n; i++,k++) {
		while (!f(k)) k++;
		res *= k;
	}
	cout << res;
	system("pause");
	return 0;
}