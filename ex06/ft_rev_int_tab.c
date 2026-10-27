// c01 ex06 swap gibi amacım bir stringi baştan sona vererek tam tersini almak

void    ft_rev_int_tab(int *tab, int size) 
{
    int i; // i sayaç
    int swap; // değerleri tutacak geçici bir kutu

    i = 0; // sayacı o'dan başlatıyorum
    while(i < size / 2) // eğer sayaç toplam içerik sayısının yarısından azsa
    // yarısını i takip ederken baştan aslında sondan da devam ediyorum
    {
        swap =tab[i]; // 0'ıncı karakteri swapa atıyor
        tab[i] = tab[size - 1 - i];// az önce i'nin olduğu yere de en sondaki karakteri atıyorum
        tab[size - 1 - i] = swap; // o az önce en başa attığım şeyin yerine de en baştan swapa attığım karakteri attım
        i++; // i'yi arttırıyorum
    }
}

#include <stdio.h> // fonksiyona kütüphane lazım değildi
int main()
{
    int tab[5] = {1,2,3,4,5};
    int size;
    size = 5;
    int i;
    ft_rev_int_tab(tab, size);
    i = 0;
    while(i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
}