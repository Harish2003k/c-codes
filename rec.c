#include<stdio.h>

int doCal(int num){
    if(num==0){
        return 1;
    }
    printf("%d\t", num);
    doCal(num -1);
    printf("%d\t", num);
}


int main(void){
    doCal(6);
    return 0;
}