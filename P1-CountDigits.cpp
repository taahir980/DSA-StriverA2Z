#include<bits/stdc++.h>
using namespace std;

int countDigits(int n) {

    int cnt = 0;
    while( n > 0 ) {
        cnt++;
        n = n/10;
    }
    return cnt;
}  

/* Alternate Method
int countDigits(int n) {

    return log10(n) + 1;
}  */

int main() {
    
    cout << endl;
    int n;
    cout << "Enter a no: " << endl;
    cin >> n;

    cout << "No. of digits in this num: " << countDigits(n) << endl;
    cout << endl;
    return 0;
}