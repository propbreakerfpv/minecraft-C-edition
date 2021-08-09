main: main.o callback.o
	gcc main.0 callback.o -o main

main.0: main.c
	gcc main.c glfw/callback.c -o main -Wall -lGL -lGLU -lglut -lGLEW -lglfw -lX11 -lXxf86vm -lXrandr -lpthread -lXi -ldl -lXinerama -lXcursor -lm
