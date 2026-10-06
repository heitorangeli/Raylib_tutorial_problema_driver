@echo off
C:\w64devkit\bin\g++.exe main.cpp -o main.exe -I C:\raylib\include -L C:\raylib\lib -lraylib -lopengl32 -lgdi32 -lwinmm
if %errorlevel%==0 main.exe