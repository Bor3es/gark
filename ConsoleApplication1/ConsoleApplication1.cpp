#include <iostream>
using namespace std;
int main() {
    unsigned int X,n;
          
    cin >> X;
    cin >> n;

    unsigned int bitValue = (X >> n) & 1;
     cout << bitValue << endl;
}
