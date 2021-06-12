#include "conio.h"
#include "iostream.h"
#include "stdio.h"
main()
{
FILE *f;
f=fopen("E:\\ALANA.txt","a");
fprintf(f,"%s","ALANA JOY");
fprintf(f,"%s","\nKOTTAKKAL");
fprintf(f,"%s","\nMALAPPURAM DIST.");
fprintf(f,"%s","\nKERALA STATE");
fclose(f);
}
