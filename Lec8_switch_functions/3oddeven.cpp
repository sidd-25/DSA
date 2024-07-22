#include <iostream>

using namespace std;

//Odd Even Function

bool isEven(int a){
    if (a&1){
        //Odd
        return 0;
    }
    else{
        //Even
        return 1;
    }
}


int main(){

    int n;
    cin >> n;

    if (isEven(n)){
        cout << "Number is even" << endl;
    }
    else{
        cout << "Number is odd" << endl;
    }


  return 0;  
}