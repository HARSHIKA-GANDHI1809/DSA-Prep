class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if (source == destination) return true;
        vector<vector<int>>graph(n);
        for(const auto& edge :edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        vector<bool>visited(n,false);
        queue<int>q;
        q.push(source);
        visited[source] = true;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            if (curr == destination) return true;

            for (int neighbor : graph[curr]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        return false;


    }
};
