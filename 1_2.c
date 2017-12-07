/*
 ============================================================================
 Name        :  1_2.c
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
    int Num = 0;
    int c[2184];

    while(i <2184){

        c[i] = getchar();

        printf("C: %c\n", c[i]);

        i++;

    }
    i = 0;
    while(i<1092){

        if(c[i] == c[i+ 1092])Num += ((c[i]-48)*2);

        i++;

    }
    printf("Number: %d\n", Num);

   return(0);
}
