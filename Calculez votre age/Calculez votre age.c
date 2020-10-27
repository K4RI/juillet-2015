#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int     main()


{

  int annee1;
  int annee2;
  int diffannee;
  int mois1;
  int mois2;
  int diffmois;
  int jour1;
  int jour2;
  int diffjour;


    printf ("Ce court programme vous permettra de calculer votre age exact, au jour pres. Pour cela, suivez les etapes suivantes :\n\n");
    printf ("Entrez votre jour de naissance :\n");
  scanf ("%d", &jour1);

  while (jour1 < 01 || jour1 > 31)
    {
      printf ("Stop tes conneries stp\n");
      printf ("Entrez votre VRAI jour de naissance :\n");
      scanf ("%d", &jour1);
    }

  printf ("Entrez votre mois de naissance :\n");
  scanf ("%d", &mois1);

  while (mois1 < 1 || mois1 > 12)
    {
      printf ("Stop tes conneries stp\n");
      printf ("Entrez votre VRAI mois de naissance :\n");
      scanf ("%d", &mois1);
    }

  printf ("Entrez votre annee de naissance :\n");
  scanf ("%d", &annee1);

  while (annee1 < 1900 || annee1 > 2100)
    {
      printf ("Stop tes conneries stp\n");
      printf ("Entrez votre VRAIE annee de naissance :\n
              ");
      scanf ("%d", &annee1);
    }

  printf ("Entre le jour actuel :\n");
  scanf ("%d", &jour2);

  while (jour2 < 1 || jour2 > 31)
    {
      printf ("Stop tes conneries stp\n");
      printf ("Entrez le VRAI jour actuel :\n");
      scanf ("%d", &jour2);
    }

  printf ("Entrez le mois actuel :\n");
  scanf ("%d", &mois2);

  while (mois2 < 1 || mois2 > 12)
    {
      printf ("Stop tes conneries stp\n");
      printf ("Entrez le VRAI mois actuel :\n");
      scanf ("%d", &mois2);
    }

  printf ("Entrez l'annee actuelle :\n");
  scanf ("%d", &annee2);

   while (annee2 < 2000 || annee2 > 2100)
    {
      printf ("Stop tes conneries stp\n");
      printf ("Entrez la VRAIE annee actuelle :\n");
      scanf ("%d", &annee2);
    }

  while (annee1 > annee2)
    {
      printf ("Stop tes conneries stp\n");
      printf ("Entrez votre VRAIE annee de naissance :\n");
      scanf ("%d", &annee1);
      printf ("Entrez la VRAIE annee actuelle :\n");
      scanf ("%d", &annee2);
    }

  if (jour1 > jour2)
    {
      diffjour = jour2 - jour1 + 30;
    }

  else
    {
      diffjour = jour2 - jour1;
    }

  if (mois1 > mois2)
    {
      diffmois = mois2 - mois1 + 12;
    }
  else
    {
      diffmois = mois2 - mois1;
    }
  if (jour1 > jour2)
    {
      diffmois = diffmois - 1;
    }

    if (diffmois < 0)
    {
        diffmois = diffmois + 12;
    }

  diffannee = annee2 - annee1;
  if (mois1 > mois2)
    {
      diffannee = diffannee - 1;
    }
  printf ("Vous avez actuellement %d ans, %d mois et %d jours.\n\n", diffannee, diffmois, diffjour);
  printf ("Realise avec passion, amour et deontologie par Kari et J-A le 3 juillet 2015. Merci d'avoir utilise ce programme ! :)");
  scanf ("%d", &diffannee);


}
