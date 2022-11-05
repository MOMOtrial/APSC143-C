>
#include <string.h>

// Define max char to convert to acronym


int main() {
    // Linear search
    int myArray[5] = {3,7,9,2,1};
    int desiredELEMENT;
    scanf("%d", &desiredELEMENT);

    int found = 0;
    int foundIndex;

    for(int i = 0; i < sizeof(myArray)/ sizeof(myArray[0]); i += 1) {
        if(myArray[i] == desiredELEMENT) {
            found = 1;
            foundIndex = i;

        }
    }
    if(!found) {
        printf("The desired element is not in the array\n");
    }else {
        printf("Desired element found at index %d \n", foundIndex);

    }

//----------------------------
    // Binary search (7.3)
    int sortedArray[5];


}
