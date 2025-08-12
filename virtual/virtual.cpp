#include<bits/stdc++.h>
using namespace std;
//run time polymorphism
class A{
    public:
    virtual void speak()=0; // pure virtual function
    void shout(){
        cout<<"shout A"<<endl;
    }
};

class B : public A{
    public:
    void speak ()override{
        cout<<"speak"<<endl;   
    }
    void shout(){
        cout<<"shout b"<<endl;
    }
};

int main(){
    A * a;
    B b;
    a= &b;
    a->speak(); //late binding  - run time  
    a->shout(); //early binding - compile time 

}