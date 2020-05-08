// usecase of destructor
/*
        With new operator objects have to explicitly delete.
        With satic objects call destructor automatically while leaving the scope
*/
#include<iostream>
using namespace std;

class Human{
    public:
        Human(){
            cout<<"constructor is called\n";
        }
    
        ~Human(){
            cout<<"destructor is called\n";
        }
};



int main() {
    Human h1;
    return 0;
}
