#include <stdio.h>

/*------------------------------------------------------------------*/
// >>>>>>>>>>>>>>>>>>>>>>>> Perfect Number <<<<<<<<<<<<<<<<<<<<< //
//------------------------------------------------------------------//

int main(){
     int i, n ,sum=0;
     printf("Enter the number:");
     scanf("%d",&n);

     for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
     }
     if(n==sum){
        printf("%d is a perfect number",n);
     }
     else{
        printf("%d is not a perfect number",n);
     }

}
