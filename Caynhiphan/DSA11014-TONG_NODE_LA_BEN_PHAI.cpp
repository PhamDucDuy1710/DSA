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

void makeRoot(Node *root, int u, int v, char c) {
	if(c == 'L') root->left = new Node(v) ;
	else root->right = new Node(v) ;
}

void insertNode(Node *root, int u, int v, char c) {
    if(root == NULL) return;
    if(root->data == u) {
        makeRoot(root, u, v, c);
        return; 
    }
    insertNode(root->left, u, v, c);
    insertNode(root->right, u, v, c);
}
ll sumRight(Node* root) {
    if(!root) return 0;

    ll sum = 0;
    if(root -> right && root -> right -> left == NULL && root -> right -> right == NULL) {
        sum += root -> right -> data;
    }

    return sum + sumRight(root -> left) + sumRight(root -> right);
}
void solve() {
	int n ;
	cin >> n ;
	Node *root = NULL ; 
	for(int i = 0 ; i < n ; i++) {
		int u, v; char c;
		cin >> u >> v >> c ; 
		if(root == NULL) {
			root = new Node(u) ; 
			makeRoot(root, u, v, c) ; 
		}
		else {
			insertNode(root, u, v, c) ;
		}
	}
	cout << sumRight(root) << "\n" ; 
}

int main() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
