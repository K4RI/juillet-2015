/*
** juste_prix.c for  in /home/communication6
**
** Made by com6 epitech
** Login   <communication6@epitech.net>
**
** Started on  Wed Jul  1 14:45:44 2015 com6 epitech
** Last update Fri Jul  3 16:46:51 2015 com6 epitech
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	main()
{
  int   y;
  int	x;
  int   essai;

  printf ("L'ordinateur a choisi au hasard un nombre entier compris entre 0 et 100.\n\n");
  essai = 0;
  srand(time(NULL));
  x = rand() % 100;
 printf ("D'apres vous, quel est le nombre ?\n");
  while (x != y)
    {
      scanf ("%d",&y);
      if (x < y)
	printf ("C'est moins...\n");
      if (x > y)
	printf ("C'est plus...\n");
      essai = essai + 1;
    }
  printf ("\nBINGO!!! Vous avez trouve le nombre en %d essais !\n\n", essai);
  printf ("Merci d'avoir joue !");
scanf ("%d",&y);
}
