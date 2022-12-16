#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char lista[10][20];
    char target[20];
    int pos = 0;

    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++) {
            target[j] = ' ';
            lista[i][j] = ' ';
        }
    }

    for(int i=0;i<10;i++){
        cin >> lista[i];
    }

    cin >> target;
    if(cerca(lista,pos,target)){
        cout << pos;
    }else{
        cout << "non presente";
    }





    return 0;
}
