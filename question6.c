#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Movie {
    char title[100];
    char director[100];
    int year;
};

int main() {
    int numMovies;
    printf("Enter the number of movies: ");
    scanf("%d", &numMovies);

    
    struct Movie *movies = (struct Movie*)malloc(numMovies * sizeof(struct Movie));

    
    for (int i = 0; i < numMovies; i++) {
        printf("\nEnter details for Movie %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", movies[i].title); 
        printf("Director: ");
        scanf(" %[^\n]s", movies[i].director); 
        printf("Year: ");
        scanf("%d", &movies[i].year);
    }

    
    printf("\nMovie List:\n");
    for (int i = 0; i < numMovies; i++) {
        printf("Movie %d\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Director: %s\n", movies[i].director);
        printf("Year: %d\n\n", movies[i].year);
    }

    
    free(movies)

    return 0;
}