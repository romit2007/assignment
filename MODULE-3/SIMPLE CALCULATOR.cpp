#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int multi(int a,int b)
{
    return a*b;
}
int division(int a,int b)
{
    
    return a/b;
}

int main()
{
    int num1, num2, choice, result;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "\nPress 1 for Add"
         << "\nPress 2 for Sub"
         << "\nPress 3 for Multi"
         << "\nPress 4 for Division";
    cout << "\nEnter choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            result = add(num1, num2);
            cout << "Addition = " << result << endl;
            break;

        case 2:
            result = sub(num1, num2);
            cout << "Subtraction = " << result << endl;
            break;

        case 3:
            result = multi(num1, num2);
            cout << "Multiplication = " << result << endl;
            break;

        case 4:
            result = division(num1, num2);
            cout << "Division = " << result << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
