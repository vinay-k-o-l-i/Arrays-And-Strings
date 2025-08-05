#include <iostream>
using namespace std;
int main() {
    int marks[5] = {13, 54, 878, 9, 0};  
    int i, input;
    cout << "Enter the input: ";
    cin >> input;

    bool found = false;
    for (i = 0; i < 5; i++) {
        if (marks[i] == input) {
            cout << "Element found at location: " << i <<endl;
            found = true; 
            break;       
        }
    }
    if (!found) {
       cout << "Element not found" << endl;
    }
    return 0;
}
/*
Output :
Enter the input: 13
Element found at location: 0
*/
