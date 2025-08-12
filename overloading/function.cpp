
#include<bits/stdc++.h>
using namespace std;
//compile time polymorphism is a static polymorphism 
//runtime time polymorphism is a dynamic polymorphism
 
class A{
    private:
    int c;
    int d;
    public:
    int a;
    int b;
    A(int c, int d):c(c),d(d){}; 

    int operator + (const A &obj){ //member function overloading 
        int val1 = this->c + obj.c;
        int val2 = this->d + obj.d;
        return val2-val1;
    }
    friend int operator - (const A &obj1 , const A &obj2); //friend function for non-member ovaerlading
    // and to get private members for a non member function ;
};
int operator -(const A &obj1 , const A &obj2){ // non member function overloading 
    return (obj1.c + obj2.d) - (obj1.d + obj2.c);
}

int main(){
    // A e,f;
    // e.a=24;
    // f.a=50;
    // int val=e+f;
    // cout<<val<<endl;
    A e(5,4),f(9,10);
    int res =e+f; // subs of private members (5+9)-(4+10) = 0
    int val = e-f ;// subs of [private members (5+10)-(4+9) =2
    cout<<res<<endl;
    cout<<val<<endl;

}