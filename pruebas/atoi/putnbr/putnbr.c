
#include <unistd.h>

void ft_putnbr(int nb);

int main(void)
{
  ft_putnbr(-42);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
      {
        nb = nb * -1;
        write (1, "-", 1);
      }
    while (nb >= 10)
    {
      ft_putnbr(nb / 10);
      nb = nb % 10;
    }
      nb = (nb % 10) + 48;
      write (1, &nb, 1);

}
