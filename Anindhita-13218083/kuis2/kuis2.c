#include <stdio.h>

/*
13218083
Sistem Persamaan Linear Dua Variabel
f1: y = 2x + 2
f2: y = 4x -4
*/

int main(void) {
  // index 0 untuk f1, index 1 untuk f2

  // assign gradien dan konstanta
  // y = mx + c
  float m[2] = {2, 4};
  float c[2] = {2, -4};

  // ubah ke bentuk ax + by = c
  float a[2] = {-m[0], -m[1]};
  float b[2] = {1, 1};

  // aturan Cramer
  float detA = a[0]*b[1] - a[1]*b[0];
  float x = (c[0]*b[1] - c[1]*b[0]) / detA;
  float y = (a[0]*c[1] - a[1]*c[0]) / detA;

  // cetak hasil
  printf("x = %0.2f\ny = %0.2f\n", x, y);

  return 0;
}