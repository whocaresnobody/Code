#include <iostream>
#include <stdlib.h>
void printOut(int n){
    if (n>=10){
        printOut(n/10);
    }
    printf("%d",n%10);    
}

void printInverse(int n){
    printf("%d",n%10);
    if(n>=10){
        printInverse(n/10);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printOut(n);
    printf("\n");
    printInverse(n);
    printf("\n");
    return 0;
}