#include <iostream>
using namespace std;
void add(float num1, float num2);
void sub(float num1, float num2);
void mul(float num1, float num2);
void divide(float num1, float num2);
int main()
{
	float num1, num2;
	char op;
	char cls;
	cout << "Enter any key to continue";
	cin >> cls;
	while (cls != 'C')
	{
		cout << "Enter 1st number: ";
		cin >> num1;
		cout << "Enter 2nd number: ";
		cin >> num2;
		cout << "Enter operator(+,-,*,/): ";
		cin >> op;
		if (op == '+')
		{
			add(num1, num2);
		}
		if (op == '-')
		{
			sub(num1, num2);
		}
		if (op == '*')
		{
			mul(num1, num2);
		}
		if (op == '/')
		{
			divide(num1, num2);	
		}
		cout << "Enter any key to continue or type 'C' to exit: ";
		cin >> cls;
	}
	return 0;
}
void add(float num1, float num2)
{
	cout << "Sum is: " << num1 + num2 << std::endl;
}
void sub(float num1, float num2)
{
	cout << "Diffrence is: " << num1 - num2 << std::endl;
}
void mul(float num1, float num2)
{
	cout << "Product is: " << num1 * num2 << std::endl;
}
void divide(float num1, float num2)
{
	cout << "Divission is: " << num1 / num2 << std::endl;
}