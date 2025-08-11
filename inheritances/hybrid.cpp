#include<bits/stdc++.h>
using namespace std;


class A{
    public:
        void shout(){
            cout<<"shout"<<endl;
        }
};
class B{
    public:
    void speak(){
        cout<<"speak"<<endl;
    }
};
class C :public A, public B{};
class D: public B{} ;

int main(){
    C c;
    D d;
    c.shout();
    c.speak();
    d.speak();
}