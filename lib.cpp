

bool lettera (char a){
    if ((((int)a>65)and((int)a<90))or(((int)a>97)and((int)a<122))){
        return true;
}
}


char converter(char a ){
    char c =1;
    if ((int)a<=90){
        c=(int)a+32;
        return c;

    }  else {
        c=(int)a-32;
        return c;
    }
}
