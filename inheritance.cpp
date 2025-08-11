#include<bits/stdc++.h>
using namespace std;


//private data member of any class cannot be inherited 
// <-------------------------------------------------->
// super class           ||       child class   || access in child
// public                ||       public        || public
// public                ||       private       ||private
// public                ||       protected     || protected
// <--------------------------------------------------->
// super class           ||       child class   || access in child
// private                ||       public        || NA
// private                ||       private       ||NA
// private               ||       protected     || NA
// <--------------------------------------------------->
// super class           ||       child class   || access in child
// protected             ||       public        || protected
// protected             ||       private       || private
// protected             ||       protected     || protected


class Hero{
    protected:
    int num=10;
    private:
        int age;
        int height;
    public:
        int get_age(){
            return this->age;
        }
        void set_age(int age){
            this->age =age;
        }
};

class dupe : public Hero{
    public:
    string name;
    string get_name(){
        return this->name;
    }
    int get_num(){
            return this->num;
    }  
};

int main(){
    dupe d;
    d.set_age(55);
    cout<<d.get_age()<<endl;
    cout<<d.get_num()<<endl;
}