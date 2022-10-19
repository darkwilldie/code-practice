#include<stdio.h>
int main(int argc,char const* argv[]){
    
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
      
    for(j=m-1;j>=0;j--)
        for(i=0;i<n;i++){
            printf("%d ",a[i][j]);
            if(i==1)
                putchar('\n');
        }
    return 0;
}