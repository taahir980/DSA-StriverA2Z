#include<bits/stdc++.h>
using namespace std;

/* Approach-1  T.C = O(N)

void printAllDivisors(int n) {

    cout << "All divisors of " << n << " are: " << endl;
    for(int i=1; i<=n; i++) {

        if(n%i == 0)
         cout << i << " ";
    }
    cout << endl;
}  */

//Approach-2  T.C =

void printAllDivisors(int n) {

    cout << "All divisors of " << n << " are: " << endl;

    // instead of writing   sqrt(n) -> i * i <= n less time consuming
    for(int i=1; i*i<=n; i++) {

        if(n % i == 0) {
            cout << i << " ";
            if(n/i != i)
            cout << n/i << " ";
        }
    }
    cout << endl;
}

int main() {

    cout << endl;
    int n;
    cout << "Enter a no: " << endl;
    cin >> n;

    printAllDivisors(n);
    cout << endl;
    return 0;

}