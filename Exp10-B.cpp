// Varija K
// 24070123165
#include <iostream>
using namespace std;

void increment(int &S)
{
    S=S+5000;
    cout<<"Salary incremented: "<<S<<endl;
}

int main() {
    int sal=27000;
  
    cout << "Value of salary is: " << sal << endl;
      increment(sal);
    return 0;
}

