/*
-----------------------------------------------------------------------------
 listNameCutChar.c - Script para criacao de nomes sempre excluindo uma letra.
 Criado em: 01/07/2022
 Revisao: 00
 Copyright (c) 2022 by Alan Lopes
 ----------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
  int tam, i, j=0;

  char text[100];
  strcpy(text, argv[1]);

  tam = strlen(text);

  printf("Quantidade: %d\n", tam);

  for(i=0; i < tam; i++){
    j=0; 
    
    printf("%i;", i+1);

    while(text[j] != '\0'){
      if (j != i){
        printf("%c", text[j]);
      }

      j++;
    } // end while

    printf("\n");
  } // end for

  return 0;
} //end main
