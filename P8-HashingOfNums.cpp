#include<bits/stdc++.h>
using namespace std;
int main() {

    cout << endl;
    int n = 5;
    int arr[5];
    cout << "Enter elements: " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int frequency[10] = {0};
    for(int i=0; i<n; i++) {
        frequency[arr[i]]++;
    }

    cout << "No. of query: " << endl;
    int query;
    cin >> query;
    cout << "Enter query: " << endl;
    while(query--) {
        int no;
        cin >> no;
        cout << "appeared -> " << frequency[no] << endl;
    }
    cout << endl;
    return 0;
}