#include <stdio.h>
#include <unistd.h>

void is_negative(int n)
{
    write ( 1, &n, 1);

}
int main(void)
{
    int n;
    int p;

    p =-6;
    if ( p >=0){
        n='p';
        is_negative (n);

    }
    else {
        n='N';
        is_negative (n);
    }
    return(0);
}