#include <stdio.h>

int
main ()
{

  int mes, ano;

  printf ("digite o mes: ");
  scanf ("%d", &mes);
  printf ("digite o ano: ");
  scanf ("%d", &ano);

  switch (mes)
    {
    case 1:
      printf ("Janeiro\n");
      printf ("Numero de dias: 31");
      break;
    case 2:
      if (ano % 4 == 0)
	{
	  printf ("Fevereiro\n");
	  printf ("Numero de dias: 29");
	}
      else
	{
	  printf ("Fevereiro\n");
	  printf ("Numero de dias 29\n");
	}
      break;
    case 3:
      printf ("MarC'o\n");
      printf ("Numero de dias: 31");
      break;
    case 4:
      printf ("Abril\n");
      printf ("Numero de dias: 30");
      break;
    case 5:
      printf ("Maio\n");
      printf ("Numero de dias: 31");
      break;
    case 6:
      printf ("Junho\n");
      printf ("Numero de dias: 30");
      break;
    case 7:
      printf ("Julho\n");
      printf ("Numero de dias: 31");
      break;
    case 8:
      printf ("Agosto\n");
      printf ("Numero de dias: 31");
      break;
    case 9:
      printf ("Setembro\n");
      printf ("Numero de dias: 30");
      break;
    case 10:
      printf ("Outubro\n");
      printf ("Numero de dias: 31");
      break;
    case 11:
      printf ("Novembro\n");
      printf ("Numero de dias: 30");
      break;
    case 12:
      printf ("Dezembro\n");
      printf ("Numero de dias: 31");
      break;
    default:
      printf ("Nao existe mes %d", mes);
      break;
    }
}

