/*
 ============================================================================
 Name        :  1.c
 Author      :  jncordeiro
 Version     :  1
 Description :  Advent_of_code 1/12/2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i = 0;
    int c, pre, first;
    int Num = 0;

    pre = 0;

    while(c != '\n'){

        c = getchar();

        if(i == 0)first = c;

        if(c == pre)Num += (c-48);

        if(c != '\n')pre = c;

        i++;

    }

    printf("f: %d, pre:%c\n", first ,pre);

    if(pre == first)Num += (pre-48);

    printf("Number: %d\n", Num);

   return(0);
}
