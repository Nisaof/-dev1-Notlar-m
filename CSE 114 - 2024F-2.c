              CSE 114 - 2024F
              
// 30.09 Monday
//Mustafa hocanın ders notları
#include <stdio.h>
#define yazdir printf
#define my_age 20
// #define PI 3.14

int main(){
    // const int age = 20;
    yazdir( "Hello, my age is: %d\n", my_age );
}

/*
 INPUT : source code
     |
     |
    \/
 preprocessor
 OUTPUT : source code
*/

/*  contents of stdio.h added  */
int main(){
    printf( "Hello, my age is: %d\n", 20 );
}


/*
 INPUT : source code
     |
     |
    \/
 compiler
 OUTPUT : machine instructions
*/

/*
5FA34EF5
010111111010 ...
*/



/******************************************************************************
Program to convert a distance in miles to equivalent kilometers
*******************************************************************************/

#include <stdio.h> // printf, scanf definitions
#define KMS_PER_MILE 1.6 // conversion constant

int main( void ){
    // variable declarations
    /*
    double miles; // the distance in miles
    double kms; // eqv distance in kms
    */
   
    double miles = 1.0, // the distance in miles
           kms;   // eqv distance in kms
   
    printf( "Enter distance in miles: " );
    scanf( "%lf", &miles ); // &: address of - say 100000
   
    kms = miles * KMS_PER_MILE;
   
    printf( "The distance is %.2f kms.\n", kms );
   
    //multiply( 5, 6, 7 );
   
    return 0; // run to completion without error
}

// scanf inputs: "%lf" 100000












// 02.10 Wednesday

#include <stdio.h>

int main(){
    char ch1 = 'A', ch1_lower;
    printf( "Code of %c: %d\n", ch1, ch1 );
    ch1++;
    printf( "Code of %c: %d\n", ch1, ch1 );
    ch1 = 'A';
    printf( "\n\n" );
    for( int i=0; i < 26; i++ ) printf( "Code of %c: %d\n", ch1+i, ch1+i ); 
    
    ch1 = 'z'; // ch1 = 122; in ASCII
    printf( "\n\n" );
    for( int i=0; i < 26; i++ ) printf( "Code of %c: %d\n", ch1-i, ch1-i ); 
    
    ch1 = '0';
    printf( "\n\n" );
    for( int i=0; i < 10; i++ ) printf( "Code of %c: %d\n", ch1+i, ch1+i );
    
    
    ch1 = 57;
    printf( "ch1: %d, 2*ch1 = %d\n", ch1-'0', 2*(ch1-'0') ); 
    
    ch1 = 'H';
    // ch1_lower = order_of_char + 'a';
    ch1_lower = ( ch1 - 'A' ) + 'a';
    printf( "Lowercase of %c is: %c\n", ch1, ch1_lower );
    
    ch1 = 'm';
    if(  ) printf( "Lowercase\n" ); else if( ... ) printf( "Uppercase\n" );
    
    
}









// 7.10 Monday

#include <stdio.h>

int main(){
    char ch1 = 'A', ch1_lower;
    printf( "Code of %c: %d\n", ch1, ch1 );
    ch1++;
    printf( "Code of %c: %d\n", ch1, ch1 );
    ch1 = 'A';
    printf( "\n\n" );
    for( int i=0; i < 26; i++ ) printf( "Code of %c: %d\n", ch1+i, ch1+i ); 
    
    ch1 = 'z'; // ch1 = 122; in ASCII
    printf( "\n\n" );
    for( int i=0; i < 26; i++ ) printf( "Code of %c: %d\n", ch1-i, ch1-i ); 
    
    ch1 = '0';
    printf( "\n\n" );
    for( int i=0; i < 10; i++ ) printf( "Code of %c: %d\n", ch1+i, ch1+i );
    
    
    ch1 = 57;
    printf( "ch1: %d, 2*ch1 = %d\n", ch1-'0', 2*(ch1-'0') ); 
    
    ch1 = 'H';
    // ch1_lower = order_of_char + 'a';
    ch1_lower = ( ch1 - 'A' ) + 'a';
    printf( "Lowercase of %c is: %c\n", ch1, ch1_lower );
    
    ch1 = 'M';
    if( 'a' <= ch1 && ch1 <= 'z' ) printf( "Lowercase\n" ); else if( 'A' <= ch1 && ch1 <= 'Z' ) printf( "Uppercase\n" );
    
    printf( "cch1:%-10c%-10c\n", ch1, ch1 );
    printf( "iint:%-10d%-10d\n", 44, 66 );
    printf( "real:%-10f%-10f\n", 3.5, 0.45 );
    printf( "real:%-10.2f%-10.2f\n", 3.5, 4.0 );
    
    
    printf( "enter a char: " ); scanf( "%c", &ch1 );
    printf( "ch1:%c\n", ch1 );
    printf( "enter a char: " ); scanf( " %c", &ch1 );
    printf( "ch1:%c\n", ch1 );
    printf( "ch1:%c\n", 'z' );
}


/* place holders
            printf     scanf  
    int       %d         %d 
    float     %f         %f 
    double    %f         %lf 
    char      %c         %c 
    unsigned  %u         %u
    pointer   %p         
*/





#include <stdio.h>

int main(){
    int m, n;
    double p, x, y;
    int x_rounded;
    
    m = 3;
    n = 2; 
    p = 2.0;
    
    x = m / p;
    printf( "x: %.2f\n", x );
    
    // y = m / (double) n; // - WORKS
    // y = (double) m / n; // - WORKS
    y = (double) (m / n); // - DOES NOT WORK
    printf( "y: %.2f\n", y );
    
    // Rounding a real number
    x = 3.8;
    /*
    x_rounded = ( int ) x;
    printf( "The rounded value of %f is: %d.\n", x, x_rounded );
    
    if( x - x_rounded >= 0.5 ) x_rounded++;
    
    printf( "The rounded value of %f is: %d.\n", x, x_rounded );
    */
    
    x_rounded = ( int ) (x + 0.5);
    printf( "The rounded value of %f is: %d.\n", x, x_rounded );
    
}





#include <stdio.h>

int multiply( int, int );

int main(){
   int x = 5, y = 10, result;
   result = multiply( x, y ); // result = 50;   result = 20 + 30;
   printf( "%d times %d is equal to: %d\n", x, y, result );
}

int multiply( int a, int b ){
    int z;
    z = a * b;
    a = a + 100;
    return z;
}











// 09.10 Wednesday

#include <stdio.h>

void triangle( void ){
    printf( "  *\n" );
    printf( " * *\n" );
    printf( "*****\n" );
}

int main(){
    triangle();
    printf( "\n\n" );
    triangle();
}





// find the area of a cylinder

#include <stdio.h>
#include <math.h> // M_PI can be used 
//#define M_PI 3

double circle_area( double r );
double circle_circum( double r );
double rect_area( double w, double h );

double cylinder_area( double r, double h ){
    // 2 * base_area + side_area
    return 2 * circle_area( r ) + rect_area( circle_circum( r ), h );
}

int main(){
    double r = 1.0, h = 10.0, area;
    area = cylinder_area( r, h );
    printf( "Cyl area: %f\n", area );
}

double circle_area( double r ){
    return M_PI * r * r;
}

double circle_circum( double r ){
    return 2 * M_PI * r;
}

double rect_area( double w, double h ){
    return w * h;
}




#include <stdio.h>

int max2( int a, int b );
int max3( int x, int y, int z );
int max4( int w, int x, int y, int z );

int main(){
    int a = 5, b = 10, c = 3, d = 88, k, l, m;
    // print max of a, b         k
    // print max of a, b, c      l
    // print max of a, b, c, d   m
    k = max2( a, b );
    printf( "max of %d and %d: %d\n", a, b, k );
    l = max3( c, b, a );
    printf( "max of %d, %d and %d: %d\n", a, b, c, l );
    m = max4( a, b, c, d );
    printf( "max of %d, %d, %d and %d: %d\n", a, b, c, d, m );
}

int max2( int a, int b ){
    if( a > b ) return a;
    /* else */  return b;
}

int max3( int x, int y, int z ){
    /*
    int temp;
    temp = max2( x, y );
    return max2( temp, z );
    */
    return max2( max2( x, y ), z );
}

int max4( int w, int x, int y, int z ){
    return max2( w, max3( x, y, z ) );
    // return max2( max2( w, x ), max2( y, z ) );
}












// 14.10 Monday

#include <stdio.h>

/*
General form of an if statement:

if ( condition ) statement_T; else statement_F;
if ( condition ) statement_T;


if ( condition )
    statement_T;
else
    statement_F;


if ( condition )
    statement_T;



if (x>0) while (y<5) y++; else x = x+1; // THIS IS OKAY

if (x>0) while (y<5) y++; x = 0; else x = x+1; // THIS IS NOT OKAY

if (x>0) { while (y<5) y++; x = 0; } else x = x+1; // THIS IS OKAY

*/

