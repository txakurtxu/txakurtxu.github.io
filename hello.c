#include<stdio.h>

int main(void)  {
  printf("Hello World!\n");
  
  FILE *arch;
  if((arch=fopen("README.md","r"))==NULL)  {
    printf("Oops, could not open README.md\nExiting ...\n");
    return 1;
  }
  char ctmp;
  while(fread(&ctmp,sizeof(char),1,arch))>0)  {
    printf("%c",ctmp);
  }
  fclose(arch);
  
  return 0;
}
