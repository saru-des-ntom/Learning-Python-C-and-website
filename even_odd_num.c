#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : "); 
    scanf("%d",&n);

    // even and Odd number;
    if((n/2) * 2 == n){
        printf("Input number: %d\n Even No.\n",n);
    }
    else printf("Input number: %d\n Odd No.\n\n",n);
    return 0;
}
