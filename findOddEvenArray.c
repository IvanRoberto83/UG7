#include <stdio.h> 
//semangat! yang perlu kalian isi hanya bagian fungsi ganjilGenap dan PanjangArray

void ganjilGenap(int size) {
    // Periksa apakah size ganjil atau genap, lalu: 
    // Jika genap, cetak "Array adalah genap"
    // Jika ganjil, cetak "Array adalah ganjil"

}

//UBAH PARAMETER namaKalian dengan nama kalian.
void PanjangArray(int *namaKalian, int size) {
    // Periksa panjang array dengan 'size'
    
    //kondisi yang harus terpenuhi:
    // Jika size genap dan lebih besar dari atau sama dengan 6, cetak elemen ke-3 dan ke-6 dari 'namaKalian'
    // Jika size genap dan lebih besar dari 3 tapi kurang dari 6 maka cetak element ke 3 saja dari 'namaKalian' dan element yang satunya bernilaikan 0.
    // Jika size genap dan kurang dari 3, cetak kedua element dengan nilai 0
    // Jika size ganjil, cetak elemen terakhir dari 'namaKalian'
}





// Bagian ini JANGAN dirubah 😠
// Bagian ini JANGAN dirubah 😠
int main() {
    int a[] = {5};  // output: Elemen terakhir: 5 (ganjil)
    int b[] = {8, 13};  // output: Elemen ke-3: 0, Elemen ke-6: 0 (genap)
    int c[] = {21, 34, 55};  // output: Elemen terakhir: 55 (ganjil)
    int d[] = {2, 4, 6, 8};  // output: Elemen ke-3: 6, Elemen ke-6: 0 (genap)
    int e[] = {19, 23, 29, 31, 37};  // output: Elemen terakhir: 37 (ganjil)
    int f[] = {1, 3, 5, 7, 9, 11};  // output: Elemen ke-3: 5, Elemen ke-6: 11 (genap)
    int g[] = {17, 19, 23, 29, 31, 37, 41};  // output: Elemen terakhir: 41 (ganjil)
    int h[] = {9, 14, 18, 22, 27, 33, 38, 44};  // output: Elemen ke-3: 18, Elemen ke-6: 33 (genap)
    int i[] = {13, 21, 34, 55, 89, 144, 233, 377, 610};  // output: Elemen terakhir: 610 (ganjil)
    int j[] = {7, 11, 13, 17, 19, 23, 29, 31, 37, 41};  // output: Elemen ke-3: 13, Elemen ke-6: 23 (genap)
    int k[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};  // output: Elemen terakhir: 89 (ganjil)
    int l[] = {6, 12, 24, 48, 96, 192, 384, 768, 1536, 3072, 6144, 12288};  // output: Elemen ke-3: 24, Elemen ke-6: 192 (genap)

    ganjilGenap(sizeof(a) / sizeof(a[0]));
    PanjangArray(a, sizeof(a) / sizeof(a[0]));
    
    ganjilGenap(sizeof(b) / sizeof(b[0]));
    PanjangArray(b, sizeof(b) / sizeof(b[0]));
    
    ganjilGenap(sizeof(c) / sizeof(c[0]));
    PanjangArray(c, sizeof(c) / sizeof(c[0]));

    ganjilGenap(sizeof(d) / sizeof(d[0]));
    PanjangArray(d, sizeof(d) / sizeof(d[0]));
    
    ganjilGenap(sizeof(e) / sizeof(e[0]));
    PanjangArray(e, sizeof(e) / sizeof(e[0]));

    ganjilGenap(sizeof(f) / sizeof(f[0]));
    PanjangArray(f, sizeof(f) / sizeof(f[0]));

    ganjilGenap(sizeof(g) / sizeof(g[0]));    
    PanjangArray(g, sizeof(g) / sizeof(g[0]));

    ganjilGenap(sizeof(h) / sizeof(h[0]));
    PanjangArray(h, sizeof(h) / sizeof(h[0]));

    ganjilGenap(sizeof(i) / sizeof(i[0]));
    PanjangArray(i, sizeof(i) / sizeof(i[0]));

    ganjilGenap(sizeof(j) / sizeof(j[0]));
    PanjangArray(j, sizeof(j) / sizeof(j[0]));

    ganjilGenap(sizeof(k) / sizeof(k[0]));
    PanjangArray(k, sizeof(k) / sizeof(k[0]));

    ganjilGenap(sizeof(l) / sizeof(l[0]));
    PanjangArray(l, sizeof(l) / sizeof(l[0]));

    return 0;
}
