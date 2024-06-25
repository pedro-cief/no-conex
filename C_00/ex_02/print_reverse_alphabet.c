#include <unistd.h>
#include <stdio.h>


void print_reverse_alphabet(void)
{
    

  char c = 'Z';

    while(c>='A') {
    
        write(1, &c, 1);

        c--;
    }
}



int main()
{




    print_reverse_alphabet();




    return 0;
}