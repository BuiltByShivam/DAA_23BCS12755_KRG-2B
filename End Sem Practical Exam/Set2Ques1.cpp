// Next Greater element :-
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n, -1); 

        for(int i=0 ; i<2*n ; i++){
            int idx = i%n;
            while(!st.empty() && arr[idx]>arr[st.top()]){
                ans[st.top()] = arr[idx];
                st.pop();
            }
            st.push(idx);
        }

        return ans;
    }
};
