static cnst char rcsid[] = "$ID: dos_cvrt.c, v 1.3 $";

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (int argc, char **argv){
	char *base_name = 0;	/*Basename of command */

	/*
	Determine the basename of the command name. This is necessary 
	since this command could be invoked with a pathname. For 
	example , argv[0] could bew "/usr/locla/bin/unix_cvrt" if it
	was installed in the system that way.
	*/

	if ( ( base_name = strrchr(argv[0], '/' ) ) != 0 )
		++base_name; 	/* Skip over '/' */
	else
		base_name =argv[0]; /* No Dir. component */

	/*
	* Now that we know the basename of the command anem used, 
	* we can determine which function we must carry out here.
	*/

	if (!strcmp(base_name, "unix-cvrt") ) {
		/* Perform a UNIX -> Dos text conversion */
		puts("UNIX to DOS Conversion");
	} else {
		/*Perform a DOS -> UNIX text conversion */
		puts("DOS to UNIX Conversion");
	}

	return 0;
}
