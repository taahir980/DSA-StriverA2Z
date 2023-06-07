#include<iostream>
using namespace std;

void reverseNum(int n) {

  int revN = 0;
  int original = n;
  while( n > 0 ) {
      int lastDigit = n % 10;
      revN = (revN * 10) + lastDigit;
      n = n/10;
  }

  if(revN == original)
    cout << "Pallindrome" << endl;
  else
    cout << "Not a pallindrome" << endl;
}

int main() {

  cout << endl;
  int n;
  cout << "Enter a no: " << endl;
  cin >> n;
  
  reverseNum(n);
  cout << endl;
  return 0;

}