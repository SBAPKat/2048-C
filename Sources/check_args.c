#include "check_args.h"
#include <stdio.h>

int check_args(int argc, char *argv){
	if(argc==2){
		const char* SDL="-SDL";
		const char* OPENGL="-OGL";
		int i=1;
		int SDL_n=0, OPENGL_n=0;
		while (SDL[i]!='\0' && argv[i]!='\0') {
			if(argv[i]==SDL[i]) SDL_n++;
			if(argv[i]==OPENGL[i]) OPENGL_n++;
			i++;
		}
		printf("SDL:%d\n",SDL_n);
		printf("OGL:%d\n",OPENGL_n);
		if(SDL_n==3) return 2;
		if(OPENGL_n==3) return 3;
		return 1;
	}
	else{
	    return 1; //CMD OPTION SELECTED
	}
}

