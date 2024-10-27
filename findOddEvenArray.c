#include <stdio.h> 
//semangat! yang perlu kalian isi hanya bagian fungsi ganjilGenap dan PanjangArray

void ganjilGenap(int size) {
    if(size%2 != 0){
        printf("Array merupakan ganjil\n");
    }
    else{
        printf("Array merupakan genap\n");
    }
}

//UBAH PARAMETER namaKalian dengan nama kalian.
void PanjangArray(int *ivan, int size) {
    int *refIvan = ivan; 
    int element = size;
    if(size >= 6 && size%2 == 0){
        printf("Elemen ke-3 : %d\n", refIvan[2] );
        printf("Elemen ke-6 : %d\n\n", refIvan[5]);
    }
    else if(size >= 3 && size < 6 && size%2 == 0){
        printf("Elemen ke-3 : %d\n", refIvan[2]);
        printf("Elemen ke-6 : 0\n\n");
    }
    else if( size < 3 && size%2 == 0){
        printf("Elemen ke-3 : 0\n");
        printf("Elemen ke-6 : 0\n\n");
    }
    else if(size%2 != 0 ){
        printf("Elemen terakhir : %d\n\n", refIvan[element-1]);
    }
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
