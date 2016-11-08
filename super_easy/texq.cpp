#include <iostream>

using namespace std;

int main()
{
  char c;
  bool tv=1;
  freopen("input.in","r",stdin);
  freopen("output.out","w",stdout);
  while(scanf("%c",&c) != EOF)
   {
     if(c == '"')
     {
      if(tv)
         printf("``");
      else
         printf("''");
      tv = !tv;
     }
     else
       printf("%c",c);
   } 
  return 0;
}
