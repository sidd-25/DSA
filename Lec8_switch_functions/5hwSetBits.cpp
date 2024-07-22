#include <iostream>

using namespace std;

//later will have to do this by Brian Kernighan’s method which will eliminate the right shift

int Set_Bits(int a, int b){
    int count_a = 0; 
    int count_b = 0;
    while (a!=0){
        if ((a&1) == 1){
            count_a ++;
        }
        a = a >> 1;
    }

    while (b!=0){
        if ((b&1) == 1){
            count_b ++;
        }
        b = b >> 1;
    }

    return count_a + count_b;
}


int main(){

    int a, b;
    cin >> a;
    cin >> b;

    int set_bits = Set_Bits (a,b);
    cout << set_bits << endl;

  return 0;  
}