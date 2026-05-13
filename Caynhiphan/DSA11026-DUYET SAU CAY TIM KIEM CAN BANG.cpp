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
	Node *left ;
	Node *right ; 
	Node(int x) {
		data = x ; 
		left = right = NULL ; 
	}
};
Node *build(vector<int> a, int l, int r) {
	if(l > r) return NULL ; 
	
	int mid = (l + r) / 2 ; 
	Node *root = new Node(a[mid]) ; 
	
	root->left = build(a, l, mid - 1) ; 
	root->right = build(a, mid + 1, r) ; 
	return root ;
}
void PostOrder(Node *node) {
	if(!node) return ; 
	PostOrder(node->left) ; 
	PostOrder(node->right) ; 
	cout << node->data << " " ; 
}
void solve() {
	int n; 
	cin >> n ;
	vector<int> a(n) ; 
	for(int &i : a) {
		cin >> i ; 
	}
	sort(a.begin(), a.end()) ; 
	Node *root = build(a, 0, n-1) ; 
	PostOrder(root) ; 
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
