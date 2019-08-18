//
// Created by shivam on 8/18/19.
//

#include <iostream>
using namespace std;

int main(){
    int y = 1;
    if(y & (y = 0)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