int main(){
    int a = 10, b = 20, c = -30, d = 0;
    
    /*
    if( a < b )
        c = 50;
        d = 100;
    else
        c = 200;
        
        
    if( a < b ) c = 50; d = 100; else c = 200;
    
    if( a < b )
        c = 50;
    d = 100;
    
    else c = 200;
    */
    
    // if( a < b ) { c = 50; d = 100; } else c = 200; - CORRECT
    
    if( a < b ) {
        c = 50;
        d = 100;
    }
    else {
        c = 200;
    }
        
        
    printf( "c: %d d: %d\n", c, d );
    
/*
General form of an if statement:

if ( condition ) statement_T; else statement_F;
*/
    a = 10; b = -20; c = 30; d = 0;
    if( a < b )
        if( b < c )
            d = 500;
    else d = 400; // logically INCORRECT indentation
    
    /*
    if( a < b ) if( b < c ) d = 500; else d = 400;
    if( a < b ) st_T;
    */
    
    // if( a < b ) { if( b < c ) d = 500; } else d = 400;
    
    if( a < b ){
        if( b < c )
            d = 500;
    }
    else d = 400; // logically CORRECT indentation
   
    printf( "d: %d\n", d );
}






#include <stdio.h>

int main(){
    int a = 15, b = 1, c, d;
    printf( "a<b: %d\n", a<b );
    
    c = (a<b) * 100 + (a==b) * 200 + (a>b) * 300;
    
    if( a < b ){
        c = 100;
    }
    else{
        if( a == b ) c = 200;
        else c = 300;
    }
    
    printf( "c: %d\n", c );
    
    if( a ) printf( "Yes\n" ); else printf( "No\n" );
    
    a = -5; b = 1; c = 10; d = 4;
    if( a + b < c + d ) printf( ".Yes\n" ); else printf( ".No\n" );
    if( (a + b) < (c + d) ) printf( "..Yes\n" ); else printf( "..No\n" );
    if( a + ( b < c ) + d ) printf( "...Yes\n" ); else printf( "...No\n" );
    if( -5 + 1 + 4 ) printf( "...Yes\n" ); else printf( "...No\n" );
    
    a = -5; b = -4; c = -3;
    if( a < b < c ) printf( "x1 Yes\n" ); else printf( "x1 No\n" );
    if( 1 < c ) printf( "x2 Yes\n" ); else printf( "x2 No\n" );
    
    if( a < b && b < c ) printf( "x3 Yes\n" ); else printf( "x3 No\n" );
}





#include <stdio.h>

/*

90 <= grade <= 100 : A 
80 <= grade < 90 : B
70 <= grade < 80 : C
0 <= grade < 70 : F

*/

int main(){
    int grade = 85;
    char letter;
    
    if( 90 <= grade && grade <= 100 )
        letter = 'A';
        
    if( 80 <= grade && grade < 90 )
        letter = 'B';
        
    if( 70 <= grade && grade < 80 )
        letter = 'C';
        
    if( 0 <= grade && grade < 70 )
        letter = 'F';



    if( 90 <= grade )
        letter = 'A';
    else
        if( 80 <= grade )
            letter = 'B';
        else
            if( 70 <= grade )
                letter = 'C';
            else
                letter = 'F';
                
    if( 90 <= grade )
        letter = 'A';
    else if( 80 <= grade )
        letter = 'B';
    else if( 70 <= grade )
        letter = 'C';
    else letter = 'F';
        
    printf( "grade: %d letter grade: %c\n", grade, letter );
}




int 
 8. main(void) 
 9. { 
10. char class; /* input - character indicating class of ship */ 
11.
 12. /* Read first character of serial number */ 
 13. printf("Enter ship serial number> "); 
14. scanf("%c", &class); /* scan first letter */ 
 15.
 16. /* Display first character followed by ship class */ 
 17. printf("Ship class is %c: ", class); 
 18. switch (class) { 
 19. case 'B': 
 20. case 'b': 
 21. printf("Battleship\n"); 
 22. break; 
 23. case 'C': 
 24. case 'c': 
 25. printf("Cruiser\n"); 
 26. break; 
 27. case 'D': 
 28. case 'd': 
 29. printf("Destroyer\n"); 
 30. break; 
 31. case 'F': 
 32. case 'f': 
 33. printf("Frigate\n"); 
 34. break; 
 35. default: 
 36. printf("Unknown\n"); 
 37. } 
 38.
 39. return (0); 
 40. } 
 
 
 
 
 
 
 
 
 
 
 
 
 

// 16.10 Wednesday

/* General form of a while loop

    while( condition )
        statement;
        
    Ex: 
    x = 0;
    while( x < 100 ); // the loop is finished because of empty statement (  ;  ), will run infinitely
        { // this statement will never be reached
        y = y + 1;
        x = x + 1;
    } 

*/

#include <stdio.h>

int main()
{
    int x = 0, y;
    while( x < 10 ); // the loop is finished because of empty statement (  ;  ), will run infinitely
    { // this statement will never be reached
        y = y + 1;
        x = x + 1;
        printf( "x: %d\n", x );
    } 
}





#include <stdio.h>

// print ints from 1 to n 
void print_1_n( int );

// print row1: 1 2 ... a --- row2: 1 2 ... a a+1 --- row3: 1 2 ... a+2 ... row1: 1 2 ... b
void print_1_a_b( int, int );

int main(){
    //scanf( "%d", &n );
    print_1_n( 5 );
    printf( "\n" );
    print_1_n( 6 );
    printf( "\n" );
    print_1_n( 7 );
    printf( "\n" );
    print_1_n( 8 );
    printf( "\n" );
    print_1_n( 9 );
    printf( "\n" );
    
    printf( "\n" );printf( "\n" );printf( "\n" );
    
    
    print_1_a_b( 3, 9 );
}

void print_1_n( int n ){
    int i; // loop control variable - lcv
    
    i = 1; // initialization of lcv
    while( i <= n ){ // repetition condition
        printf( "%d ", i );
        i++; // update of lcv
    }
    
    // while( i <= n ) printf( "%d ", i++ );
}

void print_1_a_b( int a, int b ){
    int n;
    n = a;
    while( n <= b ){
        print_1_n( n );
        printf( "\n" );
        n++;
    }
}
















// 21.10 Monday

#include <stdio.h>

int main(){
    int a = 10, b = 40;
    
    a += 5; // a = a + 5;   a: 15
    b /= 2; // b = b / 2:   b: 20
    
    printf( "a: %d   b: %d\n", a, b );
    
    a++; // a: 16
    --b; // b: 19
    printf( "a: %d   b: %d\n", a, b );
    
    a = a + b++; // a = 16 + 19 = 35 ---- b: 20
    printf( "a: %d   b: %d\n", a, b );
    
    a = 16; b = 19;
    a = a + ++b; // b: 20 ---- a = 16 + 20 = 36
    printf( "a: %d   b: %d\n", a, b );
}





// read grades until negative, print avg

#include <stdio.h>

int main(){
    int grade, sum = 0, num = 0;
    double avg;
    printf( "Enter first grade: " );
    scanf( "%d", &grade );
    
    while( grade >= 0 ){
        // if( grade >= 0 ) NO NEED - grade already >= 0
        sum += grade;
        num++;
        printf( "Enter next grade: " );
        scanf( "%d", &grade ); // update of lcv       
    }
    
    // if( num > 0 )
    if( num ){
        avg = sum / (double) num;
        printf( "avg: %f\n", avg );
    }
    else printf( "No grades!\n" );
}




// read grades until negative, print avg

#include <stdio.h>

int main(){
    int grade, sum = 0, num = 0;
    double avg;
    
    do{
        printf( "Enter next grade: " );
        scanf( "%d", &grade ); // update of lcv 
        // if( grade >= 0 ){
            sum += grade; // **: these are done for the last negative grade also
            num++;
        // }
    } while( grade >= 0 );
    
    // fix **
    sum -= grade;
    num--;
    
    // if( num > 0 )
    if( num ){
        avg = sum / (double) num;
        printf( "avg: %f\n", avg );
    }
    else printf( "No grades!\n" );
}





/*
Print

0
    0
1 
    0
    1 
2 
    0
    1 
    2 
...
n 
    0 
    1 
    ... 
    n
*/

#include <stdio.h>

int main(){
    int n, k, i;
    printf( "Enter n: " ); scanf( "%d", &n );
    k = 0;
    while( k <= n ){ // NESTED while --- while inside while
        printf( "%d\n", k );
        // print the intermediate numbers (with new lines)
        i = 0;
        while( i <= k ){
            printf( "\t%d\n", i );
            i++;
        }
        k++;
    }
}






/*
Read k.
    Read k integers, print the # of even numbers.
Read a new k 
    and repeat 
until k is -1 

Assume that the user enters -1 or a positive number 
*/

#include <stdio.h>
#define SENTINEL -1 

