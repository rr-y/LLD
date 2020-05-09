// Function Overriding
#include<iostream>
using namespace std;
class Person{
    protected:
        string name, address;
    public:
        Person(string n, string a){
            name = n;
            address = a;
            cout<<"Base class constructor\n";
        }
       
        void showInfo(){
            cout<<"Showing info from base class"<<endl;
        }
};


class Student : public Person{
    string subject;
    int rollno;
    public:
    Student(string s, int r, string n, string a) : Person(n, a){
        subject = s;
        rollno = r;
        cout<<"Child class constructor\n";
    }
    
    ~Student(){
        
    }
    
    void showInfo(){
        cout<<"name "<<name<<endl;
        cout<<"address "<<address<<endl;
        cout<<"department "<<subject<<endl;
        cout<<"rollno "<<rollno<<endl;
    }
    
};

int main(){
    Student *st = new Student("CSE", 15028, "Rahul Raj Yadav", "Kolkata");
    st->showInfo();
}
