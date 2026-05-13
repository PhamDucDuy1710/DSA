#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--) {
        int N, M;
        cin >> N >> M;
        
        vector<int> color(N+1);
        for(int i = 1; i <= N; i++) {
            cin >> color[i];
        }
        
        vector<vector<pair<int,int>>> adj(N+1); // adj[u] = {(v, initial_color)}
        for(int i = 0; i < M; i++) {
            int u, v, c;
            cin >> u >> v >> c;
            adj[u].push_back({v, c});
        }
    
        set<tuple<int,int,int>> visited;
        queue<tuple<int,int,int>> q;
        
        q.push({1, 2, 0});
        visited.insert({1, 2, 0});
        
        int answer = -1;
        
        while(!q.empty()) {
            auto [i, j, t] = q.front();
            q.pop();
            
            if(i == j) {
                answer = t;
                break;
            }
            
            int need_color_for_robot1 = color[j];
            int need_color_for_robot2 = color[i];
            for(auto [next_i, init_color_i] : adj[i]) {
                int color_at_t_i = ((init_color_i - 1 + t) % 3) + 1;
                if(color_at_t_i != need_color_for_robot1) continue;
                
                // Find edges from j with need_color_for_robot2
                for(auto [next_j, init_color_j] : adj[j]) {
                    int color_at_t_j = ((init_color_j - 1 + t) % 3) + 1;
                    if(color_at_t_j != need_color_for_robot2) continue;
                    
                    // Both can move
                    int new_t = t + 1;
                    int new_t_mod = new_t % 3;
                    auto state_key = make_tuple(next_i, next_j, new_t_mod);
                    
                    if(visited.find(state_key) == visited.end()) {
                        visited.insert(state_key);
                        q.push({next_i, next_j, new_t});
                    }
                }
            }
        }
        
        cout << answer << "\n";
    }
    
    return 0;
}
