#include <iostream>
using namespace std;



void geeks(){
    int var = 20;
    int *ptr;
    ptr = &var;

    cout << "value of ptr = "<< ptr << "\n";
    cout << "value of var = "<< var << "\n";
    cout << "value of *ptr = "<< *ptr << "\n";
}

int main(){
    geeks();
}