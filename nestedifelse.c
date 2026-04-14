#include <stdio.h>
int main()
{

    int a, b, c;
    printf("pehla number likh :");
    scanf("%d", &a);
    printf("pehla number likh :");
    scanf("%d", &b);
    printf("pehla number likh :");
    scanf("%d", &c);

    if (a>b){ 
        if(a>c)
        {printf("%d is the greatest",a);}
        else { printf("%d is the greatest ",c);}
    
    }
    else { if(b>c){
           printf("%d is the greatest",b);}
           else { printf("%d is the greatest of all",c);}
    }
    return 0;
}