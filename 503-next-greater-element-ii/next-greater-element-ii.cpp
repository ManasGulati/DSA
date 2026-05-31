class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& n) {

        int sz = n.size();
        vector<int> ans(sz, -1);
        stack<int> s;

        for (int i = 2 * sz - 1; i >= 0; i--) {

            while (!s.empty() && s.top() <= n[i % sz])
                s.pop();

            if (i < sz) {
                if (!s.empty())
                    ans[i] = s.top();
            }
            s.push(n[i % sz]);
        }

        return ans;
    }
};