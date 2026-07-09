```c
// embed.exe sonic.png s sd

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
