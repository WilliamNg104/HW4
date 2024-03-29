//
//  main.c
//  P13
//
//  Created by William Ng on 2023/11/11.
//

#include <stdio.h>
#include <stdlib.h>

void printArray(const int a[][3]);

int main(void)
{
    int array1[2][3]={{1,2,3},{4,5,6}};
    int array2[2][3]={1,2,3,4,5};
    int array3[2][3]={{1,2},{4}};
    
    printf("Value is array1 by row are: \n");
    printArray(array1);
    
    printf("Value is array2 by row are: \n");
    printArray(array2);
    
    printf("Value is array3 by row are: \n");
    printArray(array3);
    
    system("pause");
    return 0;
}

void printArray(const int a[][3])
{
    int i;
    int j;
    
    for (i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}
