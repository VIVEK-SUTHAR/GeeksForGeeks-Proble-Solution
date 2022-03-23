#include<stdio.h>
int main(){

    int i=0,count=0;
    /* for(i=0;i<5;i++){
        printf("*");
    } */
    /* for(i=0;i<=40;i++){ 
        printf("*\n");
    */
    for(i=1;i<=50;i++){
        count++;
        printf("%d ",i);
    }
    printf("\nCount updated %d times..",count);
}