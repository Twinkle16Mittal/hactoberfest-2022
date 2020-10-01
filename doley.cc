#include<iostream.h>
#include<conio.h>
class bita
{
private :
static int c;
public :
static void count ( )
{
c++;
}
static void display ()
{
cout«&quot; \nValue of c : &quot;«c;
}
};
int main()
{
clrscr () ;
bita: : display ( ) ;
bita: :count () ;
bita: :count () ;
bita: :display ( ) ;
return 0;
}
