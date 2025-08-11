#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void shout(){
        cout<<"shouting A"<<endl;
    }

};

class B :public A{
    public:
    void shout(){
        cout<<"shouting B"<<endl;
    }
};
int main(){
    B b;
    b.A::shout();
    b.B::shout();
}