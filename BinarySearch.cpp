 // Implementation of binary search in vectors

#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>vec, int target){
    int s = 0, end = vec.size() - 1;
    while (s<=end){
        int mid = (s+end)/2;
        if(vec[mid]==target){
            return mid;
        }
        else if(vec[mid]<target){
            s = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(20);
    vec.push_back(25);
    vec.push_back(30);
    int key;
    cout<<"Enter the target number : ";
    cin>>key;
    int result = binarySearch(vec, key);
    result==-1 ? cout<<"Element is not found" : cout<<"Element is found at index "<<result<<endl;
    return 0;
}