#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int n;
    cin >> n;

    while (i<=n){
        int j =1;
        int value = i;

        while (j<=i){
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }

//how to do without value variable
// instead of value use i+j-1 in cout 

    // while (i<=n){
    //     int j =1; 

    //     while (j<=i){
    //         cout << i+j-1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
  return 0;  
}