int main(){
    int n, k, even, i;
    printf( "Enter first k value: " ); scanf( "%d", &k );
    while( k != SENTINEL ){
        // Read k integers, print the # of even numbers.
        even = 0;
        i = 0;
        while( i < k ){
            printf( "Enter next number: " ); scanf( "%d", &n );
            if( n % 2 == 0 ) even++;
            i++;
        }
        printf( "There are %d even numbers.\n", even );
        printf( "Enter next k value: " ); scanf( "%d", &k );
    }
}





/*
Print Z using *'s

*****
   *
  *
 *
*****

Read base from the user

*/

#include <stdio.h>

void print_n_chars( int, char );

int main(){
    int base, space;
    char ch = '*';
    printf( "Enter base: " ); scanf( "%d", &base );
    
    print_n_chars( base, ch ); printf( "\n" );
    
    // print in between (first and last line)
    space = base - 2;
    while( space ){
        // print space # of spaces
        print_n_chars( space, ' ' );
        printf( "*\n" );
        space--;
    }
    
    print_n_chars( base, ch ); printf( "\n" );
}

void print_n_chars( int n, char ch ){
    int i = 0;
    while( i < n ) { printf( "%c", ch ); i++; }
}





/*
Print M using *'s

H: 5
Spaces: 3
*   *
** **
* * *
*   *
*   *

H: 7
Spaces: 5
*     *


H / 2 rows

2 * (H / 2 - 1 ) + 1  --- initial number of spaces 
(H-1) - 1 = H - 2 

**   **
* * * *
*  *  *



*     *
*     *
*     *


Read base from the user

*/

#include <stdio.h>

void print_n_chars( int, char );

int main(){
    int height, space, mid_s, left_s;
    char ch = ' ';
    printf( "Enter height: " ); scanf( "%d", &height );
    space = height - 2;
    
    printf( "*" );
    print_n_chars( space, ch );
    printf( "*\n" );
    
    // print first half 
    mid_s = space - 2;
    left_s = 0;
    while( mid_s >= 1 ){
        printf( "*" );
        print_n_chars( left_s, ch );
        printf( "*" );
        print_n_chars( mid_s, ch );
        printf( "*" );
        print_n_chars( left_s, ch );
        printf( "*\n" );
        mid_s -= 2;
        left_s++;
    }
    
    printf( "*" );
    print_n_chars( left_s, ch );
    printf( "*" );
    print_n_chars( left_s, ch );
    printf( "*\n" );
    
}

void print_n_chars( int n, char ch ){
    int i = 0;
    while( i < n ) { printf( "%c", ch ); i++; }
}



prints:

Enter height: 9
*       *
**     **
* *   * *
*  * *  *
*   *   *


Do the rest as an exercise
















// 23.10 Wednesday

// find the leftmost digit of a decimal number

#include <stdio.h>
#include <math.h>

int f1( int n );
int f2( int n );

int main(){
    int n;
    printf( "Enter a positive integer: " );
    scanf( "%d", &n );
    printf( "Leftmost digit is: %d\n", f2( n ) );
}

int f1( int n ){
    /*  log10( 1000 ) = 3
        log10( 5000 ) = 3.434534
        log10( 10000 ) = 4 
    */
    return n / (int) ( pow( 10.0, (int) log10( n ) ) );
}

int f2( int n ){
    int w = 1, k = n;
    while( k > 9 ){
        w *= 10;
        k /= 10;
    }
    //w /= 10;
    
    return n / w;
}




/* Draw 

*******
 *****
  ***
   *

read the base from the user (odd number)

*/

#include <stdio.h>

void print_n_chars( int n, char ch );

int main(){
    int base, spaces, stars;
    printf( "Enter base: " );
    scanf( "%d", &base );
    stars = base; spaces = 0;
    while( stars > 0 ){
        print_n_chars( spaces, ' ' );
        print_n_chars( stars, '*' );
        printf( "\n" );
        stars -= 2;
        spaces++;
    }
}

void print_n_chars( int n, char ch ){
    int i = 0;
    while( i < n ) { printf( "%c", ch ); i++; }
}





/* Print 
         9
        89
...
  23456789
 123456789
0123456789

*/

#include <stdio.h>

void print_n_chars( int n, char ch ){
    int i = 0;
    while( i < n ) { printf( "%c", ch ); i++; }
}

int main(){
    int first = 9; // spaces = 9;
    int k;
    while( first >= 0 ){
        print_n_chars( first, ' ' );
        k = first;
        while( k <= 9 ){
            printf( "%d", k );
            k++;
        }
        printf( "\n" );
        first--;
    }
}





/* Print 

3 4 6 
4 5 7 10 
6 7 9 12 16 21
9 .... 9 numbers, increments: 1,2,3,4,5,... 
...
...
20 lines
....................

*/

#include <stdio.h>

void print_line( int n );

int main(){
    int n = 3, d = 1;
    while( d <= 10 ){
        print_line( n );
        printf( "\n" );
        n += d;
        d++;
    }
}

void print_line( int n ){
    int d = 1, k = n;
    while( d <= n ){
        printf( "%d ", k );
        k += d;
        d++;
    }
}

















// 30.10 Wednesday

#include <stdio.h>

/*

General form of a for loop

    for( initialization of lcv; repetition condition; update of lcv  )
        statement



    initialization of lcv;
    while( condition )
        statement ( including update of lcv );
*/

int main(){
    int i;
    
    i = 1;
    while( i <= 10 ){
        printf( "%d ", i );
        i++;
    }
    
    printf( "\n\n");
    
    
    for( i = 1; i <= 10; i++ ){
        printf( "%d ", i );
    }
    
    printf( "\n\n");
    
    i = 1;
    for( ; i <= 10; ){
        printf( "%d ", i );
        i++;
    }
    
}




#include <stdio.h>

/*print 

1 
22 
333 
4444 
...
9....9
*/

int main(){
    int i, j;
    
    for( i = 1; i < 10; i++ ){
        for( j = 0; j < i; j++ ) printf( "%d", i );
        printf( "\n");
    }
    
}





#include <stdio.h>

/*print a parallelogram - read base from the user

    *****
   *****
  *****
 *****
*****
*/

void print_n_chars( int n, char ch );

int main(){
    int base, spaces;
    printf( "Enter base: " );
    scanf( "%d", &base );
    
    for( spaces = base - 1; spaces >= 0; spaces-- ){
        print_n_chars( spaces, ' ' );
        print_n_chars( base, '*' );
        printf( "\n" );
    }
}

void print_n_chars( int n, char ch ){
    int i = 0;
    while( i < n ) { printf( "%c", ch ); i++; }
}





#include <stdio.h>
#define SENTINEL -1

/* find the second max - read until -1 arrives
   assume (at least two) distinct positive integers
*/

int main(){
    int max, second_max, n, temp;
    printf( "Enter first two: " );
    scanf( "%d%d", &max, &second_max );
    
    if( second_max > max ){  // do a swap operation
        temp = max;
        max = second_max;
        second_max = temp;
    }
    
    printf( "Enter next: " );
    for( scanf( "%d", &n );
         n != SENTINEL;
         scanf( "%d", &n ) ){
        if( n > max ){
            second_max = max;
            max = n;
        }
        else{
            if( n > second_max ) second_max = n;
        }
        printf( "Enter next: " );     
    }
    printf( "Second max: %d\n", second_max );
}























// 4.11 Monday

/*

print 

1 2 4 7 [10] - 4 numbers
2 4 7 11 16 [20] - 5 numbers 
3 6 10 15 21 28 36 [40] - 7 numbers
4 ... [70] 
5 ... [110]
...
20 ... 

*/

#include <stdio.h>

void print_row( int first, int last );

int main(){
    //print_row( 4, 70 );
    int row, last, diff;
    for( row = 1, last = 10, diff = 10; row <= 20; last += diff, diff += 10, row++ )
        print_row( row, last );
}

void print_row( int first, int last ){
    int count, n, diff;
    for( n = first, count = 0, diff = first; n < last; n += diff, diff++, count++ )
        printf( "%d ", n );
    printf( "[%d] - %d numbers\n", last, count );
}





/*

print 

2 3 5 7 - 4 prime numbers between 0 and 10 
13 17 19 - 3 prime numbers between 10 and 20 
...
97 - 1 prime numbers between 90 and 100 
*/

#include <stdio.h>
#include <math.h>

int is_prime( int n );

int main(){
    int n = 2, last, count;
    for( last = 10; last <= 1000; last +=10 ){
        for( count = 0; n < last; n++ ){
            if( is_prime( n ) ){
                printf( "%d ", n );
                count++;
            }
        }
        printf( "- %d prime numbers between %d and %d\n", count, last-10, last );
    }
}

int is_prime( int n ){
    int i, limit;
    limit = ( int ) sqrt( n );
    for( i = 2; i <= limit; i++ ) if( n % i == 0 ) return 0;
    return 1;
}




/*
print Fibonacci numbers up to N

F(0):1 F(1):1 F(2):2 F(3):3 F(4):5 F(5):8 ...   
F(n) = F(n-2) + F(n-1) for n >= 2 
*/

