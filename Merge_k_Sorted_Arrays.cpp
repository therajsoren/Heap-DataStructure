#include <bits/stdc++.h>
using namespace std;

//Function to merge k sorted arrays.
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        int n = arr.size();
        int m = arr[0].size();
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> ans;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                pq.push(arr[i][j]);
                // if(pq.size() > K){
                //     ans.push_back(pq.top());
                //     pq.pop();
                // }
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};