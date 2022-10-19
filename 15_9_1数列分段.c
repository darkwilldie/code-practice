#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,i,x,t,cnt=1;
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=1;i<n;i++){
        t=x;
        scanf("%d",&x);
        if(t!=x)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}