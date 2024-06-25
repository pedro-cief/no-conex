#include <unistd.h>
#include <stdio.h>

void print_char(char c)
{
    write (1, &c, 1);
}
void print_nb(int nb)
{
    if (nb == -2147483647)
    {
        print_char('-');
        print_char('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        nb = -nb * (-1);
        print_char ('-');
    }
    if (nb >=10)
    {
        print_nb (nb / 10);
        print_nb (nb % 10);
    }
    if (nb < 10)
    {
        print_char((nb +'0'));
    }
    }

int main(void)
{
    int nb;
    nb= -432;
    print_nb(nb);
    return (0);
}
