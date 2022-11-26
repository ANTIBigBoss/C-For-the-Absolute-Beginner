// 2022-11-25

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct people { // Information to collect for each people
  char firstName[30];
  char lastName[30];
  char phoneNumber[30];
  char friendshipYears[30];
  char email[70]; // Array probably doesn't need to be this big but you never
                  // know with emails
} p;              // p for people so my brain makes the connection

void printChoices() { // Prints the menu options
  printf("\nWelcome to Mitch's People Manager App! Please select from the "
         "following "
         "options below:\n");
  printf(
      "\nEnter in 1 to Print out a list of current people recorded in the app");
  printf("\nEnter in 2 to edit a person's contact info");
  printf("\nEnter in 3 to exit the People Manager App");
  printf("\n\nEnter in your choice of 1, 2 or 3 here: ");
}
void printpeople(struct people p) { // Prints the people with menu option 1

  if (p.firstName[0] == '\0') { // If firstName is null value/empty
    printf(NULL); // prints nothing on first name if only 'enter' pressed in
  } else {        // If first name is not null value/empty
    printf("First Name: %s",
           strcmp(p.firstName, "\0") != 0 // If first name is not null/empty
               ? p.firstName // Prints the first name and sets a line down
               : "\n");
  }
  if (p.lastName[0] == '\0') { // If last name isn't null value/empty
    printf(NULL);
  } else {
    printf("Last Name: %s",
           strcmp(p.lastName, "\0") != 0 // If firstName is not null/empty
               ? p.lastName              // Prints first name
               : "\n"); // Prints nothing if first name is null/empty
  }
  if (p.phoneNumber[0] == '\0') {
    printf(NULL);
  } // prints nothing on phone number if only 'enter' pressed in
  else {
    printf("Phone: %s",
           strcmp(p.phoneNumber, "\0") != 0
               ? p.phoneNumber
               : "\n"); // prints phone number if phone number is not null
  }
  if (p.friendshipYears[0] == '\0') {
    printf(NULL); // prints nothing on years of friendship if only 'enter'
                  // pressed in
  } else {
    printf("Years friends: %s", strcmp(p.friendshipYears, "\0") != 0
                                    ? p.friendshipYears
                                    : "\n"); // prints friend years if not null
  }
  if (p.email[0] == '\0') {
    printf(NULL); // prints nothing on email if only 'enter' pressed in
  } else {
    printf("Email: %s", strcmp(p.email, "\0") != 0
                            ? p.email
                            : "\n"); // prints the email if not null
  }
}

void printAllpeople(struct people c[]) { // Prints all people
  for (int x = 0; x < 5; x++) {
    if (c[x].firstName[0] == '\0' &&
        c[x].email[0] == '\0' && // If statement finds if first name is null and
                                 // email is null
        c[x].phoneNumber[0] == '\0' &&
        c[x].friendshipYears[0] ==
            '\0') { // If statement finds if phone number is null and years of
                    // friendship is null
      printf("\n");
      printf("Person number %d has no entries\n",
             x + 1); // Lets the user know no people info is in this slot
    } else {
      printf("Person number %d:\n", x + 1);
      printpeople(c[x]);
    }
  }

  getchar();
  return; // Prints the menu options then returns you to the menu
}
struct people addPeople() {     // New Function to add a person
  getchar();                    // Gets a character input from the user
  struct people newpeople;      // Create a new people struct
  char userInput[30] = {'\0'};  // Create a new char array to hold the userInput
  printf("Enter first name: "); // Prints out the first name
  fgets(userInput, 30, stdin);  // Get the input with fgets
  if (strcmp(userInput, "\n") == 0)    // If the input is a newline
    strcpy(newpeople.firstName, "\0"); // Set the first name to null
  else // If the userInput is not a newline (userInput is detected)
    strcpy(newpeople.firstName, // Copy the first name to the new people
           userInput);          // set the first name to the user's userInput

  printf("Enter last name: ");
  fgets(userInput, 30, stdin);
  if (strcmp(userInput, "\n") == 0)
    strcpy(newpeople.lastName, "\0");
  else
    strcpy(newpeople.lastName, userInput);
  printf("Enter phone Number: ");
  fgets(userInput, 30, stdin);
  if (strcmp(userInput, "\n") == 0)
    strcpy(newpeople.phoneNumber, "\0");
  else
    strcpy(newpeople.phoneNumber, userInput);

  printf("Enter years of friendship: ");
  fgets(userInput, 30, stdin);
  if (strcmp(userInput, "\n") == 0)
    strcpy(newpeople.friendshipYears, "\0");
  else
    strcpy(newpeople.friendshipYears, userInput);

  printf("Enter email: ");
  fgets(userInput, 30, stdin);
  if (strcmp(userInput, "\n") == 0)
    strcpy(newpeople.email, "\0");
  else
    strcpy(newpeople.email, userInput);

  printpeople(newpeople);

  return newpeople; // Return the new people struct
}

int main() {
  int x;

  struct people people[5];   // Create an array of 5 people
  struct people *p = people; // Create a pointer to the array
  for (int x = 0; x < 5; x++) {
    strcpy(people[x].firstName, "\0");   // Set the first name to null
    strcpy(people[x].lastName, "\0");    // Set the last name to null
    strcpy(people[x].phoneNumber, "\0"); // Set the phone number to null
    strcpy(people[x].email, "\0");       // Set the email to null
    strcpy(people[x].friendshipYears,
           "\0"); // Set the years of friendship to null
  }
  int exit = 0; // Set the exit variable to 0 for the menu
  while (exit == 0) {
    printChoices();
    int choice = 0;
    scanf(" %d", &choice);
    if (choice == 1) {
      printAllpeople(people);
    } else if (choice == 2) {
      printf("\nWhich people slot would you like to edit? You may choose from "
             "1-5: ");
      int slot = 0;
      scanf(" %d", &slot);
      if (slot > 0 && slot < 6) {
        people[slot - 1] = addPeople();
      } else {
        printf("Invalid slot number!\n"); // Prints out an error if the users
                                          // enters in an invalid slot number
                                          // (1-5) is valid
      }
    } else if (choice == 3) {
      exit = 1;
      printf(
          "\nThank you for using Mitchell's people App! Have a great day!\n");
      return 0;
    } else {
      printf("Invalid choice, try again!\n"); // If the user enters anything
                                              // other that 1,2 or 3
    }
  }
}
