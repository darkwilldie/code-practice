#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,i;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++){
        if(i==0)
            printf("%d ",
            (p[i]+p[i+1])/2);
        else if(i==n-1)
            printf("%d ",
            (p[i]+p[i-1])/2);
        else 
            printf("%d ",
            (p[i-1]+p[i]+p[i+1])/3);
    }
    return 0;
}