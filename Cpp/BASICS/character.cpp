#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char password[11];

    char passwd[6] = {'k','i','y','u','n','\0'};
    
    while(true){
        cout << "passwd: ";
        char input[11];
        cin >> input;

        if(strcmp(input, passwd)==0){
            cout << "Done" << endl;
            break;
        }
        else{
            cout << "password is wrong" << endl;
        }
    }
    return 0;
}