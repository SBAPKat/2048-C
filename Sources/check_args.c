#include "check_args.h"

int check_args(int argc, char *argv[]){
	printf("argc=%i\n", argc);
	int valid_chars=0;
	if(argc==2){
		char* SDL_option = "-SDL";
		printf("%s\n",SDL_option);
		for(int i=0; i<=3;i++){
			if(argv[1][i]==SDL_option[i]){valid_chars++;}
			else{
				break;
			}
		}
	    if(valid_chars==4){
		printf("SDL SELECTED");
		return 2; //SDL OPTION SELECTED
    	}	
        else{
		    printf("ERROR");
            return -1;
        }
	}
	else{
	    return 1; //CMD OPTION SELECTED
	}
}