#include <stdio.h>

int main(){
    int N = 1000, n = 2, F_n = 2, F_n_1 = 2, F_n_2 = 1;
    printf( "F(0):1 F(1):1 " );
    for( ; F_n < N; n++ ){
        printf( "F(%d):%d ", n, F_n );
        F_n = F_n_2 + F_n_1; // F_n_2:1     F_n_1:2     F_n: 3
        F_n_2 = F_n_1; // F_n_2:2
        F_n_1 = F_n; // F_n_1:3
    }
}




/*
find Euler number using 1/0! + 1/1! + 1/2! + 1/3! + ... 1/n!  
*/

#include <stdio.h>

int main(){
    double e = 0;
    long int i, factorial = 1;
    for( i = 1; i < 20; i++ ){
        e += 1.0 / factorial;
        factorial *= i;
    }
    
    printf( "e: %f\n", e );
}





#include <stdio.h>

int main(){
    int n, i;
    int A[ 5 ];// = { 0 };
    int C[ 5 ];
    int B[] = { 5, 6 };
    printf( "size of an int: %ld\n", sizeof( n ) );
    printf( "size of an int: %ld\n", sizeof( int ) );
    printf( "size of an double: %ld\n", sizeof( double ) );
    printf( "size of an float: %ld\n", sizeof( float ) );
    printf( "size of A: %ld\n", sizeof( A ) );
    printf( "# of elements of A: %ld\n", sizeof( A ) / sizeof( int ) );
    printf( "# of elements of B: %ld\n", sizeof( B ) / sizeof( int ) );
    
    for( i = 0; i < 5; i++ ) printf( "%d ", A[ i ] );
    printf( "\n" );
    for( i = 0; i < 5; i++ ) printf( "%d ", C[ i ] );
    printf( "%p ", A );
}
































// 6.11 Wednesday

#include <stdio.h>

void print_array( int A[], int size ){
    int i;
    for( i = 0; i < size; i++ ){
        printf( "%d ", A[ i ] );
    }
    printf( "\n" );
}

// copy A inside B in reverse order
void array_copy_reverse( int dest[], const int src[], int size ){
    int i, j;
    for( i = size - 1, j = 0; i >= 0; i--, j++ ) dest[ j ] = src[ i ];
}

// max of array 
int array_max( const int A[], int size ){
    int i, max;
    for( max = A[ 0 ], i = 1; i < size; i++ ){
        if( A[ i ] > max ) max = A[ i ];
    }
    return max;
}

// max of array - return the index
int array_max_index( const int A[], int size ){
    int i, index_max;
    for( index_max = 0, i = 1; i < size; i++ ){
        if( A[ i ] > A[ index_max ] ) index_max = i;
    }
    return index_max;
}

void array_min_max( const int A[], int size, int Results[] ){ // Results[0]: min Results[1]: max 
    int i;
    if( A[ 0 ] > A[ 1 ] ){
        Results[ 1 ] = A[ 0 ];
        Results[ 0 ] = A[ 1 ];
    }
    else{
        Results[ 1 ] = A[ 1 ];
        Results[ 0 ] = A[ 0 ];
    }
    for( i = 2; i < size; i++ ){
        if( A[ i ] > Results[ 1 ] ) Results[ 1 ] = A[ i ];
        else if( A[ i ] < Results[ 0 ] ) Results[ 0 ] = A[ i ];
    }
    // no return
}

int main(){
    int Numbers[ 10 ] = { 58,6,4,5,66,77,555,3,4,7 };
    int B[ 10 ] = { 0 };
    int C[ 2 ] = { 0 };
    print_array( Numbers, 10 ); // print_array( 0x3450534, 10 );
    // print_array( Numbers[ 0 ], 10 ); // print_array( 58, 10 ); - WRONG
    print_array( &Numbers[ 0 ], 10 ); // print_array( 0x3450534, 10 );
    
    printf( "The second half of the array:\n" );
    print_array( &Numbers[ 5 ], 5 ); // Numbers + 5
    
    printf( "4 members starting with A[ 2 ]:\n" );
    print_array( &Numbers[ 2 ], 4 ); // Numbers + 5
    
    array_copy_reverse( B, Numbers, 5 );
    print_array( B, 10 );
    array_copy_reverse( &B[ 5 ], B, 5 );
    print_array( B, 10 );
    
    printf( "max of Numbers: %d\n", array_max( Numbers, 10 ) );
    printf( "max of Numbers: (1st half) %d\n", array_max( Numbers, 5 ) );
    printf( "max of Numbers: (2nd half) %d\n", array_max( &Numbers[ 5 ], 5 ) );
    
    printf( "max of Numbers: %d\n", Numbers[ array_max_index( Numbers, 10 ) ] );
    printf( "max of Numbers: (1st half) %d\n", Numbers[ array_max_index( Numbers, 5 ) ] );
    printf( "max of Numbers: (2nd half) %d\n", Numbers[ array_max_index( &Numbers[ 5 ], 5 ) + 5 ] );
    
    array_min_max( &Numbers[ 5 ], 5, C );
    printf( "max of Numbers: (2nd half) %d\n", C[ 1 ] );
}




























// 11.11 Monday

#include <stdio.h>

// search for a number inside an array 
int search( int A[], int size, int n ){
    int i;
    for( i = 0; i < size; i++ ){
        if( A[ i ] == n ) return 1;
    }
    return 0;
}

// return index of the first occurence of n in A --- -1 if none
int index_of_first( int A[], int size, int n ){
    int i;
    for( i = 0; i < size; i++ ){
        if( A[ i ] == n ) return i;
    }
    return -1;
}

// return index of the last occurence of n in A --- -1 if none
int index_of_last( int A[], int size, int n ){
    int i;
    for( i = size-1; i >= 0; i-- ){
        if( A[ i ] == n ) return i;
    }
    return -1;
}

// using "index_of_last()" count n in A 
int count1( int A[], int size, int n ){
    int count = 0, last;
    last = index_of_last( A, size, n );
    while( last != -1 ){
        count++;
        
        // n: 5 
        // 5,   6,   4,   57,   66,   77,   5,  3,   5,   7 
        // 0    1    2    3     4     5     6   7    8    9
        // last: 8
        
        last = index_of_last( A, last, n );
        
        // n: 5 
        // 5,   6,   4,   57,   66,   77,   5,  3, 
        // 0    1    2    3     4     5     6   7
        // last: 6
    }
    return count;
}

// count n in A 
int count2( int A[], int size, int n ){
    int count = 0, i;
    for( i = 0; i < size; i++ ){
        if( A[ i ] == n ) count++;
    }
    return count;
}

int main(){
    int A[ 10 ] = { 5,6,4,5,66,77,5,5,5,7 };
    int n = 5;
    
    printf( "%d is a member of A? %d\n", n, search( A, 10, n ) );
    printf( "%d is a member of 2nd half of A? %d\n", n, search( &A[ 5 ], 5, n ) );
    
    printf( "index of 1st occ. of %d in A: %d\n", n, index_of_first( A, 10, n ) );
    printf( "index of 1st occ. of %d in 2nd half of A: %d\n", n, index_of_first( &A[ 5 ], 5, n ) + 5 );

    printf( "index of last occ. of %d in A: %d\n", n, index_of_last( A, 10, n ) );
    
    printf( "# of %d's in A: %d\n", n, count1( A, 10, n ) );
    printf( "# of %d's in 2nd half of A: %d\n", n, count2( &A[ 5 ], 5, n ) );
}





#include <stdio.h>

// is A symmetric
int is_symmetric( int A[], int size ){
    // 3     4     4      3 
    // i: 0             j: 3 
    //      1      2
    //     j:1    i:2  --- STOP
    
    // 3     4     5   4      3 
    // i: 0                 j: 4 
    //      1          3 
    //            2-2     --- STOP 
    
    // continue while i is less than j
    
    int i = 0, j = size - 1;
    while( i < j ){
        if( A[ i ] != A[ j ] ) return 0;
        i++;
        j--;
    }
    return 1;
}

int main(){
    int A[ 10 ] = { 5,6,4,6, 5,66,77,5,5,5 };
    printf( "1st half of A is symmetric? %d\n", is_symmetric( A, 5 ) );
}





#include <stdio.h>

void print_array( int A[], int size ){
    int i;
    for( i = 0; i < size; i++ ){
        printf( "%d ", A[ i ] );
    }
    printf( "\n" );
}

// search for a number inside an array 
int search( int A[], int size, int n ){
    int i;
    for( i = 0; i < size; i++ ){
        if( A[ i ] == n ) return 1;
    }
    return 0;
}

