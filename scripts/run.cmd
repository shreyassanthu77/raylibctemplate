
gcc src/main.c -o dist/game.exe -O1 -Wall -std=c99 -L raylib/ -lraylib -lopengl32 -lgdi32 -lwinmm
.\dist\game.exe