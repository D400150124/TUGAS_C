#include <stdio.h>
#include <math.h>
float fungsiku( int x, int m)
{
    float y;
    y = sqrt(((5*pow(x,3)) - pow(x,m-1)) + 12);
    return y;
}
int main()
{
    int a,b;
    float hasil;
    printf("Masukkan nilai x : "); scanf("%d", &a);
    printf("Masukkan nilai m : "); scanf("%d", &b);
    if(a<0)
    {
        printf("Nilai x tidak boleh kurang dari 0\n");
        if(b>4)
        {
            printf("Nilai m tidak bolek lebih dari 5\n");
        }
    } else if(b>4)
    {
        printf("Nilai m tidak bolek lebih dari 5\n");
    } else
    {
        hasil = fungsiku(a,b);
        printf("x=%d, m=%d, hasilnya y=%f \n",a,b,hasil);
    }
    return 0;
}
