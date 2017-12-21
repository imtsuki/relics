#include <stdio.h>

int isLeap(int year){
    return 
    "\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\
\0\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\
\0\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\
\0\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0"
    [year % 400];
}

int GetMonthDays(int year, int month){
    if (month == 2)
        return isLeap(year) ? 29 : 28;
    return "\0\x1F\x28\x1F\x1E\x1F\x1E\x1F\x1F\x1E\x1F\x1E\x1F"[month];
}

int GetWeekDay(int year, int month, int day){
    year--;
    int days = 365 * year + year / 4 - year / 100 + year / 400;
    year++;
    month--;
    while(month){
        days += GetMonthDays(year, month);
        month--;
    }
    days += day;
    return days % 7;
}

void PrintMonthCalender(int startDay, int days){
    printf("Sun.\tMon.\tTue.\tWed.\tThu.\tFri.\tSat.\n"); 
    int counter = startDay;
    while(startDay--) putchar('\t');
    for(int i = 1; i <= days; i++){
        printf("%d", i);
        if(counter < 6){
            putchar('\t');
            counter++;
        } else {
            putchar('\n');
            counter = 0;
        }
    }
}

int main(){
    int year, month;
    printf("Please input year and month:");
    scanf("%d%d", &year, &month);
    printf("The result is:\n\t\t\t%d-%d\n", year, month);
    PrintMonthCalender(GetWeekDay(year, month, 1), GetMonthDays(year, month));
    return 0;
}
