#include<stdio.h>
int main(){
    //FIRSST MATRIX ORDER
    int m;
    printf("Enter the row of 1st matrix:");
    scanf("%d",&m);
    int n;
    printf("Enter the coluam of 1st matrix:");
    scanf("%d",&n);
    int a[m][n];
    //INPUT THE FIRST MATRIX
    printf("Enter all the element OF 1st MATRIX;");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //2ND MATRIX ORDER
    int p;
    printf("Enter the row of 2ND matrix:");
    scanf("%d",&p);
    int q;
    printf("Enter the coluam of 2ND matrix:");
    scanf("%d",&q);
    int b[p][q];
    //INPUT THE 2nd MATRIX
    printf("Enter all the element OF 2nd MATRIX;");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //CHECK
    if(n!=p){
        printf("The matrix can not be multiplied:");
    }
    else{
        //MULTIPLICATION
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                //i row of a,j row coluam of b
                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        //print
        printf("The resultant of matrix is :\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
} 
