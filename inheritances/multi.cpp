#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void speak(){
        cout<<"shouting"<<endl;
    }

};

class B :public A{
    public:
    void shout(){
        cout<<"speaking"<<endl;
    }
};
class C :public B{

};

int main(){
    B b;
    C c;
    c.shout();
}