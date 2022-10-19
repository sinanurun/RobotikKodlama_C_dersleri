#include <stdio.h>

int main(){
    //aşağıda değişkenler tanılandı
    int sayi1;
    sayi1 = 42;
    int sayi2 = 6;
    /*aşağıda işlem değişkenleri tanımlanarak 
    işlemler gerçekleştirildi*/
    int toplam = sayi1 + sayi2;
    int fark;
    fark = sayi1 - sayi2;
    float bolum = sayi1 / sayi2;
    int carpim = sayi1 * sayi2;
    //aşağıda işlem sonuçları yazdırıldı
    printf("%d ile %d toplamı: %d \n", sayi1, sayi2, toplam);
    printf("%d ile %d farkı: %d \n", sayi1, sayi2, fark);
    printf("%d ile %d bolumu: %f \n", sayi1, sayi2, bolum);
    printf("%d ile %d carpimi: %d \n", sayi1, sayi2, carpim);
    return 0;
}
