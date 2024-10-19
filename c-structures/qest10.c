//write a structure capable of storing dates, write a function to compare those dates using typedef
#include <stdio.h>

// Define a structure to store a date using typedef
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Function to compare two dates
int compareDates(Date d1, Date d2) {
    // Compare year
    if (d1.year > d2.year) {
        return 1;
    } else if (d1.year < d2.year) {
        return -1;
    }
    
    // If years are the same, compare month
    if (d1.month > d2.month) {
        return 1;
    } else if (d1.month < d2.month) {
        return -1;
    }
    
    // If months are the same, compare day
    if (d1.day > d2.day) {
        return 1;
    } else if (d1.day < d2.day) {
        return -1;
    }

    // Dates are equal
    return 0;
}

int main() {
    Date date1, date2;
    
    // Take input for the first date
    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    
    // Take input for the second date
    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare the two dates
    int result = compareDates(date1, date2);
    
    // Print the comparison result
    if (result == 0) {
        printf("Both dates are the same.\n");
    } else if (result == 1) {
        printf("The first date is later than the second date.\n");
    } else {
        printf("The second date is later than the first date.\n");
    }

    return 0;
}
