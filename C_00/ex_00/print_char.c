  #include <unistd.h>
  
  void print_char(char c)
  {
    write(1, &c, 1);
  }

  int main(void)
  {
    char c;

    c = 'A';
    print_char(c);
    return (0);
  }