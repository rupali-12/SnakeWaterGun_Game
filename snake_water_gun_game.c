#include<stdio.h>
         int SnakeWaterGun(char You, char Comp){
             // return 1 if you win, return -1 if you lose and 0 if game draw
             if(You==Comp){
                 return 0;
             }
             if(You=='s' && Comp=='w'){
                 return 1;
             }
             else if(You=='w' && Comp=='s'){
                 return -1;
             }
             if(You=='s' && Comp=='g'){
                 return -1;
             }
             else if(You=='g' && Comp=='s'){
                 return 1;
             }
             if(You=='w' && Comp=='g'){
                 return 1;
             }
             else if(You=='g' && Comp=='w'){
                 return -1;
             }
        }
      int main(){
          char You, Comp;
          Comp ='s';
          printf("Enter s for snake, w for water and g for gun\n");
          scanf("%c", &You);
          int result = SnakeWaterGun(You, Comp);
          printf("You choose %c and comp choose %c\n", You,Comp);
          if(result==0){
              printf("Game Draw!\n");
          }
          else if(result==1){
              printf("You Win!!\n");
          }
          else{
              printf("You Lose!!\n");
          }
          return 0;
      }