// copy an array source[] with non-zero members, inside dest[]...
// dest should be like a set - no duplication
// { 4, 5, 4, 5, 6, 6, 1 }  => { 4, 5, 1, 0, 0, 0, ... }
// assume dest initialised to 0's - and large enough
void set_copy( int dest[], const int src[], int size ){
    // src: { 4, 5, 4, 5, 6, 6, 1, 4, 6 }  => dest { 0, 0, 0, ... }
    int i = 0, j = 0;
    while( i < size ){
        if( search( src, i, src[ i ] ) == 0 ){
            dest[ j ] = src[ i ];
            j++;
        }
        // src: { 4, 5, 4,
        // checking for the second 4 
        // i: 2 
        // A[ i ] = A[ 2 ] : 4 
        i++;
    }
}

void set_copy2( int dest[], const int src[], int size ){
    // src: { 4, 5, 4, 5, 6, 6, 1, 4, 6 }  => dest { 0, 0, 0, ... }
    int i = 0, j = 0, appears, m;
    while( i < size ){
        appears = 0; // initially assume A[ i ] does not appear on its left
        m = 0;
        while( m < i ){  // m < i && appears == 0 
            if( src[ m ] == src[ i ] ){
                appears = 1; // A[ i ] appears on its left
                break;
            }
            m++;
        }
        
        if( appears == 0 ){
            dest[ j ] = src[ i ];
            j++;
        }
        // src: { 4, 5, 4,
        // checking for the second 4 
        // i: 2 
        // A[ i ] = A[ 2 ] : 4 
        i++;
    }
}


int main(){
    int A[ 10 ] = { 5,6,4,67, 5,66,77,5,5,5 };
    int B[ 10 ] = { 0 };
    
    
    print_array( B, 10 );
    set_copy( B, A, 10 );
    printf( "\n" );
    print_array( B, 10 );
}






#include <stdio.h>

void print_array( int A[], int size ){
    int i;
    for( i = 0; i < size; i++ ){
        printf( "%d ", A[ i ] );
    }
    printf( "\n" );
}

int main(){
    // int A[ 2 ][ 3 ] = { { 5, 6 }, { 7 } };
    int A[ 2 ][ 3 ] = { 5, 6, 7, 8 };
    int i, j;
    // it is like we have 2 arrays of 3 members 
    // like we have a matrix with 2 rows, each having 3 members 
    
    print_array( A[ 0 ], 3 );
    //printf( "\n" );
    
    print_array( A[ 1 ], 3 );
    //printf( "\n" );
    
    // print array A column-wise
    for( i = 0; i < 3; i++ ){  // Column[ 0 ] Column[ 1 ] Column[ 2 ]
        for( j = 0; j < 2; j++ ){
            printf( "%d ", A[ j ][ i ] );
        }
        printf( "\n" );
    }
}





#include <stdio.h>
#define Std 3 

void print_array( int A[], int size ){
    int i;
    for( i = 0; i < size; i++ ){
        printf( "%d ", A[ i ] );
    }
    printf( "\n" );
}


// read the grades of 10 students
// each student has at least 1 grade, at most 5 grades --- mark the end of grades with -1
// find the average of each student - in an array 
int main(){
    int Grades[ Std ][ 5 ];
    double Averages[ Std ];
    int i, j, k;
    
    // read the grades 
    for( i = 0; i < Std; i++ ){
        for( j = 0; j < 5; j++ ){
            printf( "Enter next grade (-1 to stop) for student %d: ", i );
            scanf( "%d", &Grades[ i ][ j ] );
            if( Grades[ i ][ j ] == -1 ) break;
        }
    }
    
    print_array( Grades[ 0 ], 5 );
}

































// 13.11 Wednesday

#include <stdio.h>

int multiply( int *x, int *y ){
    int result;
    result = *x * *y; // result = a * b;
    
    // x++;  (*x)++;
    (*x)++;
    (*y)++;
    return result;
}

int main(){
    int a = 5, b = 10, c;
    int *p;
    double *r;
    int **s; // a pointer which can point to an int pointer
    
    p = &a;
    c = multiply( &a, &b );
    //c = multiply( p, &b );
    
    printf( "%d * %d = %d\n", a, b, c );
    
    printf( "pointer p: %p\n", p );
    
    printf( "size of an int pointer: %ld size of a double pointer: %ld\n", sizeof( int* ), sizeof( double* ) );
    
    *p = 3; // INDIRECTION  // a = 3
    
    printf( "a: %d\n", a );
    
    s = &p;
    
    // *s is EQV to p 
    // *p = 6 
    **s = 6; // *(*s) = 6;
    printf( "a: %d\n", a );
    
    printf( "pointer p: %p\n", p );
    p = &b;
    printf( "pointer p: %p\n", p );
    **s = 20; // b becomes 20
    printf( "a: %d b: %d\n", a, b );
}





























// 18.11 Monday

#include <stdio.h>

int main(){
    int A[ 5 ] = { 4, 55, 3 };
    int *p = A; // p = &A[ 0 ]
    int i;
    int *q = &A[ 4 ];
    
    
    //p = A;
    // const int *A = the address of the first integer of the corresponding memory block
    
    printf( "sizeof array A: %ld\n", sizeof( A ) );
    printf( "sizeof pointer A: %ld\n", sizeof( p ) );
    
    printf( "there are %ld integers from p to q\n", q-p );
    
    for( i = 0; i < 5; i++ ){
        printf( "%d ", p[ i ] );
    }
    printf( "\n" );
    
    for( i = 0; i < 5; i++ ){
        printf( "%d ", *(A + i) ); // *A + i   WRONG // printf( "%d ", A[ i ] );
    }
    printf( "\n" );
    
    for( i = 0; i < 5; i++ ){
        printf( "%d ", *(p + i) ); // *p + i   WRONG // printf( "%d ", p[ i ] );
    }
    printf( "\n" );
    
    for( i = 0; i < 5; i++ ){
        printf( "%d ", *p );
        p++;
    }
    printf( "\n" );
    
    for( i = 0; i < 5; i++ ){
        printf( "%d ", *A );
        // A++; --- A is constant
    }
    printf( "\n" );
    
    
    //x = A[ 0 ];
}





#include <stdio.h>

int max_of_array( int *first, int *last ){ // last points to the next element right after the last member of the array
    int max = *first;
    int *p = first + 1;
    while( p < last ){
        if( *p > max ) max = *p;
        p++;
    }
    return max;
}

int index_of_max_of_array( int *first, int *last ){
    // int *max_p = first;
    
    int *max_p; // this will always point to the max element i have seen so far 
    max_p = first;
    
    int *p = first + 1;
    while( p < last ){
        if( *p > *max_p ) max_p = p; // *max_p = *p; in terms of pointer levels this seems to be correct
                                       // but it is NOT - we are changing an array member - we SHOULD NOT
        p++;
    }
    return max_p - first; // finds the index of the max element
}

int *pointer_to_max_of_array( int *first, int *last ){
    int *max_p; // this will always point to the max element i have seen so far 
    max_p = first;
    
    int *p = first + 1;
    while( p < last ){
        if( *p > *max_p ) max_p = p; // *max_p = *p; in terms of pointer levels this seems to be correct
                                       // but it is NOT - we are changing an array member - we SHOULD NOT
        p++;
    }
    return max_p;
}

int main(){
    int A[ 5 ] = { 4444, 555, 3, 8, 88 };
    printf( "max of A: %d\n", max_of_array( A, A + 5 ) ); // max_of_array( &A[0], &A[ 5 ] )
    printf( "max of A: %d\n", A[ index_of_max_of_array( A, A + 5 ) ] );
    printf( "max of A: %d\n", *pointer_to_max_of_array( A, A + 5 ) );
    
    printf( "max of 2nd half of A: %d\n", *pointer_to_max_of_array( A + 3, A + 5 ) );
    printf( "max of 2nd half of A: %d\n", A[ index_of_max_of_array( A + 3, A + 5 ) + 3 ] );
    printf( "max of 2nd half of A: %d\n", max_of_array( A + 3, A + 5 ) );
    
    /*
    int **p;
    int ***q;
    
    if p == *q
    */
}



























// 20.11 Wednesday

#include <stdio.h>

void max_of_array3( int *first, int *last, int *result ){
    *result = *first;
    int *p = first + 1;
    while( p < last ){
        if( *p > *result ) *result = *p;
        p++;
    }
}

void max_of_array4( int *first, int *last, int **q ){ // q points to an INTEGER POINTER
    *q = first; // p (of main) = first
    int *p = first + 1;
    while( p < last ){
        if( *p > **q ) *q = p;    // * ( *q )  EQV to * ( p - of main ) 
        p++;
    }
}

int *pointer_to_max_of_array( int *first, int *last ){
    int *max_p; // this will always point to the max element i have seen so far 
    max_p = first;
    
    int *p = first + 1;
    while( p < last ){
        if( *p > *max_p ) max_p = p; // *max_p = *p; in terms of pointer levels this seems to be correct
                                       // but it is NOT - we are changing an array member - we SHOULD NOT
        p++;
    }
    return max_p;
}


