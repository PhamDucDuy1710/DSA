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
void Khoiphuc(Node *&root, vector<string> &a, int i, bool &found) {
    if(!root || found) return ;
    if(root->data == stoi(a[i])) {
        if(a[i+2] == "L" && root->left == NULL) {
            root->left = new Node(stoi(a[i+1]));
            found = true;
            return;
        }
        else if(a[i+2] == "R" && root->right == NULL) {
            root->right = new Node(stoi(a[i+1]));
            found = true;
            return;
        }
    }
    Khoiphuc(root->left, a, i, found);
    Khoiphuc(root->right, a, i, found);
}
void SpiralOrder(Node *node) {
	if(!node) return ; 
	stack<Node*> s1, s2 ; 
	s1.push(node) ; 
	while(!s1.empty() || !s2.empty()) {
		while(!s1.empty()) {
			Node *top = s1.top(); s1.pop(); 
			cout << top->data << " " ; 
			if(top->right != NULL) {
				s2.push(top->right) ;
			}
			if(top->left != NULL) {
				s2.push(top->left) ;
 			}
		}
		while(!s2.empty()) {
			Node *top = s2.top(); s2.pop(); 
			cout << top->data << " " ; 
			if(top->left != NULL) {
				s1.push(top->left) ;
			}
			if(top->right != NULL) {
				s1.push(top->right) ;
 			}
		}
	}	
}
void solve() {
	int n ; 
	cin >> n ; 
	vector<string> a(n * 3) ; 
	for(string &x : a) {
		cin >> x ;
	}
	Node *root = new Node(stoi(a[0])) ; 
	for(int i = 0 ; i < a.size() ; i += 3) {
    	bool found = false;
    	Khoiphuc(root, a, i, found);
	}
	SpiralOrder(root) ; 
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
