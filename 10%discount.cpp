#include <iostream>
using namespace std;
int main(){
    int cost;
    cin >> cost;

    if (cost >1000){
        float discount;
        discount = cost - ((0.1)*cost);
        cout << "After Discount = " << discount;
    }
    else {
        cout << "Discount is valid if you shop for more than 1000";
    }

}