// write a friend function to access privae variables
#include<iostream>
using namespace std;

class Student{
    string subject;
    int rollno;
    public:
    Student(string s, int r){
        subject = s;
        rollno = r;
    }
    
    ~Student(){
        
    }
    
    friend void teacherFun(Student* );
};

void teacherFun(Student *st){
    cout<<"I am he teacher and I will teach you "<<st->rollno<<endl;
}

int main(){
    Student *st = new Student("Rahul Raj Yadav", 15028);
    teacherFun(st);
}
