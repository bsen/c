#include <stdio.h>
#include <stdbool.h>

int main(){

int f = 0;
int c = 0;
bool valid = true;

while (valid){
    if( f ==  300){
        valid = false;
    }
c = (f-32) * 5/9;
printf( "%d Fahrenheit in Celsius is: %d\n", f,c);

f = f + 20;
}


return 0;
};

