#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int n;
    cin>>n;

    char letter = 'A';

    while (i<=n){
        int j =1;

        while (j<=n){
            cout << letter << " ";
            j++;
        }
        letter = letter + 1;
        cout << endl;
        i++;
    }


  return 0;  
}