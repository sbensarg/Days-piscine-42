#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c,1);
    return (0);
}
void    fnt(int x, int y)
{
    ft_putchar('A');
    i = -1;
    if(x != 1 && y!= 1)
    {
        while(++i < x - 2)
        {
         ft_putchar('B');
        }
        ft_putchar('C');
    }
}  
void    rush (int x, int y)
{
int i;
int j;

     j = 0;
    while(j <= y )
    {
       i = 0;
       while(i <= x-1)
    {
        if(i == 0 ) 
        ft_putchar('A');

        ft_putchar('B');

        if ( i == 0 && j == y)
        ft_putchar('C');
        i++;
    }
    ft_putchar('\n');
    j++;

    }
}
    int main()
    {
        rush(6,3);
        return (0);
    }
