#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;

    if (a<25){
        cout << "F";
    }
    else if (25<a , a<45){
        cout << "E";
    }
    else if (45<a , a<50){
        cout << "D";
    }
    else if (50<a , a<60){
        cout << "C";
    }
    else if (60<a , a<80){
        cout << "B";
    }
    else if (80<a){
        cout << "A";
    }

}