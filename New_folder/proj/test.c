#include<stdio.h>
#include<string.h>

	int main()
	{
    		FILE *ptr_file;
   			FILE *optr_file;
    		char buf[1000];
    		char str[8];
   		    int i,j;

// file1 start
    		ptr_file =fopen("file1.c","r");
    		if (!ptr_file) return 1;
            fgets(buf,1000, ptr_file);
            optr_file =fopen("ofile1.txt", "w");
            if (!optr_file) return 1;
            for(i=0;i+8<strlen(buf);i++)
            {    char str2[]="  ";
                 for(j=0;j<8;j++) fprintf(optr_file,"%c", buf[i+j]);
                 fprintf(optr_file,"%s", str2);
               }
        fclose(ptr_file);
        fclose(optr_file);
//file1 end

// file2 start
    		ptr_file =fopen("file2.c","r");
    		if (!ptr_file) return 1;
            fgets(buf,1000, ptr_file);
            optr_file =fopen("ofile2.txt", "w");
            if (!optr_file) return 1;
            for(i=0;i+8<strlen(buf);i++)
            {    char str2[]="  ";
                 for(j=0;j<8;j++) fprintf(optr_file,"%c", buf[i+j]);
                 fprintf(optr_file,"%s", str2);
               }
        fclose(ptr_file);
        fclose(optr_file);
//file2 end

// file3 start
    		ptr_file =fopen("file3.c","r");
    		if (!ptr_file) return 1;
            fgets(buf,1000, ptr_file);
            optr_file =fopen("ofile3.txt", "w");
            if (!optr_file) return 1;
            for(i=0;i+8<strlen(buf);i++)
            {    char str2[]="  ";
                 for(j=0;j<8;j++) fprintf(optr_file,"%c", buf[i+j]);
                 fprintf(optr_file,"%s", str2);
               }
        fclose(ptr_file);
        fclose(optr_file);
//file3 end

// file4 start
    		ptr_file =fopen("file4.c","r");
    		if (!ptr_file) return 1;
            fgets(buf,1000, ptr_file);
            optr_file =fopen("ofile4.txt", "w");
            if (!optr_file) return 1;
            for(i=0;i+8<strlen(buf);i++)
            {    char str2[]="  ";
                 for(j=0;j<8;j++) fprintf(optr_file,"%c", buf[i+j]);
                 fprintf(optr_file,"%s", str2);
               }
        fclose(ptr_file);
        fclose(optr_file);
//file4 end

// file5 start
    		ptr_file =fopen("file5.c","r");
    		if (!ptr_file) return 1;
            fgets(buf,1000, ptr_file);
            optr_file =fopen("ofile5.txt", "w");
            if (!optr_file) return 1;
            for(i=0;i+8<strlen(buf);i++)
            {    char str2[]="  ";
                 for(j=0;j<8;j++) fprintf(optr_file,"%c", buf[i+j]);
                 fprintf(optr_file,"%s", str2);
               }
        fclose(ptr_file);
        fclose(optr_file);
//file5 end

return 0;
}
