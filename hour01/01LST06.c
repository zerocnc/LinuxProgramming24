// An example of Uneused Variable Declarations

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#define SHOW_PID /* Macro Not defined */

int main( int argc, char **argv){
	pid_t PID;	/* Process ID */

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
