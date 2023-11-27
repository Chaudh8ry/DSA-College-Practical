#include<stdio.h>
int main(){
    int a[2][2],b[2][2],c[2][2]={0},d[2][2]={0};
    printf("Enter Elements in Matrix A: ");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Elements in Matrix B: ");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            c[i][j]=a[i][j]+b[i][j]; // Addition of Both the matrix stored in another matrix 'C'
        }
    }

    printf("Output Addition of Elements in Matrix : ");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d \n",c[i][j]); //output of addition
        }
    }

    printf("/n");
    // MULTUIPLICATION
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            d[i][j]=a[i][j]*b[i][j]; // Multiplication of Both the matrix stored in another matrix 'd'
        }
    }
    printf("Output Multiplication of Elements in Matrix : ");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d \n",d[i][j]); //output of multiplication
        }
    }
    return 0;
}