//
//  main.cpp
//  P25
//
//  Created by William Ng on 2022/11/11.
//
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x=100;
    int y=addbyone(x);
    printf("x=%d\n",x);
    system("pause");
    
}
int addbyone (int &xref)
{
    xref++;
    printf("xref=%d\n",xref);
    return xref;
}
