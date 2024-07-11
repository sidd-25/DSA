#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int n;
    cin >> n;

    while(i<=n){
    //    char letter = 'A';
        int j=1;
        while (j<=n){
            char letter = 'A'+j-1;
            cout << letter << " ";
            j++;
    //      letter++;
        }
        cout << endl;
        i++;
    } 


  return 0;  
}