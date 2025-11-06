#include<iostream>
using namespace std;
class calculator
{
    public:
    float add(float a,float b)
    {
        return a+b;
    }
    float sub(float a,float b)
    {
        return a-b;
    }
    float multi(float a,float b)
    {
        return a*b;
    }
    float division(float a,float b)
    {
        return a/b;
    }

};
int main()
{

    calculator calc;
    float num1, num2;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.sub(num1, num2) << endl;
    cout << "Multiplication: " << calc.multi(num1, num2) << endl;
    cout << "Division: " << calc.division(num1, num2) << endl;

    return 0;

}