#include "librerias.h"


void metodoInsercion(int n, char **arr){
   
int i,j;
for (i=1; i<n; i++){

char *aux;
aux=arr[i];

for(j=i-1; j>=0; j--){
if (strcmp (arr[j], aux)<0){
break;
}
 	arr[j+1]=arr[j];
}
arr[j+1]=aux;
}
}