#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x;
	double y;
	double R;

	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "R=";
	cin >> R;

	if (x * x + y * y <= R || y >= (2 * x / R) && y >= R - 4 * x && y <= -x)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	system("pause");
	cin.get();
	return 0;
}