#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
using namespace std::chrono;


void foo(int x){
    for(int i=0;i<x;i++)
        cout<<i<<" ";
    cout<<endl;
}

int main(){
    high_resolution_clock::time_point time1 = high_resolution_clock::now();
    thread t1(foo, 20);
    thread t2(foo, 20);
    thread t3(foo, 20);
    thread t4(foo, 20);
    thread t5(foo, 20);
    thread t6(foo, 20);
    thread t7(foo, 20);
    thread t8(foo, 20);
    thread t9(foo, 20);
    thread t10(foo, 20);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    t7.join();
    t8.join();
    t9.join();
    t10.join();
    // foo(20);
    // foo(20);
    // foo(20);
    // foo(20);
    // foo(20);
    // foo(20);
    // foo(20);
    // foo(20);
    // foo(20);
    high_resolution_clock::time_point time2 = high_resolution_clock::now();
    duration<double, milli> time_span = time2-time1;
    cout<<"time span "<<time_span.count()<<endl;
    
    return 0;
}
