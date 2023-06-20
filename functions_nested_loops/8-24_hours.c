#include "main.h"

/**
 * jack_bauer - affiche toutes les heures / minutes
 */

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0 ; hours < 24 ; hours++)
	{
		for (minutes = 0 ; minutes < 60 ; minutes++)
		{
			putchar('0' + (hours / 10));     /*affiche les dizaines*/
			putchar('0' + (hours % 10));     /*affiche les unités genre le 5 de 15*/
			putchar(':');
			putchar('0' + (minutes / 10));   /* Même chose que pour l'heure */
			putchar('0' + (minutes % 10));   /* Même chose que pour l'heure */
			putchar('\n');
		}


	}
