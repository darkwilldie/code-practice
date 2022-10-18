#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int r,y,g,n,k,t,tSum=0;
    scanf("%d%d%d",&r,&y,&g);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&k,&t);
        if(k==0||k==1){
            tSum+=t;
        }else if(k==2){
            tSum+=t+r;
        }
    }
    printf("%d",tSum);
    return 0;
}