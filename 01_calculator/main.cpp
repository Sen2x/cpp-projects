#include <iostream>
using namespace std;
#include <string>
int main() {
    double a,b;
    string op;
    cin >> a;
    cin >> b;
    cin >> op;
    double r;
    if (op =="+"){
        r = a + b;
    }
    else if (op =="-") {
        r = a -b;
    }
    else if (op =="*") {
        r= a *b;
    }
    else if ( op== "/") {
        if(b ==0){
            cout<<"Error" << endl;
            return 1;} r= a/ b;
    }else{
        cout << "Unknown operation" <<endl;
        return 1;}

    cout << "result is " << r <<endl ;
    return 0;}