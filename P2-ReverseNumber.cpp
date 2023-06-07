#include<iostream>
using namespace std;

int reverseNum(int n) {

    int revN = 0;
    while( n > 0 ) {
        int lastDigit = n % 10;
        revN = (revN * 10) + lastDigit;
        n = n/10;
    }
    return revN;
}

int main() {
    
    cout << endl;
    int n;
    cout << "Enter a no: " << endl;
    cin >> n;

    cout << "Reverse of Number: " << reverseNum(n) << endl;
    cout << endl;
    return 0;
}