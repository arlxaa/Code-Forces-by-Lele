#include <stdio.h>

int main() {
    // Gunakan long long int karena n bisa sampai 10^15
    long long n;
    scanf("%lld", &n);

    long long hasil;

    // Cek apakah n genap atau ganjil
    if (n % 2 == 0) {
        // Rumus untuk n genap
        hasil = n / 2;
    } else {
        // Rumus untuk n ganjil
        hasil = -(n + 1) / 2;
    }

    printf("%lld\n", hasil);

    return 0;
}
