#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Выделить память под многомерный массив, заполнить его произвольным образом, передать
обрабатывающей функции и получить её результат (входная матрица остаётся неизменной,
на выходе должен быть новый массив или число).Вернуть сумму всех чётных элементов матрицы
*/
int f1(int** , int, int);
 void f2(int** , int, int);
 ////////////////////////////////
int main() {
    int n,m;
    printf("row->");
    scanf("%i",&n);
    printf("column->");
    scanf("%i",&m);
    int i;
    int j;
     int **arr = (int **)malloc(n * sizeof(int *));
     for (i=0; i<n; i++)
         arr[i] = (int *)malloc(m * sizeof(int));

    //f1(arr,n,m);

    srand(time(NULL));
     for ( i = 0; i<n; i++) {
         for (j = 0; j < m; j++) {
             arr[i][j] = 1+rand()%10;
             printf("arr[%i][%i] = %d ", i,j, arr[i][j]);
         }
         printf("\n ");
     }
     int h = f1(arr,n,m);
     printf("summa  = %d ", h);
     return 0;
}
int f1(int** a,int r, int c){
    int i,j;

    int summ=0;
    for ( i = 0; i<r; i++) {
        for (j = 0; j < c; j++) {
            if(a[i][j]%2 == 0)
                summ = summ + a[i][j];

        }
    }
    printf("summ  = %d ", summ);
    return summ;
}
void f2(int** a , int r, int c) {
 ////лаба 6
}
