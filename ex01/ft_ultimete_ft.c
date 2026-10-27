// tekrar pointer öğreniyoruz//

void    ft_ultimete_ft(int *********nbr)
{
    *********nbr = 42;
}


int main()
{
    int *********nbr;
    int a;
    int *b;
    int **c;
    int ***d;
    int ****e;
    int *****f;
    int ******g;
    int *******h;
    int ********i;

    a = 16;
    b = &a;
    c = &b;
    d = &c;
    e = &d;
    f = &e;
    g = &f;
    h = &g;
    i = &h;

    printf("%d", a);

    ft_ultimete_ft(i)
    printf("%d", a);



}   