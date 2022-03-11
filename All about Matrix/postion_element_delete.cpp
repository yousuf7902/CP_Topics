#include <bits/stdc++.h>
using namespace std;

int main (){
    int i,n,A[50],p, f,e;

    printf("How many element you want to enter:");
    scanf("%d", &n);

    //Enter the all elements
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        printf("A[%d]:", i);
        scanf("%d", &A[i]);
    }

    //printing the all elements
    printf("The elements are:\n");
    for(i=0;i<n;i++){
        printf("%d\t", A[i]);
    }
    printf("\n");

    //deleting the position element
    printf("Enter the positon you want to delete:");
    scanf("%d", &p);

    for(i=p-1;i<n-1;i++){
        A[i]=A[i+1];
    }

    printf("The new array will be:\n");
    for(i=0;i<n-1;i++){
        printf("%d\t", A[i]);
    }

}
