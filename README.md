```c
// embec.c
#include <stdio.h>
main(c,v)char**v;{
    FILE*i=fopen(v[1],"rb"),*o=fopen(v[2],"w");
    for(fprintf(o,"unsigned char %s[]={",v[3]);
    ~(c=fgetc(i));)fprintf(o,"%d,",c);fputs("};",o);}

// embed.exe sonic.png s sd

// example.c
#include "raylib.h"
#include "s.h"
main(){
    InitWindow(400,300,"X");
    Texture t=LoadTextureFromImage(LoadImageFromMemory(".png",sd,sizeof(sd)));
    for(;!WindowShouldClose();){
        BeginDrawing();
        DrawTexture(t,0,0,WHITE);
        EndDrawing();
    }
    UnloadTexture(t);
    CloseWindow();
}
```
