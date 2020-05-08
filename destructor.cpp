// usecase of destructor

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
    Human* h = new Human();
    delete h;
    return 0;
}
