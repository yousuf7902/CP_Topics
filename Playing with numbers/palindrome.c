#include <stdio.h>

/*------------------------------------------------------------------*/
// >>>>>>>>>>>>>>>>>>>>>>>> Palindrone Number <<<<<<<<<<<<<<<<<<<<< //
//------------------------------------------------------------------//

int main(){
    int num, temp, r,sum=0;
    printf("Enter the number:");
    scanf("%d", &num);

    temp=num;
    while(temp!=0){
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }

    if(num==sum){
        printf("%d is the palindrome number", sum);
    }
    else{
        printf("%d is not a palindrome number",sum);
    }
}
