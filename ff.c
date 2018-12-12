/*

make strtok  2018044984 hyo-jeong

*/

#include <stdio.h>
#include <string.h>
char* hyo_strtok();

int main(void){
	 
	 const char *sep = " ,.!";
	 char str1[999] = "AM I NERD ?";
	 char str2[999] = "YOU ARE ALREADY NERD ^^";

	 char* fuk = strtok(str1,sep);
	 while(fuk != NULL){
	     printf("%s\n",fuk);
	     fuk = strtok(NULL,sep);
	     }
	 
	 printf("\n");

	 char* fuc = hyo_strtok(str2,sep);
	 while(fuc != NULL){
	     printf("%s\n",fuc);
	     fuc = hyo_strtok(NULL,sep);
	     }

	 return 0;
}


char* hyo_strtok(char *str,const char *sep){
	 
	 static char *fuc = NULL;
	 static char ff[999];
	
	 if(str != NULL) fuc = str;

	 int l1 = strlen(fuc);
	 int l2 = strlen(sep);
	 int i,k;

         for(i = 0;i<l1;i++){
	     for(k = 0;k<l2;k++){
		     if(fuc[i] == sep[k]) break;
		     }
		 if(k == l2) break;
		 }

	 fuc = fuc + i;

	 for(i = 0;i<l1;i++){
	     for(k = 0;k<l2;k++){
		     if(fuc[i] == sep[k]) break;
		     }
		 if(k<l2){
		     strcpy(ff,fuc);
		     ff[i] = 0;
		     fuc += i+1;
			 
		     return ff;
	             }
		 }
	
	 return NULL;
}
