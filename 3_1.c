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
    int h , v, h_2, v_2;
    int iterations = 0;
    int Num;
    int arc;
    int left, right, up, down;
    int print;
    int param;
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
    print = 1;
    param = -1;
    printf("\nright\n");
    while(Num != 25){
        //while(Num <= pow(2,arc+1)+1){
        while(Num <= print){
        //while(h != arc + 1 && v != arc +1 || Num == 1){
                printf("\nNum: %d,h: %d,v: %d, arc: %d, print: %d\n", Num, h, v, arc, print);

                M[h][v] = Num;

                //printf("%d\t",M[h][v]);
               //if(Num == 1)arc++;
               if(up){
                    h--;
                    printf("\nNum: %d,h: %d,v: %d, arc: %d, print: %d\n", Num, h, v, arc, print);
                    if((h) == arc -(param)){
                        left = 1;
                        up = 0;
                    }
                }else if(down){
                    h++;
                    if((h) == arc+(1)){
                        right = 1;
                        down = 0;
                    }
                }else if(left){
                    v--;
                    if((v) == arc-(param)){

                        down = 1;
                        left = 0;
                    }
                }else if(right){
                    v++;
                    if(((v) == arc+(param) && (Num+1 !=pow(2,arc+1)+1)) || Num == pow(2,arc+1)+1){

                        up = 1;
                        right = 0;
                    }
                }
                Num++;
                v_2 = h_2 = 0;
                while(h_2 < 5){
                    while(v_2 < 5){
                        printf("%d\t",M[h_2][v_2]);
                        v_2++;
                    }
                    printf("\n");
                    v_2 = 0;
                    h_2++;
                }
                getchar();
                if(Num >25)break;
                if(up){
                    printf("\nup\n");
                }else if(down){
                    printf("\ndown\n");
                }else if(left){
                    printf("\nleft\n");
                }else if(right){
                    printf("\nright\n");
                }
       }
        right = left = down = 0;
        up = 1;
       arc++;
       param += 2;
       print = Num + pow(2,arc+1)-1;
       printf("\n%d\n",print);
       if(Num >25)break;
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
