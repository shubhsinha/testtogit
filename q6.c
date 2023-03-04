#include<stdio.h>
int main(){
    int n,i,j,sum=0;
    printf("Input a number to print sum from n to 2n if n is non-negative or 2n to 3n if n is negative: ");
    scanf("%d",&n);
    if(n>0){
        printf("n is non-negative\n");
        i=n;
        j=2*n;
    }
    else{
        printf("n is negative\n");
        i=2*n;
        j=3*n;
    }
    printf("So sum of %d to %d is: \n",i,j);
    for(i;i<=j;i++)
    sum=sum+i;
    printf("%d\n",sum);
return 0;
}