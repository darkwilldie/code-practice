#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,price,sub,t,max=0;
    scanf("%d",&n);
    scanf("%d",&price);
    for(int i=1;i<n;i++){
        t=price;
        scanf("%d",&price);        
        if(t<price)
            sub=price-t;
        else 
            sub=t-price;
        if(max<sub)
            max=sub;
    }
    printf("%d",max);
    return 0;
}