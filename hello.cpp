#include <iostream>

using namespace std;
class IntCell{
    public:
    IntCell(){
        storedValue=5;
    }
    int read(){
        return storedValue;
    }
    void write(int x){
        storedValue=x;
    }
    private:
        int storedValue;
};

class IntCell_new{
    public:
        explicit IntCell_new(int initialValue=0)
        : storedValue{initialValue}{}
    public:
    int read() const {
        return storedValue;
    }
    void write(int x){
        storedValue=x;
    }
    private:
        int storedValue;
};
int main(){
    class IntCell a=IntCell();
    cout<<a.read()<<endl;
    a.write(int (8.0));
    cout<<a.read()<<endl;
    IntCell_new b (10);
    cout<<b.read()<<endl;
    b.write(9);
    cout<<b.read()<<endl;
}