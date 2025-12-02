#include <iostream>
using namespace std;

int main() {

    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2) {          // First compare n1 and n2
        if (n1 >= n3) {      // Now compare n1 with n3
            cout << "Largest number: " << n1;
        } 
        else {
            cout << "Largest number: " << n3;
        }
    } 
    else {                   // n2 > n1
        if (n2 >= n3) {
            cout << "Largest number: " << n2;
        } 
        else {
            cout << "Largest number: " << n3;
        }
    }

    return 0;
}
