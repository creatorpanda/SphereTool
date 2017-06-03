#include <stdio.h>
#include <math.h>

int main() {

 float radius;
 float volume;
 float surface;
 float pi;

 pi = 3.14159265359;

    printf("Welcome user!\n\n");
    printf("------------------------------------------------------------------------------\n\n");
    printf("Please input a positive value for Radius: ");

    do {
    scanf("%f",&radius);

    if (radius<=0){printf("Please input a POSITIVE value! ");}

    } while ( radius <= 0 );


    volume= (4.0/3)*pi*pow(radius,3);
    surface= 4*pi*pow(radius,2);

    printf("\n");
    printf("------------------------------------------------------------------------------\n\n");
    printf("Volume: %.06f\n", volume);
    printf("Surface Area: %.06f\n\n", surface);
    printf("------------------------------------------------------------------------------\n\n");

    printf("Press ENTER to dismiss me\n\n");
    printf("------------------------------------------------------------------------------\n");
    printf("GitHub: creatorpanda\n");
    printf("creation of 2017\n");
    getch();
}
