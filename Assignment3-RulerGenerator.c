

#include <stdio.h>

// Declare variables
int main(void) {
   int size;
   int rulerCount = 0;
   int totalSize = 0;
// Create loop that will continue until negative one is entered
   while (1) {
      printf("Welcome to the ruler generating program!\n");
      printf("Please enter the size ruler you require (-1 to quit):\n");
      scanf("%d", &size);

// Exit the loop if the user enters -1
      if (size == -1) {
         break; 
      }

      int plusPosition = 5;
      int numberPosition = 10;

      for (int i = 1; i <= size; ++i) {
         if (i % numberPosition == 0) {
            printf("%d", i / numberPosition);
         } else if (i % plusPosition == 0) {
            printf("+");
         } else {
            printf("-");
         }
      }
      
      printf("\n");
// Increment rulerCount and add size to totalsize
      rulerCount++;
      totalSize += size;
   }
// Continues until negative one is input
   if (rulerCount > 0) {
      double averageSize = (double)totalSize / rulerCount;
      printf("You have generated %d rulers, the average size ruler requested was %.1f, have a great day!\n", rulerCount, averageSize);
   } else {
      printf("You didn't generate any rulers. Have a great day!\n");
   }

   return 0;
}