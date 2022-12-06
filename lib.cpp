
#include "lib.h"


bool lettera (char &a){
    if ((((int)a>=65)and((int)a<=90))or(((int)a>=97)and((int)a<=122))){
        if ((int)a<=90){
            a+=32;
        }  else {
            a-=32;
        }
        return true;
    }else {
        return false;
    }
}
