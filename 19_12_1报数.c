#include <stdio.h>
int main(int argc, char const *argv[])
{

    int n, j = 0;
    int a[6] = {
        0,
    };
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 7 == 0 || i % 10 == 7 ||
         i / 10 == 7 || i / 100 == 7)
        {
            n++;
            a[j]++;
        }
        if (j < 3)
            j++;
        else
            j = 0;
    }
    printf("%d\n%d\n%d\n%d", a[0], a[1], a[2], a[3]);
    return 0;
}