#include <stdio.h>
int main(){
    int CP,SP,Profit;
    printf("Enter the cost price :");
    scanf("%D",&CP);
    printf("Enter the selling price :");
    scanf("%D",&SP);
    Profit=SP-CP;
    printf("The profit is %d",Profit);
    return 0;
}