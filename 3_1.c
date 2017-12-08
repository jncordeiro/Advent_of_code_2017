/*
 ============================================================================
 Name        :  3_1.c
 Author      :  jncordeiro
 Version     :  1
 Description :  Advent_of_code 3/12/2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

    int M[5][5];
    int x = 0;
    int y = 0;
    int h , v;
    int iterations = 0;
    int Num;
    int arc;
    int left, right, up, down;
    v = h = 0;
    while(h < 5){
        while(v < 5){
            M[h][v]=0;
            v++;
        }
        v = 0;
        h++;
    }

    h = 2;
    v = 2;
    Num = 1;
    arc = 1;
    up = left = down = 0;
    right = 1;

    while(Num != 25){
        while(Num <= pow(2,arc+1)+1){
                M[h][v] = Num;

                printf("%d\t",M[h][v]);
                if(Num == 1)arc++;
               if(up){
                    h++;
                    if((h-1) == arc){
                        left = 1;
                        up = 0;
                    }
                }
               if(down){
                    h--;
                    if((h+1) == arc){
                        right = 1;
                        down = 0;
                    }
                }
               if(left){
                    v--;
                    if((v+1) == arc){
                        down = 1;
                        left = 0;
                    }
                }
               if(right){
                    v++;
                    if(((v-1) == arc && (Num+1 !=pow(2,arc+1)+1)) || Num == pow(2,arc+1)+1){
                        up = 1;
                        right = 0;
                    }
                }
                Num++;
                if(Num <25)break;
       }
       arc++;
       if(Num <25)break;
    }
    v = h = 0;
    while(h < 5){
        while(v < 5){
            printf("%d\t",M[h][v]);
            v++;
        }
        printf("\n");
        v = 0;
        h++;
    }
    return(0);
}
