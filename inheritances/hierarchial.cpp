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
    // void shout(){
    //     cout<<"speaking"<<endl;
    // }
};
class C :public A{

};

int main(){
    C c;
    B b;
    c.speak();
    b.speak();
}