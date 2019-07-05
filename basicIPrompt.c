#include <stdio.h>
#include <stdlib.h> //for use with the free function

//including for use of editline
#include <editline/readline.h>
//#include <editline/histedit.h>

//Declare a buffer for user input of size 2048
static char input[2048];

int main (int argc, char** argv){
	//Print version and Exit info
	
	puts("Lispy Version 0.0.0.0.1");
	puts("Press Ctrl+c to Exit\n");

	//Infinite loop	
	while (1){
		//Outputs prompt
		char* input = readline("lispy->"); //also appends to input
		//fputs("lispy->", stdout); //marked out for editline
		
		//Read a line of user input of maximum size 2048
		//fgets(input, 2048,  stdin); //marked out for editline
		
		//Add input to history of inputs
		add_history(input);
		
		//Echo input to the user (note: the newline is striped through the readline, unlike fgets)
		printf("No, you're are %s", input);

		//Free retrieved input because we have to deal with memory allocation (unlike in Java)
		free(input);

	}
	return 0;
}
