#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    int st = 0, end = n-1;
    while(st<end){
        int pairsum = nums[st] + nums[end];
       if(pairsum<target){
        st++;
       }
        else if(pairsum>target){
            end--;
        }
        else {
            ans.push_back(st);
            ans.push_back(end);
                return ans;
    
        }
    }
        return {};
}

int main(){
    vector<int> vec = {2, 7, 11, 15};
    int key;
    cout<<"Enter the number : ";
    cin>>key;
    vector<int> result = pairsum(vec, key);
    cout<<result[0]<<", "<<result[1];
    
    
    return 0;
}