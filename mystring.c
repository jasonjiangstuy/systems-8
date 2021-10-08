#include "mystring.h"

// strlen [ int mystrlen( char *s ) ]
int mystrlen( char *s ){
  int counter =0;
  while (s[counter]){
    counter++;
  }
  return counter;
}

// strcpy/strncpy (choose one) [ char * mystrcpy( char *dest, char *source ) char * mystrncpy( char *dest, char *source, int n) ]
char * mystrncpy( char *dest, char *source, int n){
  int counter = 0;
  while (source[counter] && counter < n){
    dest[counter] = source[counter];
    counter ++;
  }
  return dest;
}

// strcat/strncat (choose one) [ char * mystrcat( char *dest, char *source ) char * mystrncat( char *dest, char *source, int n) ]
char * mystrncat( char *dest, char *source, int n) {
  int pointer = 0;
  while (dest[pointer]){
    pointer++;
  }
  int counter = 0;
  while (counter < n){
    dest[pointer+ counter] = source[counter];
    counter++;
  }

  // dest[pointer + counter] ='\0';
  return dest;
}


// strcmp [ int mystrcmp( char *s1, char *s2 ) ]
int mystrcmp( char *s1, char *s2 ){
  int counter= 0;
  while (s1[counter] || s2[counter]){
    if (s1[counter]== '\0'){
      // second one beats First
      return -1;
    }
    if (s2[counter]=='\0'){
      // first beats second
      return 1;
    }
    if (s1[counter] < s2[counter]){
      // second beat first
      return -1;
    }
    if (s1[counter] < s2[counter]){
      return 1;
      // first beats second
    }
    counter ++;
  }
  return 0;
}


// Your version does not need to return the same exact value as the system version, as long as it returns -, + or 0 when it should.

// strchr [ char * mystrchr( char *s, char c ) ]
char * mystrchr( char *s, char c ){
  while (*(s++)){
    if (*s == c){
      return s;
    }
  }
  return '\0';
}
// You must test every function you write, you will not get full credit for an untested functions.
// You do not need to write 7 functions, only 5, but you need to write 1 of the “n” versions. (So if you do strcpy then you have to do strncat)
// Your program should consist of:
// the main.c file that I have prepared for you, available in the dwsource github repo
// a .c/.h pair of files for your string functions.
// a makefile
// Extra functions:
// The other strn/str version of the functions you wrote above
// strstr [ char * mystrstr( char *s1, char * s2 ) ]
// mysplit [ char * mysplit(char *s, char d) ]
// This is not quite a built in string function, but similar to strsep.
// This function should go through s, replacing each instance of c with a NULL byte.
// While you’re testing this one, contemplate: Why is this useful?
// When you test your functions, run them alongside the regular ones so you can see if they behave the same way or not. Remember you should call them something other than the regular names.
//
// Here’s an example of what your code might look like when run:
//
//   start strings:
//   s1: []
//   s2: [hello]
//   s3: [goodbye]
//
//   Testing strlen(s2):
//   [standard]:     5
//   [mine]:         5
//
//   Testing strcpy(s1, s2):
//   [standard]:     [hello]
//   [mine]:         [hello]
//
//   Testing strncpy(s1, s3, 3):
//   [standard]:     [goolo]
//   [mine]:         [goolo]
//
//   Testing strcat(s1, s3):
//   [standard]:     [goologoodbye]
//   [mine]:         [goologoodbye]
//
//   Testing strncat(s1, s2, 3):
//   [standard]:     [goologoodbyehel]
//   [mine]:         [goologoodbyehel]
//
//   Testing strchr(s1, 'l'):
//   [standard]:     [0x7ffeee8698c3]
//   [mine]:         [0x7ffeee8698c3]
//
//   Testing strchr(s1, 0):
//   [standard]:     [0x7ffeee8698cf]
//   [mine]:         [0x7ffeee8698cf]
//
//   Testing strchr(s1, 'z'):
//   [standard]:     [0x0]
//   [mine]:         [0x0]
//
//   Testing strcmp
//           Comparting ab to abc:
//                   [standard]:     [-1]
//                   [mine]:         [-99]
//           Comparting abc to ab:
//                   [standard]:     [1]
//                   [mine]:         [99]
//           Comparting abc to abc:
//                   [standard]:     [0]
//                   [mine]:         [0]
