#include <stdio.h>

typedef struct timer {
   int seconds;
   int minutes;
   int hours;
}timer;

void diff(timer start, timer stop, timer *differ) {
   while (stop.seconds > start.seconds) {
      --start.minutes;
      start.seconds += 60;
   }
   differ->seconds = start.seconds - stop.seconds;
   while (stop.minutes > start.minutes) {
      --start.hours;
      start.minutes += 60;
   }
   differ->minutes = start.minutes - stop.minutes;
   differ->hours = start.hours - stop.hours;
}

int main() {
    timer starttimer, stoptimer, differ;

   printf("Enter the start timer. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &starttimer.hours,
         &starttimer.minutes,
         &starttimer.seconds);

   printf("Enter the stop timer. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &stoptimer.hours,
         &stoptimer.minutes,
         &stoptimer.seconds);

   diff(starttimer, stoptimer, &differ);
   printf("\ntimer Difference: %d:%d:%d - ", starttimer.hours,
          starttimer.minutes,
          starttimer.seconds);
   printf("%d:%d:%d ", stoptimer.hours,
          stoptimer.minutes,
          stoptimer.seconds);
   printf("= %d:%d:%d\n", differ.hours,
          differ.minutes,
          differ.seconds);
   return 0;
}

