#include<iostream>
using namespace std;

/* Brute force

int gcd(int n1, int n2) {

    int minNo = min(n1, n2);
    for(int i=minNo; i>0; i--) {

        if(n1%i == 0 && n2%i == 0) {
            return i;
        }
    }

}  */

// Euclidean algorithim

int gcd(int a, int b) {

    while(a>0 && b>0) {

        if(a>b)
        a = a % b;
        else
        b = b % a;
    }
    
    if(a == 0) return b;
    return a;
}


int main() {

    cout << endl;
    int n1, n2;
    cout << "Enter n1 & n2: " << endl;
    cin >> n1 >> n2;

    cout << "Gcd or Hcf of two no. = " << gcd(n1, n2) << endl << endl;
    return 0;
}