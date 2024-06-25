#include <unistd.h>
#include <stdio.h>


void print_numbers(void)
{
    

  char c = '0';

    while(c<='9') {
    
        write(1, &c, 1);

        c++;
    }
}



int main()
{




    print_numbers();




    return 0;
}