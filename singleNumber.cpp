// WAP to find the single one. Given a non empty array of integer nums. Every elements appears twice except for one.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec= {1, 4, 2, 1, 2, 4, 8};
    int ans = 0; 
    for(int i : vec){
        ans^=i;
    }
    cout<<ans<<endl;
    return 0;

}