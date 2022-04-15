#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int w, h, m1[1000][1000];
int p,q, m2[1000][1000];
int hasil [1000][1000];

void getMatrix1(){
    FILE *file;
    char *line, *number;

    h=0;
    file = fopen ("matrik.txt","r");
    while(!feof(file))
    {
        w =0;
        fscanf(file,"%s", line);
        while(number != NULL)
        {
            m1[h][w]= atoi(number);
            w++;
            number = strtok(NULL, ",");
        }
        printf ("\n");
        h++;
    }
}
void getMatrix2(){
    FILE *file;
    char *line, *number;

    p=0;
    file = fopen ("matrik2.txt","r");
    while(!feof(file))
    {
        q =0;
        fscanf(file,"%s", line);
        while(number != NULL)
        {
            m2[p][q]= atoi(number);
            w++;
            number = strtok(NULL, ",");
        }
        printf ("\n");
        h++;
    }
}


int main()
{
    getMatrix1();
    getMatrix2();


    //print matriks 1
    int i,j;
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            printf("%d", m1[i][j]);
        }
        printf("\n");
    }


    //print matriks 2
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d", m2[i][j]);
        }
        printf("\n");
    }


    //perkalian matriks
    int k, jumlah = 0;
    for(i = 0; i < h; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + m1[i][k] * m2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }

    printf("Hasil perkalian matriks: \n");
    for(i = 0; i < h; i++){
      for(j = 0; j < q; j++){
        printf("%d\t", hasil[i][j]);
      }
      printf("\n");
    }


    return 0;
}
