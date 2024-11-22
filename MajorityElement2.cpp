
//Given an array nums of size n, return the majority element.

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums){
    int n = nums.size();
    
    //sorting
    sort(nums.begin(), nums.end());

    //frequency
    int freq = 1, ans = nums[0];
    for(int i = 1; i<n; i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }//                                 //  Time complexity = O(nlogn)
        if(freq>(n/2)){
                return ans;
            }
        
    }
    return -1;
}

int main(){
    vector<int> vec = {3, 2, 3, 2};
    int result = majorityElement(vec);
    result==-1 ? cout<<"No Majority element\n" : cout<<"Majority Element is "<<result<<endl;    
    return 0;
}