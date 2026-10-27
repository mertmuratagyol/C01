// c01 ex00 pointer öğreniyoruz//

#include <unistd.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}


// burası evo için kodu çalıştıran kısım//
int main()
{
    int a;
    int *nbr;

    a = 21;
    ptr = &a;

    printf("%d", a);
    ft_ft(nbr);
    printf("%d", a);

}