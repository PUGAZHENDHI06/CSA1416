#include<stdio.h>
#include<string.h>
int main()
{
   char text[50], blank[50];
   int c = 0, d = 0;
 
   printf("Enter text\n");
   gets(text);
   while (text[c] != '\0') 
   {
      if ((text[c] == ' ')||(text[c] == '\t')) 
	  {
         int temp = c + 1;
         if (text[temp] != '\0') 
		 {
            while ((text[temp] == ' ') && (text[temp] != '\0'))
			{
               if (text[temp] == ' m') 
			   {
                  c++;
               }  
               temp++;
            }
         }
      }
      blank[d] = text[c];
      c++;
      d++;
   }
   blank[d] = '\0';
   printf("Text after removing blanks\n%s\n", blank);
   return 0;
}
