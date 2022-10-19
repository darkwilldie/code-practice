#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,k,i=0,cnt=0;
    scanf("%d%d",&n,&k);
    int a[n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }    
    
    int sum=a[0];
    for(i=0;i<n;i++){        
        if(sum>=k){
            cnt++;
            sum=a[i+1];
        }else if(i==n-1){
            cnt++;
        }else
            sum+=a[i+1];
    }/*i=0;
    sum=a[i];
    while(i<n){        
        if(sum>=k){
            i++;
            cnt++;
            sum=a[i];
        }else if(i!=n-1){
            i++;
            sum+=a[i];
        }else{
            i++;
            cnt++;  
        }      
    }*/
        
    printf("%d",cnt);
    return 0;
}