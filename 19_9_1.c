#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int N,M,T,k,P,x,max=0;
    int i,j;
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++){
        P=0;
        scanf("%d",&x);
        T+=x;
        for(j=0;j<M;j++){
            scanf("%d",&x);
            T+=x;
            P-=x;            
        }        
        if(max<P){
            max=P;
            k=i+1;
        }
    }
    printf("%d %d %d",T,k,max);
    return 0;
}