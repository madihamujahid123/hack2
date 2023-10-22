#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//program to find the airdistance between origin and destination
int main()
{
    double latitudeOrigin, longitudeOrigin,latitudeDestination,longitudeDestination; //used double to store point value
    double distance, Delta;
    const float R=6371.0;
    const float PI=3.14;
    printf("enter the value of location of the origin(latitude,longitude):");
    scanf("%1f,%1f",&longitudeDestination,latitudeDestination);
    latitudeOrigin=(latitudeOrigin*PI)/180;
    longitudeOrigin=(longitudeOrigin*PI)/180;
    latitudeDestination=(latitudeDestination*PI)/180;
    longitudeDestination=(longitudeDestination*PI)/180;
    Delta=longitudeDestination-longitudeDestination;
    distance=acos(sin(latitudeOrigin)* sin(latitudeDesination) +cos(latitudeOrigin)*cos(latitudeDestination)*cos(Delta))*R;
    printf("origin:(%f,%f) \n destination:(%f,%f)\n" , latitudeOrigin*180/PI, longitudeOrigin*180/PI ,latitudeDestination*180/PI,longitudeDestination*180/PI);
    printf ("Airdistace is %f km \n" , distane);
    return 0;
}