#include <iostream>
#include "IntCell.h"
using namespace std;

int main(){
    IntCell m;
    m.write(5);
    cout<<m.read()<<endl;
    IntCell *n;
    n=new IntCell{0};
    cout<<"Cell contents"<<n->read()<<'\t'<<n<<endl;
    return 0;
}