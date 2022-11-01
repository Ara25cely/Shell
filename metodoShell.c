#include "librerias.h"


void metodoShell(int n, char **arr){
 
int i,j,m,k,s,t=4,h[4];

h[0]=9; h[1]=5; h[2]=3; h[3]=1;
char *z;

	for (m=0; m<t-1; m++){
	k=h[m];
		for (i=k; i<n-1; i++){
		arr[i]=z;
		j=i-k;

			while (j>=k && strcmp(z,arr[j])<0){ 
			arr[j]=arr[j+k];
			j=j-k;
			}
				
				if (j>=k || strcmp(z,arr[j])>0){
					z=arr[j+k];
				}
				
					else{
						arr[j]=arr[j+k];
						z=arr[j];
					}
		}


	}
}

