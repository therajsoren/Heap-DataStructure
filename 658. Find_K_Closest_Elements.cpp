#include <bits/stdc++.h>
using namespace std;

// [leetcode]658. Find K Closest Elements

// Given a sorted array, two integers  k and  x, find the  k closest elements to  x in the array. The result should also be sorted in ascending order. If there is a tie, the smaller elements are always preferred.

//  Binary search
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int lo = 0, hi = arr.size() - k;
        while(lo < hi){
            int mid = lo + (hi - lo) / 2;
            if(x - arr[mid] > arr[mid + k] - x){
                lo = mid + 1;
            } else{
                hi = mid;
            }
        }
        for(int i = lo; i < lo + k; i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};

//  Two pointers
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       int l = 0, r = arr.size() - 1;
       while(r - l + 1 > k){
        if(arr[r] - x < x - arr[l]){
            l++;
        } else{
            r--;
        }
       }
       return vector<int>(arr.begin() + l,arr.begin() + r + 1);
    }
};