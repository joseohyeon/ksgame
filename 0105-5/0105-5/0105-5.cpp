#include <iostream>
using namespace std;
int main()
{
	int a;

	cout << "정수입력 : ";
	cin >> a;

	if (a > 100)
		cout << a << "은 100보다 크다" << endl;
	else
		cout << a << "은 100보다 작거나 같다" << endl;

	cout << "**************************" << endl;
	
	return 0;
}
