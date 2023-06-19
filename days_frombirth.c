#include <stdio.h>
#include <time.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;  // Leap year
    } else {
        return 0;  // Not a leap year
    }
}

int daysInMonth(int month, int year) {
    int days = 31;  // January by default

    switch (month) {
        case 2:
            if (isLeapYear(year)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
    }

    return days;
}

int main() {
    // Get current date
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    // Input birth date
    int birth_year, birth_month, birth_day;
    printf("Enter your birth date (YYYY MM DD): ");
    scanf("%d %d %d", &birth_year, &birth_month, &birth_day);

    // Set birth date in struct tm format
    struct tm birth_date = { .tm_year = birth_year - 1900, .tm_mon = birth_month - 1, .tm_mday = birth_day };
    time_t birth_time = mktime(&birth_date);

    // Calculate the difference in seconds
    time_t diff = difftime(now, birth_time);

    // Convert seconds to days
    int days = diff / (60 * 60 * 24);

    printf("Number of days from birth to today: %d\n", days);

    return 0;
}
