// c01 ex02  yer değiştirmece//

void    ft_swap(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = *b;
    *b = c;

   

}

int main()
{
    int x;
    int y;

    x = 4;
    y = 6;


    ft_swap(&x, &y)
    
    printf("%d", x);

    printf("%d", y);
}