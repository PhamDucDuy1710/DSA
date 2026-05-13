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

void Khoiphuc(Node *&root, vector<string> &a, int i) {
	if(!root) return ; 
	if(root->data == stoi(a[i])) {
		if(a[i+2] == "L") {
			root->left = new Node(stoi(a[i+1])) ; 
		}
		else if(a[i+2] == "R") {
			root->right = new Node(stoi(a[i+1])) ;
		}
		return ; 
	}
	if(root->left) Khoiphuc(root->left, a, i) ;
	if(root->right) Khoiphuc(root->right, a, i) ;
}

bool check(Node *a1, Node *a2) {
	if(!a1 && !a2) return 1 ;
	if(a1->data != a2->data) return 0 ;
	return check(a1->right, a2->right) && check(a1->left, a2->left) ;
}

void solve() {
	int n ;
	cin >> n ; 
	vector<string> a(n * 3) ; 
	for(string &x : a) {
		cin >> x ; 
	}
	int m ; 
	cin >> m ; 
	vector<string> b(n * 3) ; 
	for(string &x : b) {
		cin >> x ; 
	}
	if(n != m) {
		cout << 0 ; 
		return ;  
	}
	Node *root1 = new Node(stoi(a[0])) ; 
	for(int i = 0 ; i < a.size() ; i += 3) {
		Khoiphuc(root1, a, i) ; 
	}
	
	Node *root2 = new Node(stoi(b[0])) ; 
	for(int i = 0 ; i < b.size() ;i += 3) {
		Khoiphuc(root2, b ,i) ; 
	}
	
	if(check(root1, root2)) {
		cout << 1 ; 
	}
	else {
		cout << 0 ; 
	}
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
