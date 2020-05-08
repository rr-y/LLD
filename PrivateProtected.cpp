// Demonstrating Protected Inheritance
#include<iostream>
using namespace std;
class Person{
    protected:
        string name, address;
    public:
        void setName(string n){
            name = n;
        }
        
        void setAddress(string a){
            address = a;
        }
};


class Student : private Person{
    string subject;
    int rollno;
    public:
    Student(string s, int r){
        subject = s;
        rollno = r;
    }
    
    ~Student(){
        
    }
    
    void showInfo(string name, string address){
        setName(name);
        setAddress(address);
        cout<<"name "<<name<<endl;
        cout<<"address "<<address<<endl;
        cout<<"department "<<subject<<endl;
        cout<<"rollno "<<rollno<<endl;
    }
};

int main(){
    Student *st = new Student("CSE", 15028);
    st->showInfo("Rahul Raj Yadav", "Kolkata");
}
