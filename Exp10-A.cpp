//Varija K
//24070123165
#include <iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 2;
    swap(a, b);
    cout << "Value of a is: " << a << endl;
    cout << "Value of b is: " << b << endl;
    return 0;
}