int main(){
    int A[ 7 ] = { 8, 988, 996, 333, 98, 995, 5 };
    int max;
    int *p;
    
    int *first_max, *second_max1, *second_max2,*second_max, *max_in_between;
    
    max_of_array3( A, A + 7, &max );
    max_of_array4( A, A + 7, &p );
    printf( "max of A: %d\n", max );
    printf( "max of A: %d with index: %ld\n", *p, p-A );
    
    // find the max element between the first max and second max of an array
    first_max = pointer_to_max_of_array( A, A + 7 );
    second_max1 = pointer_to_max_of_array( A, first_max );
    second_max2 = pointer_to_max_of_array( first_max + 1, A + 7 );
    if( *second_max1 > *second_max2 ) second_max = second_max1;
    else second_max = second_max2;
    
    if( first_max < second_max ) // if f_max is on the left of s_max
        max_in_between = pointer_to_max_of_array( first_max + 1, second_max );
    else // // if f_max is on the right of s_max
        max_in_between = pointer_to_max_of_array( second_max + 1, first_max );
        
    printf( "max in between: %d \n", *max_in_between );
    
    
}































// 25.11 Monday

#include <stdio.h>

void print_array( int A[], int size ){
    int i;
    for( i = 0; i < size; i++ ){
        printf( "%d ", A[ i ] );
    }
    printf( "\n" );
}

void copy_reverse( int *dest, int *src, int *src_last ){
    int *p;
    for( p = src_last - 1; p >= src; p--, dest++ ){
        *dest = *p;
    }
}

int is_symmetric( int *first, int *last ){
    for( last--; first < last; first++, last-- )
        if( *first != *last ) return 0;
    return 1;
}

int main(){
    int A[ 10 ] = { 5,6,4,6,5,66,77,54,6,5 };
    int B[ 10 ];
    
    copy_reverse( B, A, A + 10 );
    print_array( B, 10 );
    
    printf( "A is symmetric? %d\n", is_symmetric( A, A + 10 ) );
    printf( "A[7-9] is symmetric? %d\n", is_symmetric( A + 7, A + 10 ) );
}






#include <stdio.h>

void print_char_array( char A[] ){
    int i;
    for( i = 0; A[ i ] != '\0'; i++ ){
        printf( "%c", A[ i ] );
    }
    printf( "\n" );
}

// strlen in string.h
int str_len( char *p ){
    int len = 0;
    while( *p ) { len++; p++; }
    // while( *p != '\0' ) { len++; p++; }
    return len;
}

// strlen in string.h - no pointers
int str_len2( char S[] ){
    int i = 0;
    while( S[ i ] != '\0' ) i++;
    return i;
}

// strcpy in string.h
void str_cpy( char *dest, char *src ){
    for( ; *src != '\0'; src++, dest++ ) *dest = *src;
    // dest[ i ] = src[ i ];
    *dest = '\0';
}

// strcpy in string.h - no pointers
void str_cpy2( char dest[], const char src[] ){
    int i;
    for( i = 0; src[ i ] != '\0'; i++ ) dest[ i ] = src[ i ];
    // dest[ i ] = src[ i ];
    dest[ i ] = '\0';
}

int main(){
    char str1[ 10 ];
    char str2[] = { 'A', 'l', 'i', '\0' };
    char str3[] = "Ali";
    int i;
    
    // char months[ 12 ][ 15 ] = { { 'J', 'a', 'n' }, { 'F', 'e', 'b' } };
    char months[ 12 ][ 15 ] = {"January", "February", "March", "April", "May", "June", "July", "August",
        "September", "October", "November", "December"}; 
    
    printf( "size of str2: %ld\n", sizeof( str2 ) );
    print_char_array( months[ 3 ] );
    printf( "%s\n", months[ 3 ] );
    printf( "\n\n" );
    for( i=0; i<12; i++ ){
        printf( "%s\n", months[ i ] );
    }
    
    printf( "\n\n" );
    for( i = 0; months[ 11 ][ i ]; i++ ) printf( "%c", months[ 11 ][ i ] );
    //for( i = 0; months[ 11 ][ i ] != '\0'; i++ ) printf( "%c", months[ 11 ][ i ] );
    
    // print the months starting with M 
    printf( "\n\n" );
    for( i=0; i<12; i++ ){
        if( months[ i ][ 0 ] == 'M' ) printf( "%s\n", months[ i ] );
    }
    
    // print the months starting with length 5 
    printf( "\n\n" );
    for( i=0; i<12; i++ ){
        if( str_len2( months[ i ] ) == 5 ) printf( "%s\n", months[ i ] );
    }
    
    str_cpy2( months[ 0 ], months[ 11 ] );
    printf( "\n\n" );
    for( i=0; i<12; i++ ){
        printf( "%s\n", months[ i ] );
    }
}




























// 27.11 Wednesday

#include <stdio.h>

// strcpy in string.h
void str_cpy( char *dest, char *src ){
    for( ; *src != '\0'; src++, dest++ ) *dest = *src;
    // dest[ i ] = src[ i ];
    *dest = '\0';
}

// return a pointer pointing to the null char at the end of a string
char *last( char *s ){
    while( *s ) s++;
    return s;
}

// strcat in string.h 
void str_cat( char *dest, char *src ){
    char *p = dest;
    while( *p ) p++;
    while( *src ) { *p = *src; p++; src++; }
    *p = '\0';
}


// strcmp in string.h 
int str_cmp( char *p, char *q ){
    /*
            p              q
            abc0           abc0  
            abc0           abd0
            abc0           abcderfe0
    */
    
    while( *p == *q && *p ){ p++; q++; }
    return *p - *q; 
}

int main(){
    char str1[ 20 ] = "de";
    char str2[ 20 ] = "ade";
    char str3[ 20 ]; // store "abc de" - we want to do concatenation
    char str4[ 20 ];
    int r;
    
    // last: "abc\0"
    //           *
    
    char *p;
    
    str_cpy( str3, str1 );
    p = last( str3 );
    // p is now pointing to the null char after "abc"
    *p = ' ';
    
    p++;
    /* instead of p++: 
    *(p+1) = '\0';
    p = last( str3 );
    */
    // p is now pointing to the null char after "abc "
    
    str_cpy( p, str2 );
    
    printf( "str3: \"%s\"\n", str3 );
    
    str_cpy( str4, str1 );
    str_cat( str4, " " );
    str_cat( str4, str2 );
    printf( "str4: \"%s\"\n", str4 );
    
    r = str_cmp( str1, str2 );
    if( r < 0 ) printf( "\"%s\" comes before \"%s\"\n", str1, str2 );
    else{
        if( !r ) printf( "\"%s\" = \"%s\"\n", str1, str2 );
        else printf( "\"%s\" comes after \"%s\"\n", str1, str2 );
    }
}




























// 4.12 Wednesday

#include <stdio.h>

int is_palindromic( char A[] ){
    int first = 0, last;
    for( last = 0; A[ last ] != '\0'; last++ );
    last--;
    for( ; first < last; first++, last-- )
        if( A[ first ] != A[ last ] ) return 0; // else return 1; - INCORRECT
    return 1;
}

// assume no spaces in the beginning and the end of a string 
// and a single space between two words
int count_words1( char *str ){
    char *p = str;
    int count = 0;
    if( !*p ) return 0;
    while( *p ){
        if( *p == ' ' ) count++;
        p++;
    }
    return count + 1;
}

// no assumptions
int count_words2( char *str ){
    char *p = str;
    int count = 0;
    if( !*p ) return 0;
    while( *p ){
        if( *p != ' ' && ( *(p+1) == ' ' || *(p+1) == '\0' ) ) count++;
        p++;
    }
    return count;
}

// convert a string to integer
// return -1 if a non-digit char 
int to_int( char Str[] ){
    int result = 0, i = 0;
    while( Str[ i ] != '\0' ){
        if( !( '0' <= Str[ i ] && Str[ i ] <= '9' ) ) return -1;
        result = result * 10 + ( Str[ i ] - '0' );
        i++;
    }
    return result;
}

int main(){
    char str[ 20 ] = "52a3 67";
    printf( "# of words: %d and is equal to: %d\n", count_words2( str ), to_int( str ) );

}





























// 9.12 Monday

#include <stdio.h>

// convert an integer to a string
void to_string( char *dest, int n ){
    char *end = dest;
    *end = '\0';
    if( !n ){ // if( n == 0 )
        *dest = '0';
        *(dest + 1) = '\0';
    }
    if( n < 0 ){
        *dest = '-';
        dest++;
        end++;
        *end = '\0';
        n = -n;
    }
    while( n > 0 ){
        char cur = n % 10 + '0';
        n /= 10;
        
        // shift all characters one place to the right
        // shift-right by 1
        
        //    -   '\0'
        //    -   dest
        //    -   end
        //         p
        
        
        //    -   4     3     '\0'
        //       dest         end
        //                     p
        
        
        //    -   4     3     '\0'   '\0'
        //    -   4     3      3     '\0'
        //    -   4     4      3     '\0'
        
        
        
        
        //    -   4      4     3     '\0'
        
        
        //    -   3     '\0'
        //       dest   end
        
        char *p = end;
        while( p >= dest ){
            *( p+1 ) = *p;
            p--;
        }
        
        //    -   3     3     '\0'
        //       dest  end
        
        end++;
        //    -   3     3     '\0'
        //       dest        end
        
        
        *dest = cur; // *p = cur WILL DO ALSO
        //    -   4     3     '\0'
        //       dest         end
    }
}

