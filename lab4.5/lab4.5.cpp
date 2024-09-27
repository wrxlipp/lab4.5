
#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>

using namespace std;

int main()
{
	double x, y, r;
	srand((unsigned)time(NULL));
	cout << "r = "; cin >> r;
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((x <= 0) && (y >= 0) && (x * x + y * y <= r * r) || (x >= 0) && (y >= -2 * x) && (y >= 2 * (x - r)) && (y <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << "------------------------------------" << endl << fixed;
	cout << "|    " << "x" << "    |    " << "y" << "    |    " << "Result" << "    |" << endl;
	cout << "------------------------------------" << endl;
	for (int i = 0; i < 10; i++)
	{
		x = (r + r) * rand() / RAND_MAX - r;
		y = (r + r) * rand() / RAND_MAX - r;
		if ((x <= 0) && (y >= 0) && (x * x + y * y <= r * r) || (x >= 0) && (y >= -2 * x) && (y >= 2 * (x - r)) && (y <= 0))
			cout << "|" << setw(9) << setprecision(2) << x << "| " << setw(8) << setprecision(2) << y << "|     " << setw(4) << "yes" << "     |" << endl;
		else
			cout << "|" << setw(9) << setprecision(2) << x << "| " << setw(8) << setprecision(2) << y << "|     " << setw(4) << "no" << "     |" << endl;
	}
	cout << "------------------------------------" << endl;
	system("pause");
	return 0;
}


