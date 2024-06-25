#include <unistd.h>
#include <stdio.h>


void print_alphabet(void)
{
    

  char c = 'A';

    while(c<='Z') {
    
        write(1, &c, 1);

        c++;
    }
}



int main()
{




    print_alphabet();




    return 0;
}