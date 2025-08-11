#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void speak(){
        cout<<"shouting"<<endl;
    }

};

class B {
    public:
    void shout(){
        cout<<"speaking"<<endl;
    }
};
class C :public B,public A{

};

int main(){
    C c;
    c.speak();
    c.shout();
}