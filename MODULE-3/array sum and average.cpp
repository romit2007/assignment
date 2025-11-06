#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = (float)sum / n;

    cout << "\nSum of elements: " << sum << endl;
    cout << "Average of elements: " << average << endl;
    

    return 0;
}
