// The prefered way to avoid an assignment Warning

#include <string.h>

char *
Basename(char * pathname ){
	char *cp;	/* Work Pointer */

	if ( ( cp = strrchr(pathname, '/' ) ) != 0 )
		return cp + 1; /* Return basename pointer */
	return pathname; /* No directoyr component */
}


