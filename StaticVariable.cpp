// How many objects are created of a class
// Why static variables are defined outside of the class?

#include<iostream>
using namespace std;

class Human{
    static int countObj;
    public:
        Human(){
            countObj++;
        }
    
        ~Human(){
            cout<<"destructor is called\n";
        }
    static void countObject();
};

int Human::countObj = 0;

void Human::countObject(){
    cout<<countObj<<endl;
}



int main() {
    Human h1, h2, h3, h4, h5, h6, h7, h8;
    Human::countObject();
    return 0;
}
