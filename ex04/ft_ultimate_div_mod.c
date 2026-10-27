// c01 ex04 iki sayıyı böler bölümünden kalanı bulur ve o sayıların yerine atar az önce yaptığımın tam tersi//

#include <unistd.h>

void    ft_ultimate_div_mod(int *a, int *b) // a ve b pointerlarını oluşturuyorum //
{
    int div; //bölüm değerimi kısa süre tutacak değişkeni oluşturuyorum//
    int mod; // kalan değerini kısa süre tutacak değişken//

    div = *a / *b; // burada pointerlara atanan değer ne ise onları bölüyorum//
    mod = *a % *b; // pointerlara atanan değerin bölümünden kalan sayıyı buluyorum//

    *a = div; // bu bölüm dediğim sayıyı a pointerina aktarıyorum//
    *b = mod; // kalan dediğim sayıyı b ponterina aktardım//

} // fonksiyon burada bitiyor çıktı verme gibi bir durumu yok//

int main()
{
    int x; // x bir int değeri belirledim//
    int y; // y bir int değeri belirledim//

    x = 5; // int değeri x'e bir değer atadım o değer de 5//
    y = 15; // int değeri y'ye bir değer atadım o değer de 15//

    ft_ultimate_div_mod(&x, &y) // fonksiyonumu main içinde çalıştırıyorum ve girdi istediği yerlere x ve y yerleştiriyorum//
    {
        printf("%d ,%d ", x, y); // yazdırıyorum//
    }
}