/*
Nicholas Croulet 
3207
Lab 1

 You are to develop the function randchar() as a separate file (random.c) and include it in your repository.
  The function randchar() is a character function that returns a random character from ‘A’ – ‘Z’. 
  The character is used in the main program to generate a random 7 letter word.
*/

// define max and min for random numbers
#define RAND_MIN 0
#define RAND_MAX 26


char randchar() {
    // create an array with all the characters of the alphabet
    int alphabetSize = 26;
    char alphabet[alphabetSize];

    for (int i = 0; i < alphabetSize; i++) {
        alphabet[i] = 'A' + i;
    }

    // randomly choose an element of the array and return it
    int randomNum = rand() % (RAND_MAX + 1) + RAND_MIN;

    return alphabet[randomNum];


}