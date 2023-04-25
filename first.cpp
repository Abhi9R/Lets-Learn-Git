#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

void print(int a[], int n) {
    for(int i=0;i<n;i++) {
        cout << a[i] << " ";
    } cout << endl;
}

int32_t main() {
    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    print(a, n);
    return 0;
}