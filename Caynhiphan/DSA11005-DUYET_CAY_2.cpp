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
void Khoiphuc(Node *&root, vector<int> &a, vector<int> &b) {
	root = new Node(b[0]) ;
	queue<pair<Node*,vector<int>>> q ;
	q.push({root,a}) ;
	int cnt = 1;
	while(!q.empty()) {
		auto [node, v] = q.front(); q.pop(); 
		int i = 0 ; 
		while(i < v.size() && v[i] != node->data) i++ ;
		
		vector<int> a1(v.begin(), v.begin() + i) ;
		vector<int> a2(v.begin() + i + 1, v.end()) ; 
		
		if(!a1.empty() && cnt < b.size()) {
			node->left = new Node(b[cnt++]) ; 
			q.push({node->left, a1}) ;
		}
		if(!a2.empty() && cnt < b.size()) {
			node->right = new Node(b[cnt++]) ;
			q.push({node->right, a2}) ;
		}
	}
}
void Postorder(Node *node) {
	if(node == NULL) return ; 
	Postorder(node->left) ;
	Postorder(node->right) ;
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
