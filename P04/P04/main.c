//
//  main.c
//  P04
//
//  Created by William Ng on 2023/11/11.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n[10];
    int i;
     
    for (i=0;i<10;i++)
    {
        n[i]=0;
    }
    
    printf("%s%13s\n","Element","Value");
    for (i=0;i<10;i++)
    {
        printf("%7d%3d\n",i,n[i]);
    }
    system("pause");
    return 0;
}
