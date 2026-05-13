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
void Khoiphuc(Node *&root, vector<int> &a) {
	if(a.empty()) return ; 
	
	int i = 1 ; 
 	root = new Node(a[0]) ; 
 	
 	while(i < a.size() && a[i] < a[0]) {
 		i++ ; 	
	}
	vector<int> a1(a.begin() + 1, a.begin() + i) ; 
	Khoiphuc(root->left, a1) ; 
	
	vector<int> a2(a.begin() + i, a.end()) ;
	Khoiphuc(root->right, a2) ;
}
void PreOrder(Node *node) {
	if(node == NULL) return ; 
	PreOrder(node->left) ; 
	PreOrder(node->right) ;
	cout << node->data << " " ; 
}
void solve() {
	int n ; 
	cin >> n ; 
	vector<int> a(n) ; 
	for(int &i : a) {
		cin >> i ; 
	}
	Node *root = NULL ; 
	Khoiphuc(root, a) ; 
	PreOrder(root) ;
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
