#include <stdio.h>
int main (){

    int x, y;
    printf("x-axis ke coordinates likh :");
    scanf("%d",&x);
    printf("y-axis ke coordinate likh :");
    scanf("%d",&y);
    
    if(x==0 && y==0){
            printf("point tumhara origin pe hai");
        }
    
    else if(y==0){
            printf("point tumhara x axis pe hai");
        }
    else if (x==0){
        printf("point tumhara y axis pe hai");
       
    }
    else {printf("tera point x,y axis chhod ke kahi bhatak raha hai");}
    return 0;

}