#include <stdio.h>

main()

{	FILE *f1;

char c;

       f1= fopen("input", "w"); 



while((c=getchar()) != EOF) /*get char from keyboard until CTL-Z*/

putc(c,f1); /*write a character to INPUT */



fclose(f1); /* close INPUT */

f1=fopen("input","r"); /* reopen file */



while((c=getc(f1))!=EOF) 

printf("%c", c);



fclose(f1);

} /*end main */
