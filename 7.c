#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>


typedef struct {
  char *model;
  int capacity;
}Aircraft;
int main()
{
  Aircraft af1;
  Aircraft af2;
  Aircraft af3;

  af1.model = (char*)malloc(strlen("Thunderbird") + 1);
  strcpy(af1.model, "Thunderbird");
  af1.capacity = 320;
  af2 = af1;  
  printf("%s\n", af1.model); 
  strcpy(af2.model, "BlackHawk");
  printf("%s\n", af1.model); 

  af3.model = (char*)malloc(strlen("Thunderbird") + 1);
  strcpy(af3.model, af1.model);
  af3.capacity = af1.capacity;
  strcpy(af1.model, "Thunderbird");
  printf("%s\n", af1.model);          
  
  strcpy(af3.model, "BlackHawk");
  printf("%s\n", af1.model); 
  free(af1.model);
  free(af3.model);
  return 0;
}

