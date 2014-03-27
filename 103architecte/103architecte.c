/*
** 103architecte.c for 103architecte in /home/delta_q/rendu/103architecte
** 
** Made by Delta Quentin
** Login   <delta_q@epitech.net>
** 
** Started on  Sun Dec 15 20:45:38 2013 Delta Quentin
** Last update Mon Dec 16 10:54:55 2013 Delta Quentin
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int	print_sp()
{
  printf("        ");
}

int	print_0()
{
  printf("0.000 ");
}

int	main(int ac, char **av)
{
  float	nb1=0, nb2=0, nb3=0, nb4=0;
  char	op;
  int	inb1=0, inb2=0, inb3=0, inb4=0;
  float	resx=0, resy=0;

  if (ac > 0 && ac < 5)
    {
      printf("le nombre de parametre est incorrect.\n");
    }
  else
    {
      nb1 = atoi(av[1]);
      inb1 = atoi(av[1]);
      nb2 = atoi(av[2]);
      inb2 = atoi(av[2]);
      op = *av[3];
      nb3 = atoi(av[4]);
      inb3 = atoi(av[4]);
    }
  if (ac == 6)
    {
      nb4 = atoi(av[5]);
      inb4 = atoi(av[5]);
    }
  if (op == 'T') /* translation */
    {
      printf("translation de vecteur(");
      printf("%i", inb3);
      printf(",");
      printf("%i", inb4);
      printf(")\n");
      print_sp(); /*premiere ligne matrice*/
      printf("%.3f", nb4);
      printf(" ");
      print_0();
      printf("%.3f", nb3);
      printf("\n");
      print_sp(); /*deuxieme ligne matrice*/
      print_0();
      printf("%.3f", nb4);
      printf(" ");
      printf("%.3f", nb4);
      printf("\n");
      print_sp(); /*troisieme ligne matrice*/
      print_0();
      print_0();
      printf("%.3f\n", nb4);
      /*derniere ligne programme*/
      printf("(");
      printf("%i", inb1);
      printf(",");
      printf("%i", inb2);
      printf(") => (");
      resx = inb1 + inb3;
      resy = inb2 + inb4;
      printf("%.f", resx);
      printf(",");
      printf("%.f", resy);
      printf(")\n");
    }
  if (op == 'H') /* homothétie */
    {
      printf("homothétie de rapports ");
      printf("%i", inb3);
      printf(" et ");
      printf("%i", inb4);
      printf("\n");
      print_sp(); /*premiere ligne matrice*/
      printf("%.3f", nb3);
      printf(" ");
      print_0();
      print_0();
      printf("\n");
      print_sp(); /*deuxieme ligne matrice*/
      print_0();
      printf("%.3f", nb4);
      printf(" ");
      print_0();
      printf("\n");
      print_sp(); /*troisieme ligne matrice*/
      print_0();
      print_0();
      printf("%.3f\n", nb4);
      /*derniere ligne programme*/
      printf("(");
      printf("%i", inb1);
      printf(",");
      printf("%i", inb2);
      printf(") => (");
      resx = inb1 * inb3;
      resy = inb2 * inb4;
      printf("%.f", resx);
      printf(",");
      printf("%.f", resy);
      printf(")\n");
    }
  if (op == 'R') /* rotation */
    {
      printf("rotation d'angle ");
      printf("%i", inb3);
      printf(" degrés\n");
      print_sp(); /*premiere ligne matrice*/
      print_0();
      printf("%.3f", (nb1 * -1));
      printf(" ");
      print_0();
      printf("\n");
      print_sp(); /*deuxieme ligne matrice*/
      printf("%.3f", nb1);
      printf(" ");
      print_0();
      print_0();
      printf("\n");
      print_sp(); /*troisieme ligne matrice*/
      print_0();
      print_0();
      printf("%.3f\n", nb1);
      /*derniere ligne programme*/
      printf("(");
      printf("%i", inb1);
      printf(",");
      printf("%i", inb2);
      printf(")  => (");
      resx = (cos(inb3) * inb1) - (sin(inb3) * inb2);
      resy = (sin(inb3) * inb1) + (cos(inb3) * inb2);
      printf("%.f", resx);
      printf(",");
      printf("%.f", resy);
      printf(")\n");
    }
  if (op == 'S') /* symétrie */
    {
      printf("symétrie par rapport à un axe incliné de ");
      printf("%i", inb3);
      printf("degrés\n");
      print_sp(); /*premiere ligne matrice*/
      printf("%.3f", nb2);
      printf(" ");
      print_0();
      print_0();
      printf("\n");
      print_sp(); /*deuxieme ligne matrice*/
      print_0();
      printf("1.000 ");
      print_0();
      printf("\n");
      print_sp(); /*troisieme ligne matrice*/
      print_0();
      print_0();
      printf("1.000\n");
      /*derniere ligne programme*/
      printf("(");
      printf("%i", inb1);
      printf(",");
      printf("%i", inb2);
      printf(") => (");
      resx = inb1 + inb3;
      resy = inb2 + inb4;
      printf("Ne marche pas pour la symétrie, désolé.\n");
    }
}
