#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c,k, sum, rows ,cols, A[5][5], B[5][5], M[5][5];
    printf("Enter the rows and cols: \n");
    scanf("%d%d", &rows, &cols);

    //Input first matrix
    printf("The first matrix inputs: \n");
    for(r=0;r<rows;r++){
        for(c=0;c<cols;c++){
            printf("A[%d][%d]:",r,c);
            scanf("%d",&A[r][c]);
        }
    }
    //Input second matrix
    printf("The second matrix inputs: \n");
    for(r=0;r<rows;r++){
        for(c=0;c<cols;c++){
            printf("A[%d][%d]:", r,c);
            scanf("%d",&B[r][c]);
        }
    }

    //print first matrix
    printf("The First matrix is: \n");
    for(r=0;r<rows;r++){
        for(c=0;c<cols;c++){
            printf("%d\t", A[r][c]);
        }
        printf("\n");
    }

    //print second matrix
    printf("The second matrix is: \n");
    for(r=0;r<rows;r++){
        for(c=0;c<cols;c++){
            printf("%d\t", B[r][c]);
        }
        printf("\n");
    }

    //Multiplication of 2 matrix
    
    for(r=0;r<rows;r++){
        for(c=0;c<cols;c++){
            for(k=0;k<cols;k++){
                sum=sum+ A[r][k]*B[k][c];
            }
            M[r][c]=sum;

            sum=0;
        }
    }

    printf("The multiplication{AxB} matrix is: \n");
    for(r=0;r<rows;r++){
        for(c=0;c<cols;c++){
            printf("%d\t", M[r][c]);
        }
        printf("\n");
    }
}
