#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void speak(){
        cout<<"shouting"<<endl;
    }

};

class B :public A{
};

int main(){
    B b;
    b.speak();
}