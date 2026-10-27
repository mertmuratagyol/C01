// c01 ex 03 amacı iki sayıyı bölmek ve o bölümden kalanı bulmak//

#include <unistd.h>

void    ft_div_mod(int a, int b, int *div, int *mod) // iki elle yazarak belirleyeceğim int değeri atadım //
 //iki de pointerim var bunu makine verdiğim direktiflerle kendisi belirleyecek//
{
    if(b != 0) // eğer b sıfır değilse bu döngüye gir neden: pay asla sıfır olamaz//
    {
        *div = a / b; // ilk pointerıma a/b değeri atadım 
        *mod = a % b; // ikincisine b'enin a'ya bölümünden kalanı atıyorum//
    }
}

int main()
{
    int a = 10; // a'ya on atadım//
    int b = 25; // b'ye yirmibeş atadım//
    int *div; // şimdi burda durum şu yukarıda da aynı ismi vermişim ama onlar aslında pointer adı değil sadece bir pointer var demek için//
    int *mod;// bu kısımda ise asıl o pointera isim verdim ismin aynı olması kesinlikle gerekmiyor//

    div = &a; // bu div dediğim şey fonksiyonda bir işlem sonucu olacaktı ama bu satırla onu a'nın değerine eşitlemiş oldum//
    mod = &b; // aynısı burda da geçerli//

    ft_div_mod(a, b, div, mod) // fonksiyonda karakterleri belirttiğim yerlere sonradan verdiğim isimlerini yazıyorum//
    {
        printf("div: %d , mod: %d", *div, *mod); //çıktı alıyorum bu bana sonucu şöyle çıkaracak; div: (değer her neyse). ve mod için de aynı//
        return(0);
    }


}