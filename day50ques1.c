#include <stdio.h>
#include <string.h>

int main() {
    char date[] = "12/04/2025";  // Original date
    char day[3], month[3], year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    // Split the date into day, month, year
    sscanf(date, "%2[^/]/%2[^/]/%4s", day, month, year);
    
    // Convert month string to integer
    int month_num = atoi(month);
    
    // Print in desired format
    printf("%s-%s-%s\n", day, months[month_num - 1], year);
    
    return 0;
}
