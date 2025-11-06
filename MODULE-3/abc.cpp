#include <iostream>
using namespace std;

// Global variable
int number = 100;

void showGlobal()
{
    // global variable
    cout << "showGlobal, global number = " << number << endl;
}

void showLocal()
{
    // Local variable
    int number = 50;
    cout << "showLocal, local number = " << number << endl;
}

int main()
{
    cout << "main, global number = " << number << endl;
    showGlobal(); // global variable
    showLocal();  // local variable
    cout << "Back in main, global number = " << number << endl;

    return 0;
}