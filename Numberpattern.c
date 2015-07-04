#include<stdio.h>
#include<math.h>

int main() {
    int i,j,N,c=1,k;
    printf("Print the Numbers of Row:\n");
    scanf("%d",&N);
     int A[N][N];
    for (i = 0, j = N - 1 ; j >= 0 ; i++, j--)
    {
       
            for(k = i ; k < j; k++)
                A[i][k]=c++;
            for(k = i ; k < j; k++)
                A[k][j]=c++;
            for(k = j ; k > i; k--)
                A[j][k]=c++;
            for(k = j ; k > i; k--)
                A[k][i]=c++;
           
    }
    if (N%2)
       A[N/2][N/2]=c;
       printf("\n\n Output is:\n\n\n");
    for (i=0;i<N;i++) {
        for (j=0;j<N;j++)
        printf("%d ",A[i][j]);
            
        printf("\n");
    }
}