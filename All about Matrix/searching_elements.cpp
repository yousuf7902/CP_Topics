#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,n,A[50],c=0,s;
    printf("How many element?\n");

    scanf("%d", &n);

    //Enter the all elements
    printf("Enter the element:\n");

    for(i=0;i<n;i++){
        printf("A[%d]:",i);
        scanf("%d",&A[i]);
    }

    //Prints the all elements
    printf("The elements are: \n");

    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }

    //Enter the searching elements
    printf("What you want to search?");
    scanf("%d", &s);

    for(i=0;i<n;i++){
        if(A[i]==s){
            printf("%d is located in %d position\n", s, i+1);
            c++;
        }
    }

    //Print the searching elements
    if(c==0){
        printf("Your searching element not found!");
    }
    else{
        printf("%d is available for %d times", s, c);
    }

}
