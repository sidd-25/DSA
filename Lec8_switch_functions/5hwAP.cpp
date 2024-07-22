#include <iostream>

using namespace std;

int AP (int n){
    return ((3*n) + 7);

}

int main(){

    // Given AP is (3*n + 7)
    // to find : last term

    int n;
    cin >> n;

    int last_term = AP(n);
    cout << last_term << endl;
    


  return 0;  
}