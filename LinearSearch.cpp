
// Implementation of linear search using vector

#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> vec, int target){
    for(int i = 0; i<vec.size(); i++){  //for(int i : vec){ not return the index}
        if(vec[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 8, 9, 11, 12};
    int key;
    cout<<"Enter the target number : "<<endl;
    cin>>key;
    int result = linearSearch(vec, key);
    result==-1 ? cout<<"Target number is not found\n" : cout<<"Target number is found  "<<result<<endl;
    return 0;
}
