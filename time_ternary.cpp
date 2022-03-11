#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------*/
// >>>>>>>>>> Time Conversion with ternary Operation <<<<<<<<<<< //
//---------------------------------------------------------------//

void main()
{
   int hours, minutes, hour_24, time;
   printf("Enter the hours and minutes: ");
   scanf("%d %d", &hours, &minutes);

   hour_24 = 12;
   time = hours - hour_24;

   (hours >= 12) ? (
                       (time != 0) ? (printf("In 24-hour time format time is: %d:%d PM \n", time, minutes)) : (printf("In 24-hour time format time is: %d:%d PM", hours, minutes)))
                 : (printf("The time is in 12-hour format: %d:%d AM", hours, minutes));
}
