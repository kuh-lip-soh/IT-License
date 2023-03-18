#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 void main()
 {
 char a[ ] = "un\ndeux\ntrois\n";               // Correct, 15 octets
 char b[12] = "un deux trois";                  // Faux -> b[] ou b[14]
 char c[] = 'abcdefg';                          // Faux -> " " au lieu de ' '
 char d[4] = "cinq";                            // Faux -> d[] ou d[5]
 char e[10] = 'x';                              // Faux -> " " au lieu de ' '
 char f[ ] = "Cette " " phrase " "est coupee";  // Correct, 25 octets
 char g[2] = {'a', '\0'};                       // Correct, 2 octets
 char h[4] = {'a', 'b', 'c'};                   // Faux -> Finir par un '\0'
 char i[4] = "'o'";                             // Correct, 4 octets
 }
