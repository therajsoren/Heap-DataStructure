#include<bits/stdc++.h>

using namespace std;

int main(){
  
    vector<int> v = {34,0,1,78,13};
    int k = 3;
    int n = v.size();
    priority_queue<int>pq;
    for(int i = 0;i < n; i++){
        pq.push(v[i]);
        if(pq.size() > k){
            pq.pop();
        }
     }
     cout << pq.top() << endl;
}

// Time Complexity: O(nlogk)

// Space Complexity: O(k)

//  related problem: https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=kth-smallest-element

//User function template for C++

// class Solution{
//     public:
//     // arr : given array
//     // l : starting index of the array i.e 0
//     // r : ending index of the array i.e size-1
//     // k : find kth smallest element and return using this function

//     int kthSmallest(int arr[], int l, int r, int k) {
//         priority_queue<int> pq;
//         for(int i = l; i <= r; i++){
//             pq.push(arr[i]);
//             if(pq.size() > k) pq.pop();
//         }
//         return pq.top();
//     }
// };