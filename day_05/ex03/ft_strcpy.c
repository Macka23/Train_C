#include <stdio.h>
#include <stdlib.h>

void * idk_strcpy (char * dest, const char * src){

    unsigned int i = 0; 

    if ( src != NULL ){
        while( src[i] != '\0')
        {
            dest[i] = src[i];
            ++i;
        }

        dest[i] = '\0';
        return dest;
    }else{
        exit(1);
    }
}

int		main(void)
{
	char ligne[3] = "Oui";
	char dest[2] = "Non";
	char *result = idk_strcpy(dest, ligne);

	printf("ft_strcpy = %s\n", result);
	return(0);
}