int main(){
    int n = -234565009;
    char s[ 20 ] = "";
    to_string( s, n );
    printf( "%d = %s\n", n, s );
}





#include <stdio.h>

// convert an integer to a string
void to_string( char *dest, int n ){
    char *end = dest;
    *end = '\0';
    if( !n ){ // if( n == 0 )
        *dest = '0';
        *(dest + 1) = '\0';
    }
    if( n < 0 ){
        *dest = '-';
        dest++;
        end++;
        *end = '\0';
        n = -n;
    }
    while( n > 0 ){
        char cur = n % 10 + '0';
        n /= 10;
        
        char *p = end;
        while( p >= dest ){
            *( p+1 ) = *p;
            p--;
        }
        
        end++;
        
        
        *dest = cur; // *p = cur WILL DO ALSO
    }
}

// add the count of each consecutively repeating char in a string (to a new string) 
void foo( char *dest, char *src ){
    int count = 1;
    char *p = src, *q = dest;
    while( *p != '\0' ){
        if( *(p+1) == *p ){
            count++;
        }
        else{
            *q = *p;
            to_string( q+1, count );
            while( *q != '\0' ) q++;
            count = 1;
        }
        p++;
    }
}

int main(){
    char s[ 50 ] = "        aaabb        cd       dd    ";
    char new[ 100 ];
    foo( new, s );
    printf( "%s, %s\n\n\n", s, new );
    
    // print the words of a string, each on a separate line 
    char *p = s;
    while( *p == ' ' ) p++; // skip over the initial spaces
    while( *p != '\0' ){
        if( *p != ' ' ) printf( "%c", *p );
        else{
            if( *(p-1) != ' ' ) printf( "\n" );
        }
        p++;
    }
    
}































// 11.12 Wednesday

#include <stdio.h>

/*

&: bitwise AND 
|: bitwise OR 
~: bitwise COMPLEMENT
^: bitwise XOR 
>>: bitwise SHIFT RIGHT 
<<: bitwise SHIFT LEFT 

*/

void print_binary( unsigned n ){
    // mask: 1000000...000 
    unsigned mask, count = 0;
    mask = 1 << 31;
    
    // xxxxxxyxxxxxxxxxxxx
    // 0000001000000000000
    // bitwise AND &
    // 0000000000000000000 OR 
    // 0000001000000000000
    
    while( mask ){
        if( n & mask ) printf( "1" ); else printf( "0" );
        count++; if( count % 8 == 0 ) printf( " " );
        mask >>= 1;
    }
}

int main(){
    unsigned long n, count = 0;
    
    printf( "%d\n", 5 && 7 );
    printf( "%d\n", 5 & 7 );
    
    //  00..0 0101 
    //  00..0 0111
    // &
    //  00..0 0101

    // >>: bitwise SHIFT RIGHT 
    // 1000 0101  >>  0100 0010
    // NEGATIVE       POSITIVE
    
    // commonly unsigned int is used with bitwise operators 
    
    
    // find sizeof( int ) without sizeof - use bw ops 
    n = 0;
    // ~: bitwise COMPLEMENT
    n = ~n;
    while( n ){
        count++;
        n = n >> 1; // n >>= 1;
    }
    printf( "sizeof( long int ): %ld\n", count / 8 );
    
    print_binary( 5555555555 );
}
































// 16.12 Monday

#include <stdio.h>

/*

&: bitwise AND 
|: bitwise OR 
~: bitwise COMPLEMENT
^: bitwise XOR 
>>: bitwise SHIFT RIGHT 
<<: bitwise SHIFT LEFT 

*/

void print_binary( unsigned n ){
    // mask: 1000000...000 
    unsigned mask, count = 0;
    mask = 1 << 31;
    
    while( mask ){
        if( n & mask ) printf( "1" ); else printf( "0" );
        count++; if( count % 8 == 0 ) printf( " " );
        mask >>= 1;
    }
}

int count_set_bits( unsigned n ){
    unsigned mask = 0, mask2 = 1, count = 0, count2 = 32;
    mask = ~mask;
    mask >>= 1; // 0111...111
    mask2 <<= 31;
    while( count2 ){
        if( !(~(n | mask)) ){   // n|mask: 0_11..11  or 1_11..11   ~(n | mask) == 0  EQV TO n|mask: 111...1111
            count++;
            //printf( "...\n" );
        }
        mask >>= 1;
        mask = mask | mask2;
        //printf( "%u\n", mask );
        count2--;
    }
    return count;
}

