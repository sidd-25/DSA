#include <iostream>

using namespace std;

int main(){

    int i=1;
    int n;
    cin >> n;

    while(i<=n){
        int j=1;
        char start = 'A' + n - i;

        while (j<=i){
            cout << start << " ";
            j++;
            start++;
        }
        cout << endl;
        i++;
    }


  return 0;  
}