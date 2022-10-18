#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,point=0,i=0;
    do{
        scanf("%d",&n);
        if(n==1){
            point+=1;
            i=0;
        }
        if(n==2){            
            i++;
            point+=i*2;
        }
    }while(n);
    printf("%d",point);

    return 0;
}
