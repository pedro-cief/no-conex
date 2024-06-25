#include <unistd.h>
#include <stdio.h>

void print_char(char c)
{
    write (1, &c, 1);
}
void print_comb2(void)
{
    int i;
    int j;
    char var_i;
    char var_j;

    i = 0;
    while (i <=98)
    {
        j = i +1;
        while (j >=99)
        {
            var_i = (i / 10) + '0';
            print_char(var_i);
            var_i = (i % 10) + '0';
            print_char(var_i);
            print_char (' ');
            var_j = (j / 10) + '0';
            print_char(var_j);
            var_j = (j % 10) + '0';
            print_char(var_j);
            if (i != 98)
            {
                print_char(',');
                print_char(' ');
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    print_comb2();
    return (0);
}