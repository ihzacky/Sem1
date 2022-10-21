#include <stdio.h>
int main (){

    int T; // number of testcases
    char S [100][100] ; // many words , as individual arrays inside one big array

    scanf ("%d\n",T);

    for (int i = 0; i < T; i++){
        scanf ("%s",S[i]); // since you are taking string , not character
    }

    // Now if you want to access i'th word you can do like
    for(int i = 0; i < T; i++)
        printf("%s\n" , S[i]);
    getchar ();
    return 0;

}