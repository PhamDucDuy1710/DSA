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
	Node *right; 
	Node(int x) {
		data = x ;
		left = right = NULL ;
	}	
};
Node *insertBST(Node *root, int data) {
	if(!root) return new Node(data) ; 
	
	if(data < root->data) {
		root->left = insertBST(root->left, data) ; 
	}
	else {
		root->right = insertBST(root->right, data) ;
	}
	return root;
}
void PostOrder(Node *root) {
	if(!root) return ; 
	PostOrder(root->left) ; 
	PostOrder(root->right) ; 
	cout << root->data << " " ;
}
void solve() {
	int n; 
	cin >> n ; 
	vector<int> a(n) ;
	Node *root = NULL ;  
	for(int &x : a) {
		cin >> x ;
		root = insertBST(root, x) ;
	}
	PostOrder(root) ; 
}

int main() {
    faster();
    int t, i = 1;
    cin >> t;
    while(t--) {
    	cout << "Test #" << i << ": " ; 
        solve();
        i++ ;
        cout << "\n" ; 
    }
    return 0;
}
