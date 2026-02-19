#include <stdio.h>
int main(){
    int hindi,eng,maths,sst,science;
    int total,per;
    printf("Enter the marks in hindi \n , eng \n, sst \n, science \n, maths \n");
    scanf("%d%d%d%d%d",&hindi,&eng,&maths,&sst,&science);
    total=hindi+eng+maths+sst+science;
    per=total/5;
    printf("The total and percentage is : %d and %d",total,per);
    return 0;
}