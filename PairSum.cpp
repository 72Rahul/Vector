#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans;
    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target){
            ans.push_back(i);
            ans.push_back(j);
                return ans;
            
        }
        cout<<"";
    }
        
}
cout<<"Pair sum is not found1";
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