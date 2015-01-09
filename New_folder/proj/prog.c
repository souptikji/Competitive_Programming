#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE 200

int main()
 {
 char c; 
 int i;       
 FILE *fp = fopen(“file1.c”,“r”);
 //char buf[BUFFER_SIZE];
 //if(fp) fgets(buf, BUFFER_SIZE, fp);
 
 FILE *ofp = fopen(“ofile1.txt”,”w”);
 //if (ofp != NULL){
 //for (i = 0; i < strlen(buf); i++) fputc(buf[i], ofp);
 
 fclose(fp);
 fclose(ofp);
 return 0;
}
       
        
