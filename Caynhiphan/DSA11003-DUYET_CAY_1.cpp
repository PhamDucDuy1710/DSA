#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; i++)
#define FD(i, a, b) for(int i = a; i > b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'
struct Node {
	int data ;
	Node *L ; 
	Node *R ; 
	Node(int x) {
		data = x ; 
		L = R = NULL ; 
	}	
} ;
void Khoiphuc(Node *&c, vector<int> &a, vector<int> &b) {
	if(a.empty() || b.empty()) return ; 
	
	c = new Node(b[0]) ; 
	int i = 0 ; 
	while(i < a.size() && a[i] != b[0]) i++ ; 
	
	vector<int> a1(a.begin(), a.begin() + i) ;
	vector<int> b1(b.begin() + 1, b.begin() + i + 1) ; 
	Khoiphuc(c->L, a1, b1) ; 
	
	vector<int> a2(a.begin() + i + 1, a.end()) ; 
	vector<int> b2(b.begin() + 1 + i, b.end()) ; 
	Khoiphuc(c->R, a2, b2) ; 
}

void Postorder(Node *node) {
	if(node == NULL) return ; 
	Postorder(node->L) ; 
	Postorder(node->R) ; 
	cout << node->data << " " ; 
}
void solve() {
	int n ;
	cin >> n ; 
	vector<int> a(n), b(n) ; 
	for(int &i : a) cin >> i ; 
	for(int &i : b) cin >> i ; 
	Node *root = NULL ; 
	Khoiphuc(root, a, b) ; 
	Postorder(root) ; 
}

int main() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        solve();
        cout << "\n" ; 
    }
    return 0;
}
