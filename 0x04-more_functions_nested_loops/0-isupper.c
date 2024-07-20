#include "main.h"

/**
 * This function returns the cahacter and
 * 1 if it is upper case 
 * 0 if it is lower case
 */

int _isupper(char c)
{
	if(c >= 'A' && c <= 'Z')
	{
	 return(1);
	}
	else 
		return(0);	
}
