#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;
	
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	
	// Початок оформлення
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	// Кінець оформлення

	x = xp;
	while (x <= xk) // Цикл
	{
		A = 2 * abs(5 - x);
		if (x <= -1)
			B = exp(abs(2 + x));
		else
			if (-1 < x && x < 1)
				B = pow(sin(1/abs(2 + x)),2);
			else
				B = (pow((cos(x)), 2))/(1 + abs(sin(x)));
		
		y = A + B;

		// Ще початок оформлення
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(2) << y
			<< " |" << endl;
		// Ще кінець оформлення
		
		x += dx;
	}

	// Ще початок оформлення
	cout << "---------------------------" << endl;
	// Ще кінець оформлення

	return 0;
}