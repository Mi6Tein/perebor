#include "pch.h"
#include <iostream> 
#include <string>  

using namespace std;

int main() {
	string str;
	int n, s = 1;
	cin >> n;
	if (n % 2 == 0) {
		s = pow(10, n / 2 - 1);
		str = to_string(s);
		cout << s;
		for (int i = str.length() - 1; i >= 0; i--) cout << str[i];
		cout << endl;
		while (s < pow(10, n / 2) - 1) {
			s++;
			str = to_string(s);
			cout << s;
			for (int i = str.length() - 1; i >= 0; i--)	cout << str[i];
			cout << endl;
		}
	}
	else {
		s = pow(10, (n / 2));
		str = to_string(s);
		cout << s;
		for (int i = str.length() - 2; i >= 0; i--)	cout << str[i];
		cout << endl;
		while (s < pow(10, (n / 2) + 1) - 1) {
			s++;
			str = to_string(s);
			cout << s;
			for (int i = str.length() - 2; i >= 0; i--) cout << str[i];
			cout << endl;
		}
	}
	system("pause");
	return 0;
}