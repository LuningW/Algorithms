class Solution {
public:
    unordered_map<string, priority_queue<string, vector<string>, std::greater<string>>> vec;

    vector<string> stk;

    void dfs(const string& curr) {
        while (vec.count(curr) && vec[curr].size() > 0) {
            string tmp = vec[curr].top();
            vec[curr].pop();
            dfs(move(tmp));
        }
        stk.emplace_back(curr);
    }

    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for (auto& it : tickets) {
            vec[it[0]].emplace(it[1]);
        }
        dfs("JFK");

        reverse(stk.begin(), stk.end());
        return stk;
    }
};

//从起点出发，进行深度优先搜索。

//每次沿着某条边从某个顶点移动到另外一个顶点的时候，都需要删除这条边。

//如果没有可移动的路径，则将所在节点加入到栈中，并返回。
