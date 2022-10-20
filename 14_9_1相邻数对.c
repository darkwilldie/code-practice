#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int j,i,n,cnt=0;
    int a[100];
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }  
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]-a[j]==1||a[i]-a[j]==-1)
                cnt++;
        }
    }
    printf("%d",cnt/2);
    return 0;
}