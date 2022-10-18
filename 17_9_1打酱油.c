#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,x=0;
    scanf("%d",&n);
    while(n/10){
        if(n/50){
            x+=7*(n/50);
            n%=50;
        }
        else if(n/30){
            x+=4*(n/30);
            n%=30;            
        }
        else{
            x+=(n/10);
            n%=10;
        }
    }
    printf("%d",x);
    return 0;
}