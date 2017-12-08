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

    int M[603][603];
    int x = 0;
    int y = 0;
    int h , v, h_2, v_2;
    int iterations = 0;
    int Num;
    int arc;
    int left, right, up, down;
    int print;
    int param;

    h = 301;
    v = 301;
    Num = 1;
    arc = 1;
    up = left = down = 0;
    right = 1;
    print = 1;
    param = -1;

    while(Num != 363609){

        while(Num <= print){

                M[h][v] = Num;
                if(Num == 361527){
                    printf("\nDif: %d\nNum: %d,h: %d,v: %d, arc: %d, print: %d,param: %d\n",(301-h)+(v-301), Num, h, v, arc, print, param);
                }

               if(up){
                    h--;
                    if((h-299) == arc -(param)){
                        left = 1;
                        up = 0;
                    }
                }else if(down){
                    h++;
                    if((h-299) == arc+(1)){
                        right = 1;
                        down = 0;
                    }
                }else if(left){
                    v--;
                    if((v-299) == arc-(param)){

                        down = 1;
                        left = 0;
                    }
                }else if(right){
                    v++;
                    if(((v-299) == arc+(param) && (Num+1 !=pow(2,arc+1)+1)) || Num == pow(2,arc+1)+1){

                        up = 1;
                        right = 0;
                    }
                }
                Num++;
                v_2 = h_2 = 0;

       }
        right = left = down = 0;
        up = 1;
       arc++;
       param += 2;
       print = pow(param+2,2);
       if(Num >363609)break;
    }
    /*v = h = 0;
    while(h < 121){
        while(v < 121){
            printf(" %6d ",M[h][v]);
            v++;
        }
        printf("\n");
        v = 0;
        h++;
    }*/
    return(0);
}
