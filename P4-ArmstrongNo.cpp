#include<iostream>
using namespace std;

void armstrongNo(int n) {

    int sum = 0;
    int original = n;
    while( n > 0 ) {
        int lastD = n % 10;
        sum = sum + (lastD * lastD * lastD);
        n = n/10;
    }

    if(sum == original)
      cout << "Armstrong" << endl;
    else
      cout << "Not a Armstrong" << endl;
}

int main() {

  cout << endl;
  int n;
  cout << "Enter a no: " << endl;
  cin >> n;
  
  armstrongNo(n);
  cout << endl;
  return 0;

}