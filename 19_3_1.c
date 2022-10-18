#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,max,min;   
    double mid; 
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);      
    }
    if(a[0]<a[1]){
        max=a[n-1];
        min=a[0];
    }else {
        max=a[0];
        min=a[n-1];
    }
    if(n%2){
        mid=a[(n-1)/2];
    }else{
        mid=1.0*(a[n/2]+a[n/2-1])/2;
    }
    if(mid-(int)mid)
        printf("%d %.1f %d",
        max,mid,min);
    else
        printf("%d %d %d",
        max,(int)mid,min);
    
    return 0;
}