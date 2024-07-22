#include <iostream>

int update (int a){
    a -= 5;
    return a;
}

using namespace std;

int main(){

    int a = 15;
    update(a); // passed by value so 'a' will not change. 
    cout << a << endl;

    int b = 15;
    int c = update(b);
    cout << b << endl;
    cout << c << endl;

  return 0;  
}