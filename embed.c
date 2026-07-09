#include <stdio.h>
main(c) {
    FILE*i=fopen("test.txt","rb"),*o=fopen("a.h","w");
    for(fputs("unsigned char a[]={",o);~(c=fgetc(i));)
    fprintf(o,"%d,",c);fputs("};",o);}