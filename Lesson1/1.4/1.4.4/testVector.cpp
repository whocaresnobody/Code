#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> squares(100);
    for(int i=0;i<squares.size();++i){
        squares[i]=i*i;
    }
    // for(int i=0;i<squares.size();++i){
    // for(int i:squares){
    for(auto i:squares){
        cout<<i<<" "<<squares[i]<<endl;
    }
    return 0;
}