#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "enter the size of the array: " << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "enter the given element" << endl;
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "sum: " << sum << endl;
    int avg = sum / n;
    cout << "average: " << avg << endl;
    return 0;
}
/*
Output :
enter the size of the array:
5
enter the given element
10
enter the given element
20
enter the given element
30
enter the given element
40
enter the given element
50
sum: 150
average: 30
*/
