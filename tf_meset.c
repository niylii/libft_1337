#include <ctype.h>

#include <stdio.h>
#include <bsd/string.h>
int main()
{
printf("%d\t",isalpha (EOF));
printf("%d\t",isdigit (EOF));
printf("%d\t",isalnum (EOF));
printf("%d\t",isascii (EOF));
printf("%d\t",isprint (EOF));
}