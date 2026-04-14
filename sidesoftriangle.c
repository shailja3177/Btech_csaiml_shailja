#include <stdio.h>
int main(){
int a, b, c;
printf ("pehli side likh : ");
scanf ("%d",&a);
printf ("dusri side likh : ");
scanf ("%d",&b);
printf ("tisri side likh : ");
scanf ("%d",&c);
if(a+b>c && a+c>b && b+c>a){ 
    printf("it is a triangle");
}

else{ printf(" triangle nahi ban skta");

}




    return 0;
}

