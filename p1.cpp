#include "pch.h"
#include <iostream>

using namespace std;

int main()
{

	for (int y = 1820; y <= 38144; y+=2018) if ((78487894 - 2019 * y) % 2018 == 0) cout << '(' << (78487894 - 2019 * y)/2018 << ", " << y << ") ";
	system("pause");
	return 0;
}