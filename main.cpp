#include <iostream>
#include"lib.h"
int main() {
     char a;
    cin>> a;
    if (lettera(a)==1){
        cout << converter(a);
    }else {
        cout << "errore";
    }
    return 0;
}
