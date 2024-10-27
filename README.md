[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/0ccZUS6L)
# Ganjil Genap Array 

## Deskripsi Program
Program ini terdiri dari dua fungsi utama:
1. **`ganjilGenap`**: Memeriksa apakah panjang array adalah ganjil atau genap.
2. **`PanjangArray`**: Menampilkan elemen tertentu dari array berdasarkan panjang array dengan menggunakan pointer untuk mengakses elemen array.

### Ketentuan
- **Jika panjang array ganjil**:
    - Tampilkan elemen terakhir dari array.
- **Jika panjang array genap**:
    - Jika panjang array kurang dari 3, tampilkan:
      - "Elemen ke-3: 0"
      - "Elemen ke-6: 0"
    - Jika panjang array di antara 3 hingga 5, tampilkan:
      - Elemen ke-3
      - "Elemen ke-6: 0"
    - Jika panjang array lebih dari atau sama dengan 6, tampilkan:
      - Elemen ke-3
      - Elemen ke-6

Setiap array yang dimasukkan akan diperiksa apakah panjangnya ganjil atau genap, dan hasilnya akan ditampilkan.

## Test Case (Output)

### Test Case 1
**Input Array**: `{5}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 5

### Test Case 2
**Input Array**: `{8, 13}`  
**Output**:   
Array merupakan Genap<br>
Elemen ke-3: 0<br>
Elemen ke-6: 0

### Test Case 3
**Input Array**: `{21, 34, 55}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 55

### Test Case 4
**Input Array**: `{2, 4, 6, 8}`  
**Output**:  
Array merupakan Genap<br>
Elemen ke-3: 6<br>
Elemen ke-6: 0

### Test Case 5
**Input Array**: `{19, 23, 29, 31, 37}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 37

### Test Case 6
**Input Array**: `{1, 3, 5, 7, 9, 11}`  
**Output**:  
Array merupakan Genap<br>
Elemen ke-3: 5<br>
Elemen ke-6: 11

### Test Case 7
**Input Array**: `{17, 19, 23, 29, 31, 37, 41}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 41

### Test Case 8
**Input Array**: `{9, 14, 18, 22, 27, 33, 38, 44}`  
**Output**:  
Array merupakan Genap<br>
Elemen ke-3: 18<br>
Elemen ke-6: 33

### Test Case 9
**Input Array**: `{13, 21, 34, 55, 89, 144, 233, 377, 610}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 610

### Test Case 10
**Input Array**: `{7, 11, 13, 17, 19, 23, 29, 31, 37, 41}`  
**Output**:  
Array merupakan Genap<br>
Elemen ke-3: 13<br>
Elemen ke-6: 23

### Test Case 11
**Input Array**: `{1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 89

### Test Case 12
**Input Array**: `{6, 12, 24, 48, 96, 192, 384, 768, 1536, 3072, 6144, 12288}`  
**Output**:  
Array merupakan Genap<br>
Elemen ke-3: 24<br>
Elemen ke-6: 192
