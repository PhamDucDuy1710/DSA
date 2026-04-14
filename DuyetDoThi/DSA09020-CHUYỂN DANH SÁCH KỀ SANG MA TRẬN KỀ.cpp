#include<bits/stdc++.h>
using namespace std;
int a[1001][1001] ; 
int main() {
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++) {
        string s;
        getline(cin, s);

        stringstream ss(s);
        int v;
        while(ss >> v) {
            a[i][v] = 1;
            a[v][i] = 1; 
        }
    }

    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}