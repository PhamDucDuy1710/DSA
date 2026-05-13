#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
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
	int data; 
	Node *left; 
	Node *right;
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

bool check(Node *node) {
	if(!node) return 1 ;
	queue<Node*> q ; 
	q.push(node) ;
	vector<int> res;
	int level = -1; 
	int s = 1 ;
	while(!q.empty()) {
		s = q.size() ; 
		for(int i = 0 ; i < s; i++) {
			Node *top = q.front(); q.pop(); 
			res.pb(top->data) ; 
			if(top->right) q.push(top->right) ; 
			if(top->left) q.push(top->left) ;
		}
		level++ ; 
	}
	return s == (1 << level) ; 
}
void solve() {
	int n ; 
	cin >> n ; 
	vector<string> a(n * 3) ; 
	for(string &x : a) cin >> x ; 
	Node *root = new Node(stoi(a[0])) ;
	for(int i = 0 ; i < a.size() ; i += 3) {
		Khoiphuc(root, a, i) ;
	}
	if(check(root)) cout << "Yes" ; 
	else cout << "No" ;
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
