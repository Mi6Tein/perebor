#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	bool s = 0;
	int n;
	cin >> n;
	bool* A = new bool [n];
	for (int k = 0; k <= n + 2; k++) A[k] = 0;

	for (int i = 2; i < n; i++) for (long j = i * i; j <= n; j = j + i) A[j] = 1;
	for (int i = 2; i <= n; i++) {
		if (A[i] == 0) {
			if (A[i + 2] == 0) { cout << i << " "; }
			else

				for (int a = 2; a <= (i + 2) / 2; a++) 	for (int b = 2; b <= (i + 2) / 2; b++) if (i + 2 == a * b) { 
					s = 1; 
					break; 
				}		
		}
		if (s == 1) { 
			cout << i << " "; 
			s = 0; 
		}
	}

	delete[] A;
	system("pause");
	return 0;
}