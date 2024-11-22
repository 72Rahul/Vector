
//Given an array nums of size n, return the majority element.
/*The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.*/

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums){
    int n = nums.size();
    

    //frequency                                 Time Complexity O(n)
    int freq = 0, ans = 0;
    for(int i = 0; i<n; i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
            
        }                      
        
    }
    return ans;
    // int count = 0;
    // for(int val : nums){
    //     if(val==ans){
    //         count++;
    //     }
    // }
    // if(count>n/2){
    //     return ans;
    // }
    // return -1;
}

int main(){
    vector<int> vec = {1, 2, 3, 5, 5, 5, 5};
    int result = majorityElement(vec);
    result==-1 ? cout<<"No Majority element\n" : cout<<"Majority Element is "<<result<<endl;    
    return 0;
}