#include <stdlib.h>
#include <stdio.h>

typedef struct letras {
  char letra;
  int num;
}letras;

int letrasToNum(char c){
  int num, ascii = 65;
  letras letras[26];
  for(int i=0;i<=26;i++) {letras[i].letra = ascii++; letras[i].num=i;}
  for (int i=0;i<=26;i++){
    if(c == letras[i].letra) return letras[i].num;}
}

void initMatrix(int row, int column, char matrix[row][column]){
    for(int i=0;i<column;i++){
      for(int j=0;j<row;j++){
        matrix[j][i] = '-';
    }
  }
}

int main(){
  int row, column; scanf("%d %d", &row, &column);
  char matrix[row][column]; char fileira;int lugar;
  initMatrix(row,column,matrix);

  while(scanf(" %c %d", &fileira, &lugar) != EOF){
    matrix[letrasToNum(fileira)][lugar-1] = 'X'; 
  }
  
  
  printf("  ");
  for(int i=0;i<column;i++){
    if(i<9) printf("0%d ", i+1); 
    else printf("%d ", i+1); 
  }

  puts("");
 

  int num, ascii = 65;
  letras letras[26];
  for(int i=0;i<=26;i++) {letras[i].letra = ascii++; letras[i].num=i;}

  for(int i=row-1;i>=0;i--){
    printf("%c ", letras[i].letra);
      for(int j=0;j<column;j++){
        printf("%c", matrix[i][j]);
        printf("%c", matrix[i][j]);
        printf(" ");
    }
    puts("");
  }

}
