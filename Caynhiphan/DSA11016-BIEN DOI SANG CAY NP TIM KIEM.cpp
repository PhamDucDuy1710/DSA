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
void Khoiphuc(Node *&root, vector<string> &a, int i, bool ok) {
	if(!root || ok) return ; 
	if(root->data == stoi(a[i])) {
		if(a[i+2] == "L" && root->left == NULL) {
			root->left = new Node(stoi(a[i+1])) ;
			ok = true ;
			return;
		}
		else if(a[i+2] == "R" && root->right == NULL) {
			root->right = new Node(stoi(a[i+1])) ;
			ok = true ; 
			return ;
		}
	}
	if(root->left) Khoiphuc(root->left, a, i, ok) ;
	if(root->right) Khoiphuc(root->right, a, i, ok) ;
}
void inorder(Node *root, vector<int> &nodes) {
	if(!root) return ; 
	inorder(root->left, nodes) ; 
	
	nodes.pb(root->data) ;
	inorder(root->right,  nodes) ;
}
void buildBST(Node *root, vector<int> &nodes, int &i) {
	if(!root) return ; 
	buildBST(root->left, nodes, i) ;
	root->data = nodes[i++] ;
	buildBST(root->right, nodes, i) ;
}
Node *BST(Node *root) {
	vector<int> nodes ; 
	inorder(root, nodes) ;
	sort(nodes.begin(), nodes.end()) ;
	int i = 0 ;
	buildBST(root, nodes, i) ; 
	return root; 
}
void printBST(Node *root) {
	if(!root) return ;
	printBST(root->left) ; 
	cout << root->data << " " ; 
	printBST(root->right) ; 
}
void solve() {
	int n; 
	cin >> n ; 
	vector<string> a(n * 3) ; 
	for(string &x : a) cin >> x ; 
	Node *root = new Node(stoi(a[0])) ; 
	for(int i = 0; i < a.size() ; i += 3) {
		bool ok = false ;
		Khoiphuc(root, a, i, ok) ; 
	}
	Node *ans = BST(root) ;
	printBST(ans) ;
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
