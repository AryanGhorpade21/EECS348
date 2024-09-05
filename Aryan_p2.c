#include <stdio.h>

int main(){
    int weight ;
    
    printf("enter weight : ");
    scanf("%d", &weight);
    
    if (weight<10000){
        printf("l");
    }
    else if (10000<=weight && weight<26000) {
        printf("m");
    }
    else {
        printf("h");
    }
    
}