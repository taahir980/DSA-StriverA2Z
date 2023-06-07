#include<bits/stdc++.h>
using namespace std;

/* Brute force

void checkPrime(int n) {

    int cnt = 0;
    for(int i=1; i<=n; i++) {

        if(n%i == 0) {
            cnt++;
        }

        if(cnt > 2) {
            break;
        }
    }

    if(cnt == 2)
     cout << "Prime No." << endl;
    else
     cout << "Not a Prime No." << endl;
}  */


// Optimized

void checkPrime(int n) {

    int cnt = 0;
    for(int i=1; i*i<=n; i++) {

        if(n % i == 0) {
            cnt++;
            if(n/i != i)
             cnt++;
        }
    }

    if(cnt == 2)
     cout << "Prime No." << endl;
    else
     cout << "Not a Prime No." << endl;
}

int main() {

    cout << endl;
    int n;
    cout << "Enter a no: " << endl;
    cin >> n;

    checkPrime(n);
    cout << endl;
    return 0;

}