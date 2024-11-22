#include<iostream>

#include<vector>
using namespace std;

    // pass by referene
int reverse(vector<int> &vec, int N){
    int mid = N/2;

    for(int i = 0; i<=mid; i++){
        swap(vec[i], vec[N-i-1]);
    }
    
}

int main(){
    vector<int> vec = {1, 2, 4, 8, 16, 32, 64, 128};
    cout<<" Before reverse"<<endl;
    for(int i : vec){
        cout<<i<<"\t";
    }
    cout<<endl;
    int N = vec.size();
// call the function
    reverse(vec, N);
    cout<<" After reverse"<<endl;
    for(int i : vec){
        cout<<i<<"\t";
    }

}