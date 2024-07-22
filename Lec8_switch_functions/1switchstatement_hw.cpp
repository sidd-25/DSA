#include <iostream>

using namespace std;

int main(){

    while(1){
        switch(1){
            case 1: cout << "Hi" << endl;
                    break;
        }
        cout << "while Hi" << endl;

        // Condition to break out of the loop
        exit(0);  // Terminate the program
    }


  return 0;  
}

/*
If you use exit(1) instead of exit(0), the program will 
still terminate immediately, but the exit status will 
indicate that the program ended with an error or abnormal
 termination. The exit status is a way for a program to 
communicate its outcome to the operating system or to other 
programs that may have invoked it. */

