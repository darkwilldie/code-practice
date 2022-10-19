#include<stdio.h>
void swap(int*a,int*b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main(int argc,char const* argv[]){
    
    int n,i,j,big=0,small=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i = 0; i < n; i++) {
        big=0;
        small=0;
        for (j = 0; j < n; j++) {
            if (a[i]>a[j])
                big++;
            else if (a[i]<a[j])
                small++;
        }if(big==small){
            printf("%d",a[i]);
            break;
        }
    }
    if(big!=small)
        printf("-1");
    
    return 0;

    
}