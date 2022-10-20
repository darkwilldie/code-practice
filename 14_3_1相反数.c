#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int i,N,a[500],cnt=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }   
    for(i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(a[i]==-a[j]){
                cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}