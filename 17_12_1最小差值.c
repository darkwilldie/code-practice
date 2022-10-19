#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,i,j,sub,min=100000;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++){
            if(a[i]>a[j])
                sub=a[i]-a[j];
            else 
                sub=a[j]-a[i];
            if(min>sub)
                min=sub;
        }
    printf("%d",min);
    return 0;
}
