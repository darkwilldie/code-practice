#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,i,j,cnt=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        cnt=1;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                cnt++;                
            }            
        }
        printf("%d ",cnt);
    }
    return 0;
}