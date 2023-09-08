#include <stdio.h>

int main() {
    double km;
    double meter;
    double cm;

    printf("================================\n");
    printf("   -Tugas Pribadi Richard-\n");
    printf("================================\n");
    printf("    -Mengkonfersi Jarakk-\n");
    printf("================================\n");
    printf("Masukkan jarak dalam kilometer: ");
    scanf("%lf", &km);

    // Konversi kilometer ke meter dan sentimeter
    meter = km * 1000;
    cm = km * 100000;

    // Menampilkan hasil konversi dengan menekan Enter setiap kali
    printf("Hasil konversi:\n");
    printf("%.2lf kilometer = %.2lf meter\n", km, meter);
    getchar(); // Menunggu Enter ditekan
    printf("%.2lf kilometer = %.2lf sentimeter\n", km, cm);
    getchar(); // Menunggu Enter ditekan

    return 0;
}
