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
			return ; 
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
bool nt(int n) {
	if(n < 2) return 0 ; 
	for(int i = 2; i <= sqrt(n) ;i++) {
		if(n % i == 0) {
			return 0 ;
		}
	}
	return 1 ; 
}
void dfs(Node *root, int cnt, int &ans) {
	if(!root) return ;
	if(nt(root->data)) cnt++; 
	
	if(root->left == NULL && root->right == NULL) {
		ans = max(ans,cnt) ; 
		return ; 
	}
	dfs(root->left,cnt, ans) ; 
	dfs(root->right,cnt,ans) ; 
}
void solve() {
	int n ; 
	cin >> n ; 
	vector<string> a(n*3) ; 
	for(string &x : a) cin >> x ; 
	Node *root = new Node(stoi(a[0])) ;
	for(int i = 0 ; i < a.size() ; i += 3) {
		bool ok = false ; 
		Khoiphuc(root, a, i, ok) ;
	}
	int ans = -1 ; 
	dfs(root, 0, ans) ;
	cout << ans << "\n"; 
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
