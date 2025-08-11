//wraping up data members and functions
//fully encapsulated - all data members are in private modifier
//used for information hiding 
//1.hide data
//2.if we want we can make class read only and code reusability
//3.helps in unit testing
#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
        string name="tarun";
        int age;
        public:
    string get_name(){
        return this->name;
    }
    
    void set_name(string name){
        this->name=name;
    }
};

int main(){
    Hero h1;
    h1.set_name("varun");
    cout<<h1.get_name()<<endl;
}
