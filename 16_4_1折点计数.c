#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,i,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++){
        if(((a[i]<a[i-1])&&(a[i]<a[i+1]))||((a[i]>a[i-1])&&(a[i]>a[i+1])))
            cnt++;
    }   
    printf("%d",cnt);
    return 0;
}