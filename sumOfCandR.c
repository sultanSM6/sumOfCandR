// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int sum=0,i,j;
    int arr[5][5] ={5,2,3,4,5,6,8,5,2,3,5,4,3,6,5,2,4,5,8,6,9,4,6,7,4};

        for (i=0;i<5;i++)
        {
            for (j=0;j<5;j++)
            {
                printf("%d  ",arr[i][j]);
            }            
            printf("\n");
        }
        //........................................
        printf("\nSum of columns by order \n");
        for (j=0;j<5;j++){
        for (i=0;i<5;i++){
            sum += arr[i][j];
        }
        printf("%d ", sum);
        sum=0;
    }
         //.........................................
         printf("\n");
         printf("\nSum of rows by order \n");

    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            sum += arr[i][j];
        }
        printf("%d\n", sum);
        sum=0;
    }


    return 0;
}
