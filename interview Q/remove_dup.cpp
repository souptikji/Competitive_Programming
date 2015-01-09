#include<stdio.h>

void remove(char s[])
{
     int rep[26],i,j;
     for(i=0;i<26;i++) rep[i]=0;
     for(i=0;s[i-1]!='\0';i++){ if(s[i]=='\0') s[i-1]=s[i];
                              else if(rep[s[i]-'a']==0) rep[s[i]-'a']++;
                              else for(j=i;s[j-1]!='\0';j++) s[j]=s[j+1];
                              }
}
     

main()
{
      int t; scanf("%d",&t);
      while(t--)
      {
        char str[1000];
        printf("Enter the string ");
        scanf("%s",&str);
        printf("\n");
        remove(str);
         printf("The string is %s\n ",str);
        }

}
