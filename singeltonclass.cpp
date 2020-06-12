#include<bits/stdc++.h>
using namespace std;


class AreaCalculator{

    private:
        double side;
    
        AreaCalculator(){

        }    
    
    public:
        static AreaCalculator *a;

        static AreaCalculator* getObj(){
            if(a == NULL){
                a = new AreaCalculator();
            }
            else{
                cout<<"already one object is created there\n";
            }
            return a;
        } 

        void print(){
            cout<<"Hello world \n";
        } 
};

AreaCalculator* AreaCalculator::a = NULL;

int main(){
    AreaCalculator* obj = AreaCalculator::getObj();
    obj->print();
    AreaCalculator* obj1 = AreaCalculator::getObj();
    return 0;
}
