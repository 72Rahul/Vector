
#include<iostream>
// STL (Standard Templet Library) use as tool for vector //
#include<vector>
using namespace std;

int main(){
    //
    // Declare the vector
    // vector <int> vec;
    // vec = {12, 24, 36, 48, 60};
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;
    // cout<<vec[3]<<endl;
    // cout<<vec[4]<<endl;
    // cout<<"---------------"<<endl;

    // // vector<data_type> vector_name(size, value)
    // vector<int> vector(5, 3);
    // cout<<"---------------"<<endl;
    // cout<<vector[0]<<endl;
    // cout<<vector[1]<<endl;
    // cout<<vector[2]<<endl;
    // cout<<vector[3]<<endl;
    // cout<<vector[4]<<endl;

    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    
    // for each loop
    /* int i store the value at index not index */
    for(char val : vec){
        cout<<val<<endl;
        int j = (int)val;
        cout<<j<<endl;
    }
    
    return 0;
}