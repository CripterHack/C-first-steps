#include <iostream>

using namespace std;

int main()
{
    int Variable = 123;
    int VarB = 432;
    int suma = Variable + VarB;
    cout << "This\n" << "is\n" << "fucking awesome!\n\n";
    cout << "Yeah! " << "is it, " << "awesome\n\n";
    cout << "Variable: " << Variable << ". VarB: " << VarB << "\n\n";
    cout << "Total Suma: " << suma << ".\n";
    int in;
    cout << "Please enter a number\n";
    cin >> in;
    cout << "You digit: " << in << "\n\n";
    cout << "Now, this is a simple calculator for fun!\n";
    int a;
    int b;
    cout << "Enter first number\n";
    cin >> a;
    cout << a << " + Second number\n";
    cout << "Enter second number\n";
    cin >> b;
    int calc = a + b;
    cout << a << " + " << b << " = " << calc << ".\n";
    return 0;
}
