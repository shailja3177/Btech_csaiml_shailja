 #include<stdio.h>
 int main(){
    int n = 1234;
    int r1,r2,r3,rev,s=0,p=1;
    r1= n%10; //4
    n = n/10;//123

    r2 = n%10;//3
    n = n/10;//12

    r3 = n%10;//2
    n = n/10;//1
    rev = r1*1000+r2*100+r3*10+n;
    s = r1+r2+r3+n;
    p = r1*r2*r3*n;
    printf("reverse of given is%d\n",rev);
    printf("sum of digit is%d\n",s);
    printf("product of digit is %d",p);

return 0;
 }