int count_set_bits2( unsigned n ){
/*

    38: 00100110
    37: 00100101
    
    38 & 37: 00100100 36
    35:      00100011
             & 
             00100000 subtract 1 again 
             00011111
             &
             00000000


    0000000 100000000000
    0000000 011111111111
    &
    0000000 000000000000
*/
    unsigned count = 0;
    while( n ){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    unsigned n = 5555, count = 0;
    print_binary( n );
    printf( "\n" );
    printf( "with %d set bits.\n", count_set_bits2( n ) );
}






#include <stdio.h>

void print_binary( unsigned n ){
    // mask: 1000000...000 
    unsigned mask, count = 0;
    mask = 1 << 31;
    
    while( mask ){
        if( n & mask ) printf( "1" ); else printf( "0" );
        count++; if( count % 8 == 0 ) printf( " " );
        mask >>= 1;
    }
}

int main(){
    unsigned n1 = 256, n2 = 5;
    unsigned mask = 1, mask1, mask2, count = 8;
    print_binary( n1);
    printf( "\n" );
    print_binary( n2);
    printf( "\n" );
    
    // swap lower order bytes of n1 and n2 
    while( count ){
        if( (n1 & mask) != (n2 & mask) ){
            printf( "....." );
            n1 = n1 ^ mask;
            n2 = n2 ^ mask;
        }
        mask = mask << 1; // mask <<= 1;
        //printf( "%d\n", mask );
        count--;
    }
    
    printf( "\n\n" );
    
    print_binary( n1);
    printf( "\n" );
    print_binary( n2);
    printf( "\n" );
    
    // swap lower order two bytes of n1 
    // DOES NOT WORK WHEN SECOND BYTE IS NOT ZERO!!!!!!!!!!!!!!!
    mask1 = 1;
    mask2 = 1 << 8;
    printf( "%u %u \n", mask1, mask2 );
    count = 8;
    while( count ){
        if( (n1 & mask1) != (n1 & mask2) ){
            n1 = n1 ^ mask1;
            n1 = n1 ^ mask2;
        }
        mask1 = mask1 << 1;
        mask2 = mask2 << 1;
        count--;
    }
    printf( "\n\n" );
    
    print_binary( n1);
    printf( "\n" );
}




#include <stdio.h>
#include <stdlib.h>

void print_binary( unsigned n ){
    // mask: 1000000...000 
    unsigned mask, count = 0;
    mask = 1 << 31;
    
    while( mask ){
        if( n & mask ) printf( "1" ); else printf( "0" );
        count++; if( count % 8 == 0 ) printf( " " );
        mask >>= 1;
    }
}

int main(){
    unsigned n = 256;
    unsigned mask1, mask2, count = 0;
    
    // mask1 = strtoul( "1101", NULL, 2 );
    mask1 = 13;
    mask1 <<= 28; // mask: "1101 000...000 28 zeros"
    
    // mask2 = strtoul( "1111", NULL, 2 );
    mask2 = 15;
    mask2 <<= 28; // mask: "1111 000...000 28 zeros"
    
    n = strtoul( "1111110111011101", NULL, 2 );
    
    print_binary( n );
    printf( "\n" );
    
    print_binary( mask1 );
    printf( "\n" );
    print_binary( mask2 );
    printf( "\n" );
    
    // pattern counting
    // how many "1101" do we have in binary representation of a number - NO OVERLAP
    while( mask1 >= 13 ){
        if( ((n & mask2) ^ mask1) == 0 ){
            count++;
            mask1 >>= 4;
            mask2 >>= 4;
        }
        else{
            mask1 >>= 1;
            mask2 >>= 1;
        }
    }
    printf( "%d\n", count );
}



































// 18.12 Wednesday

/******************************************************************************

we want to find n! using recursion
can we find the result if we already know (n-1)! ?  YES: n! = n * (n-1)!

is there a base case?
base case: a case where the result is trivial (no recursion needed)
0! = 1

we do RECURSIVE CALLS while using recursion
RECURSIVE CALL: a function calling itself

function call is EXPENSIVE - if iteration is easy recursion should be avoided

recursive functions has IMPLICIT loops (no while-for loops)

*******************************************************************************/

#include <stdio.h>

int factorial( int n ){
    printf( "n: %d\n", n );
    if( n == 0 ) return 1;
    // n! = n * (n-1)!
    return n * factorial( n-1 );
}

// find a*b using addition and recursion - assume a and b > 0 
int mult( int a, int b ){
    printf( "a: %d b: %d\n", a, b );
    if( b == 1 ) return a;
    return a + mult( a, b-1 );
}

// find a^b - assume a and b > 0
int power( int a, int b ){
    printf( "(power) a: %d b: %d\n", a, b );
    if( b == 1 ) return a;
    // return mult( a, power( a, b-1 ) );
    return a * power( a, b-1 );
}

// find Fibonacci( n ) --- F(0)=1 F(1)=1 F(n)=F(n-2)+F(n-1)
int Fibonacci( int n ){
    printf( "(Fibo) n: %d\n", n );
    if( n<2 ) return 1;
    return Fibonacci(n-2) + Fibonacci(n-1);
}

// print the digits of a decimal number from left to right
void print_digits( int n ){
    printf( "n: %d\n", n );
    if( n < 10 ) printf( "%d ", n );
    else{
        print_digits( n / 10 );
        printf( "%d ", n % 10 );
    }
}

int main(){
    printf( "5!: %d\n", factorial( 5 ) );
    printf( "5*3: %d\n", mult( 5, 3 ) );
    printf( "\n\n" );
    printf( "5^3: %d\n", power( 5, 3 ) );
    printf( "\n\n" );
    printf( "Fibonacci(6): %d\n", Fibonacci( 6 ) );  
    print_digits( 3468 );
}





























// 23.12 Monday

#include <stdio.h>

// print the digits of a decimal number from left to right
void print_digits( int n ){
    //printf( "n: %d\n", n );
    if( n < 10 ) printf( "%d ", n );
    else{
        print_digits( n / 10 );
        printf( "%d ", n % 10 );
    }
}

// print the digits of a decimal number from right to left
void print_digits_reverse( int n ){
    if( n < 10 ) printf( "%d ", n );
    else{
        printf( "%d ", n % 10 );
        print_digits_reverse( n / 10 );
    }
}

void foo( int n ){
    if( n < 0 ){ printf( "- " ); print_digits( -n ); }
    else print_digits( n );
}

int main(){
    print_digits( 3468 );
    printf( "\n\n" );
    print_digits_reverse( 3468 );
    
    printf( "\n\n" );
    foo( 123 );
    printf( "\n\n" );
    foo( -123 );
}







#include <stdio.h>

// print an array recursively - no explicit loops
void print_array_rec( int A[], int size ){
    if( size == 1 ) printf( "%d ", A[ 0 ] );
    else{
        printf( "%d ", A[ 0 ] );
        print_array_rec( &A[ 1 ], size-1 );
    }
}

// last is the address of the last element
void print_array_rec2( int *first, int *last ){
    if( last == first ) printf( "%d ", *first );
    else{
        printf( "%d ", *first );
        print_array_rec2( first+1, last );
    }
}

void print_array_rec3( int *first, int *last ){
    if( last == first ) printf( "%d ", *first );
    else{
        print_array_rec3( first, last-1 );
        printf( "%d ", *last );
    }
}

// first print left half, then print right half
// void print_array_rec4( int A[], int size ){

// find the sum of an array 
int sum_of_array( int *first, int *last ){
    if( last == first ) return *last;
    return sum_of_array( first, last-1 ) + *last;
    // return *first + sum_of_array( first+1, last );
}

double avg_of_array( int A[], int size ){
    if( size == 1 ) return (double) A[ 0 ];
    double rest = avg_of_array( A, size - 1 ); // avg of all except the last 
    double sum = rest * (size-1) + A[ size-1 ];
    return sum / size;
}

double avg_of_array2( int A[], int size ){
    if( size == 1 ) return (double) A[ 0 ];
    int size_left, size_right;
    size_left = (size+1) / 2;
    size_right = size / 2;
    double left = avg_of_array2( A, size_left );
    double right = avg_of_array2( A + size_left, size_right );
    return ( left * size_left + right * size_right ) / size;
}

// find the minimum of an integer array 
int min_of_array( int *first, int *last ){
    if( last == first ) return *first;
    int rest = min_of_array( first+1, last );
    return *first < rest ? *first : rest;
    /*
    if(*first < rest) a = *first; else a = rest; return a;
    */
}

// find the pointer pointing to the minimum of an integer array
int *p_to_min_of_array( int *first, int *last ){
    if( last == first ) return first;
    int *rest = p_to_min_of_array( first+1, last );
    return *first < *rest ? first : rest;
}

// check whether n is a member of A[] 
int is_a_member( int A[], int size, int n ){
    if( A[ 0 ] == n ) return 1;
    if( size == 1 ) return 0;
    return is_a_member( A+1, size-1, n );
}

// count n in A[]
int count_in_array( int *first, int *last, int n ){
    if( first == last ) if( *first == n ) return 1; else return 0;
    int rest = count_in_array( first, last-1, n );
    if( *last == n ) return rest+1; else return rest;
}

// recursive copy
void array_copy( int *dest, int *src, int size ){
    *dest = *src;
    if( size > 1 ){
        array_copy( dest+1, src+1, size-1 );
    }
}

//recursive reverse copy
void array_copy_reverse( int *dest, int *src, int size ){
    *(dest+size-1) = *src;
    if( size > 1 ){
        array_copy_reverse( dest, src+1, size-1 );
    }
}

int main(){
    int A[ 5 ] = { 5, 45, 5, 0, 1 }, n = 5;
    int B[ 5 ] = { 0 };
    print_array_rec( A, 5 );
    printf( "\n" );
    print_array_rec2( A, A+4 );
    printf( "\n" );
    print_array_rec3( A, A+4 );
    printf( "\n" );
    printf( "sum: %d\n", sum_of_array( A, A+4 ) );
    printf( "avg: %.1f\n", avg_of_array( A, 5 ) );
    printf( "avg: %.1f\n", avg_of_array2( A, 5 ) );
    printf( "min: %d\n", min_of_array( A, A+4 ) );
    printf( "min: %d\n", *p_to_min_of_array( A, A+4 ) );
    printf( "member? %d\n", is_a_member( A, 5, n ) );
    printf( "# of n? %d\n", count_in_array( A, A+4, n ) );
    print_array_rec( B, 5 );
    array_copy( B, A, 5 );
    print_array_rec( B, 5 );
    array_copy_reverse( B, A, 5 );
    print_array_rec( B, 5 );
    
}


































// 25.12 Wednesday

#include <stdio.h>

void print_array_rec( int A[], int size ){
    if( size == 1 ) printf( "%d ", A[ 0 ] );
    else{
        printf( "%d ", A[ 0 ] );
        print_array_rec( &A[ 1 ], size-1 );
    }
}

// copy only the positive members of src[] inside dest[]
// last points to the last element
void special_copy_pos( int *dest, int *first, int *last ){
    if( *first > 0 ) { *dest = *first; dest++; }
    if( last > first ){
        special_copy_pos( dest, first+1, last );
    }
}

// copy only the negative members of src[] inside dest[]
// last points to the last element
// dest points to the last element of the destination array
void special_copy_neg( int *dest, int *first, int *last ){
    if( *first < 0 ) { *dest = *first; dest--; }
    if( last > first ){
        special_copy_neg( dest, first+1, last );
    }
}

int str_len_rec( char *p ){
    if( *p == '\0' ) return 0;
    return str_len_rec( p+1 ) + 1;
}

void str_cpy_rec( char *dest, char *src ){
    *dest = *src;
    if( *src != '\0' ){
        str_cpy_rec( dest+1, src+1 );
    }
}

// copy all chars except spaces
void str_cpy_rec_no_spaces( char *dest, char *src ){
    if( *src == '\0' ){
        *dest = '\0';
    }
    else{
        if( *src != ' ' ){ *dest = *src; dest++; }
        str_cpy_rec_no_spaces( dest, src+1 );
    }
}

// the user should put 0 for count
int count_words_rec( char *str, int count ){
    int rest;
    if( *str == '\0' ) return count;
    rest = count_words_rec( str+1, count );
    if( *str != ' ' && ( *(str+1) == ' ' || *(str+1) == '\0' ) )
        return 1 + rest;
    return rest;
}

int main(){
    int A[ 5 ] = { 5, 0, -5, 10, 1 }, n = 5;
    int B[ 5 ] = { 0 };
    char s[ 20 ] = "    a b cd     c     ";
    char r[ 20 ] = "a ";
    str_cpy_rec( r, s );
    print_array_rec( B, 5 );
    special_copy_neg( B+4, A, A+4 );
    special_copy_pos( B, A, A+4 );
    printf( "\n" );
    print_array_rec( B, 5 );
    
    printf( "\n%d\n", str_len_rec( s ) );
    printf( "%s with %d words.\n", r, count_words_rec( r, 0 ) );
    str_cpy_rec_no_spaces(r, s );
    printf( "%s \n", r );
}






















// 30.12 Monday

