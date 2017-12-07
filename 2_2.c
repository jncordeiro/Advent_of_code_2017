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

    int i;
    int c, Start, CheckSum;
    int Num = 0;
    int max, min, d;
    int end;
    Start = 1;
    CheckSum = 0;
   while(Start){

        i = max = min = 0;
        d = 0;

        while(c != '\n'){

            scanf("%d", &c);

            if(i == 0){
                max = c;
                min = c;
            }

            if(c > max)max = c;

            if(c <min && c != 10 && c != ' ')min = c;

            i++;
            end = getchar();
            if(c == -1)Start = 0;
            if(end == '\n')break;
        }
        c = 0;
        d = max - min;
        CheckSum += d;
        printf("\nMax: %d, Min: %d\n", max, min);
        printf("\nCheckSum: %d, d: %d\n", CheckSum, d);
    }

   printf("CheckSum:%d\n", CheckSum);

   return(0);
}
