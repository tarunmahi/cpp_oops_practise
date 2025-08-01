
//Empty class if gets initialized gets a memry of size 1B 
#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    string name;
    int age;

    Hero(string name, int age):name(name),age(age){};

    int get_age(){
        return age;
    }
    void set_age(int a){
        age=a;
    }
    void set_name(string n){
        name=n;
    }
    string get_name(){
        return name;
    }
};