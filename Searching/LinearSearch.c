#include <stdio.h>
int main(){
int array [] = { 15, 4, 3, 6, 8, 2, 5};
int what = array[0];
int i;
for ( int i=0; i < 7; i++ ){
if ( array[i] < what )
what = array[i];
}
printf( "%d\n",what );
return 0;
} 