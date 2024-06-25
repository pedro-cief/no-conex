#include <unistd.h>

void print_comb(void)
{
    char i;
    char j;
    char k;
    
    i = '0';
    j = '1';
    k = '2';
    while (i < j)
    {
        j = i + 1;
        while (j < k)
        {
            k = j + 1;
            while (k <= '9')
            {
                write (1, &i, 1);
                write (1, &j, 1);
                write (1, &k, 1);
                if (i != '7' || j != '8' || k != '9')
                {
                    write (1, ",", 2);
                }
                k++;
            }
            j++;
        }
        i++;
    }
}

int main(void) 
{
    print_comb();
    return (0);
}