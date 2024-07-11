#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int n;
    cin>>n;

// another method
    while (i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A'+ i - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }

  return 0;  
}