#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=0;n;i++){
        sum+=n%10;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}