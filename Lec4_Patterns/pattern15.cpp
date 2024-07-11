#include <iostream>

using namespace std;

int main(){

    int i=1;
    int n;
    cin >> n;
    char value = 'A';

    while (i<=n){
        int j=1;

        while (j<=i){
            cout << value << " ";
            j++;
            value++;
        }
        cout << endl;
        i++;
    }


  return 0;  
}