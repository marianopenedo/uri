#include <stdio.h>

int main ()
{
    int senha;

    for (; ;)
    {
    	scanf ("%d", &senha);

    	if (senha == 2002)
    	{
    		printf ("Acesso Permitido\n");
    		return 0;
    	}
    	else 
    	{
    		printf ("Senha Invalida\n");
    	}

    }
}