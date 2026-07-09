#include <stdio.h>
main(c,v)char**v;{
    FILE*i=fopen(v[1],"rb"),*o=fopen(v[2],"w");
    for(fprintf(o,"unsigned char %s[]={",v[3]);
    ~(c=fgetc(i));)fprintf(o,"%d,",c);fputs("};",o);}
