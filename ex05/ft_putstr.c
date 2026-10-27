// c01 ex05 metin string yazdırma üstüne

#include <unistd.h>

void    ft_putstr(char *str) // pointer olmasının sebebi tek bir karakter olmaması sürekli değişen bir durum


{
    int i; // bu bir sayaçtır olduğum karakteri belirleyen bu
    i = 0; // sayacım 0'da

    while(str[i]) // str dediğim şeyi sonradan belirliyorum diyelin elma[1] bu l harfi
    {
        write(1, &str[i], 1); // str dediğim şeyin i'inci harfini yazdır
        i++; // i değerini bir arttır
        // bu şekilde elma[1] e 1 + 1= 2 elma[2] m gibi kelimeyi harf harf yazıyorun
    }
}

int main(void)
{
    char *str = "Cumle a bc d"; // str pointera çeşitli char değerleri atadım

    ft_putstr(str); // bu stringi fonksyona ekledim
}