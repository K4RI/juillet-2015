#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int     main()

{

  int vie_b;
  int vie_j;
  int coup_j;
  int coup_b;
  int limite;
  int collateral;


  vie_b = 100;
  vie_j = 100;
  srand(time(NULL));
  printf ("Le boss possede 100 points de vie. FRAPPEZ! \n");

  while (vie_j > 0 && vie_b > 0 )
    {
    printf ("\n\nQuelle est la puissance de votre prochain coup ? \n");
      scanf ("%d", &coup_j);
      while ( coup_j > 75)
	{
	  printf ("Vos capacites limitent votre puissance a 75. Reessayez.\n");
	  scanf ("%d", &coup_j);
	}
      limite = rand() % 10 + 20;
      vie_b = (vie_b - coup_j);

      if (coup_j > limite)
	{
	  collateral = coup_j - limite;
	    vie_j = vie_j - collateral;
	    printf ("Dans votre rage, vous vous blessez a hauteur de %d dommages collateraux ", collateral);
	     if (vie_j > 0)
            printf ("(%d PV restants)", vie_j);
	}
      if (vie_b>0)
        {
	  printf ("\nLe boss possede encore %d PV. ", vie_b);
	  if (vie_b<20)
	    printf ("ACHEVEZ-LE!!\n");
        }

      printf ( "\nIl attaque");
      if (vie_b <= 0)
	printf (" dans un dernier espoir...");
      coup_b = rand() % 50;
      printf (" et vous subissez %d dommages ", coup_b);
      vie_j = (vie_j - coup_b);

      if (vie_j > 0)
	{
	  printf ("(%d PV restants) \n", vie_j);
        if (vie_j < 20)
        {
            printf ("Attention, vous etes grievement blesse... \n");
        }
	}

    }

  if (vie_j <= 0 && vie_b <= 0)
      printf ("\n\nEn fin de compte, vous vous entretuez dans un dernier echange de coups.\n\n");
      else
	{
	if (vie_b <= 0)
	printf ("\n\nIL EY DECEDEY 2 LA TETE AUX CROTTES DE NEY!!!\n\n");

	if (vie_j <= 0)
	printf ("\n\nVous etes mort. Ici se termine votre aventure...\n\n");
	}

  printf ("\n\nRealise avec amour par Kari et J-A le 3 juillet 2015.\n\n\n(#cesarenpls)");
scanf ("%d", &coup_j);

}
