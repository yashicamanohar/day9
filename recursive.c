#include<stdio.h>
void numbers(int x){
    if(x==5)return;
    printf("%d   ",x);
    numbers(x-1); 
}
void numbersdesc(int x){
    if(x==0)return;
   numbers(x-1); 
    printf("%d   ",x);
}
void evennum(int n ){
    if (n>10)return;
    printf("%d ",n);
    evennum(n+2);
}
void even(int x,int y){
    if(x>y)return;
    printf("%d ",x);
    even(x+2,y);
    
}
int sum1(int n){
    if(n==0)return n;
    return n+sum1(n-1);
}
int sum2(int n){
    if(n==1)return n;
    return n*sum2(n-1);
}
int sum3(int n){
    if(n==1)return n;
    return n-sum3(n-1);
}
int countdigit(int x){
    
    int c=0;
    while(x>0){
        c++;
        x/=10;
        }
        return c;

}
int countdigitR(int x){
    if(x==0)return 0;
    else return 1+countdigitR(x/10);
    
}
int fibo(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return fibo(n-1)+ fibo(n-2);
}
int tribo(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    if(n==1)return 1;
    return tribo(n-1)+ tribo(n-2)+tribo(n-3);
}
int rev(int x,int y){
    if(x==0)return y;
    return rev(x/10,y*10+(x%10));
}
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int main()
{
    printf("%d",gcd(12,19));
}