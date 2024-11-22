//Given an array nums of size n, return the majority element.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 2, 2, 2, 1, 1};
    for(int i : vec){
        int frequency = 0;
        for(int j : vec){                   // Time Complexity O(n^2)
            if(i == j){
                frequency++;
            }
        }
        if(frequency>(vec.size()/2)){
            cout<<"Majority Element is "<<i;
            return {};
        }
    }
    
    return 0;
}