//
//  main.c
//  P26
//
//  Created by William Ng on 2023/11/11.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char array[5];
    printf("    array  =  %p\n&array[0]  =  %p\n   &array  =   %p\n",
           array,&array[0],&array);
    
    system("pause");
    return 0;
}
