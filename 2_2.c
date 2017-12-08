/*
 ============================================================================
 Name        :  2_2.c
 Author      :  jncordeiro
 Version     :  1
 Description :  Advent_of_code 2/12/2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i,f, g;
    int CheckSum;
    int c[16];
    int done = 0;
    float r, d;

    f = 0;
    CheckSum = 0;

    while(f < 16){

       i = 0;

       while(i <16){

            scanf("%d", &c[i]);
            i++;
       }

       i = 0;
       g = 0;

       while(g < 16 && done != 1){

           while(i <16 && done != 1){

               if(g == i)i++;

               r = c[g] % c[i];
               d = c[g] / c[i];

               if(r == 0){

                   CheckSum += (c[g] / c[i]);

                   done = 1;
               }
               i++;
           }
           i = 0;
           g++;
       }
       done = 0;
       f++;
   }

   printf("CheckSum:%d\n", CheckSum);

   return(0);
}
