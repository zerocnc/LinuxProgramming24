// Error Compliling Program with a Missing Variable Declaration

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#define SHOW_PID /* Macro is defined */

int main( int argc, char **argv){
/*	pid_t PID;	 // Comment out! */

	(void) argc;
	(void) argv;

#ifdef SHOW_PID
	PID = getpid();	/* Get Process ID */
	printf("Hello World! PRocess ID is %d\n", (int)PID);
#else
	puts("Hello world!");
#endif
	return 0;
}
