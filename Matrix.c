#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{setlocale(LC_ALL, "Rus");
 int a;
 int b;
 int c;
 int d;
 int A[5];
 int B[5];
 int C[5];
 int D[5];
 int F[4];
 int L[4];
 int l;
 int k;
 int min;
 int i;
 int j;
 int f;
 int r;
 k=0;
 r=0;
min =100000;
printf("Изначальная матрица");
printf("\n");
printf("\n");
     for (a=1;a<=5;++a){
      A[a]=rand();
      printf("%10d ",A[a]);
      }

printf("\n");
k=A[1];
A[1]=A[5];
A[5]=k;
k=A[2];
A[2]=A[4];
A[4]=k;
k=A[5];


     for (b=1;b<=5;++b){
      B[b]=rand();
      printf("%10d ",B[b]);
      }

printf("\n");


     for (c=1;c<=5;++c){
      C[c]=rand();
      printf("%10d ",C[c]);
      }

printf("\n");

     for (d=1;d<=5;++d){
      D[d]=rand();
      printf("%10d ",D[d]);
      }

printf("\n");
r=D[1];
D[1]=D[5];
D[5]=r;
r=D[2];
D[2]=D[4];
D[4]=r;
printf("\n");
printf("\n");
printf("Измененная матрица(перевернуты 1-ая и последняя строки и поменены местами");
printf("\n");
printf("\n");
for (d=1;d<=5;++d){
        if (D[d]< min) {
        min=D[d];
        i=D;
        j=d;}
      printf("%10d ",D[d]);
      }

printf("\n");
     for (b=1;b<=5;++b){
            if (B[b]< min) {
        min=B[b];
        i=B;
        j=b;}
      printf("%10d ",B[b]);
      }
printf("\n");
     for (c=1;c<=5;++c){
            if (C[c]< min) {
        min=C[c];
        i=C;
        j=c;}
      printf("%10d ",C[c]);
      }

printf("\n");

A[5]=k;
     for (a=1;a<=5;++a){
            if (A[a]< min) {
        min=A[a];
        i=A;
        j=a;}
      printf("%10d ",A[a]);
      }
printf("\n");
printf("\n");
printf("\n");
printf("Произвольная матрица для перемножения");
printf("\n");
printf("\n");
for (f=1;f<=4;++f){
    F[f]=rand()/1000+1;
    printf("%10d ",F[f]);
    printf("\n");
}
printf("\n");
printf("\n");
printf("\n");
printf("Измененная матрица, где убрана строка и столбец с минимальным элементом");
printf("\n");
printf("\n");
L[1]=0;
if (i!=D)
for (d=1;d<=5;++d){
        if (j!=d){
      printf("%10d ",D[d]);
      L[1]=L[1]+F[d]*D[d];
      }}
printf("\n");
L[2]=0;
if (i!=B)
     for (b=1;b<=5;++b){
            if (j!=b){
      printf("%10d ",B[b]);
      L[2]=L[2]+F[b]*B[b];}
      }
printf("\n");
L[3]=0;
if (i!=C)
     for (c=1;c<=5;++c){
            if (j!=c){
      printf("%10d ",C[c]);
      L[3]=L[3]+F[c]*C[c];}
      }
printf("\n");
L[4]=0;
if (i!=A)
     for (a=1;a<=5;++a){
            if (j!=a){
      printf("%10d ",A[a]);
      L[4]=L[4]+F[a]*A[a];}
      }
printf("\n");
printf("\n");
printf("\n");
printf("Результат перемножения");
printf("\n");
printf("\n");
for (f=1;f<=4;++f){
        if (L[f]!=0){
    printf("%10d ",L[f]);
    printf("\n");}
}


 return 0;}

