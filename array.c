/**********************************************************
*Daniel Bachler
*10-17-15
*array.c
*CS120
*	Contains 5 functions who interact with an array according
*	to their name
***********************************************************/
#include <stdio.h> /*printf*/

/*This method Reverses an array*/
void reverse_array(int a[], int size)
{
	int i, reverse = 0; /*i is for the for loop, reverse is the inverse of i*/
	/*the for loop runs a number of times equvianlt 
	to 2 equal halfs of the arrays values*/
	for(i = size - 1; i >= size / 2; i--) { 
		int first = a[reverse], second = a[i]; /*Sets up the flipped variables*/
		a[i] = first; /*flips the first variable*/
		a[reverse] = second; /*flips the second variable*/
		reverse++; /*counts up inverse i*/
	}
} 

/*Adds the contents of 2 arrays*/
void add_arrays(const int a[], const int b[], int c[], int size)
{
	int i; /*Counting variable for for loop*/
	for(i = 0; i <= size - 1; i++) { /*runs 1 time for each value in arrays*/
		int temp = a[i] + b[i]; /*adds up the coresponding elements of the arrays*/
		c[i] = temp; /*sets value of final array to answer*/
	}
}

/*Multiplies the values in the array by a scaler*/
void scalar_multiply(int a[], int size, int multiplier)
{
	int i; /*counter for the for loop*/
	for(i = 0; i <= size - 1; i++) { /*runs 1 time for each value in arrays*/
		a[i] *= multiplier; /*resets value to itself times scaler*/
	}
}

/*Finds the dot product of two arrays*/
int dot_product(const int a[], const int b[], int size)
{
	int i, dotProduct = 0; /*i is counter for the for loop, dotProduct is the final value to be returned*/
	for(i = 0; i <= size - 1; i++) { /*runs 1 time for each value in arrays*/
		int temp = a[i] * b[i]; /*gets the product*/
		dotProduct += temp; /*adds the value to dotProduct*/
	}
	return dotProduct; /*returns dotProduct*/
}

/*Finds the cross product of 2 arrays and sets those values into a third*/
void cross_product(const int a[], const int b[], int c[])
{
	c[0] = (a[1] * b[2]) - (a[2]*b[1]); /*sets c[0] to its needed value*/
	c[1] = -1 * ((b[2] * a[0]) - (b[0] * a[2])); /*sets c[1] to its needed value*/
	c[2] = ((a[0]*b[1]) - (a[1]*b[0])); /*sets c[2] to its neede value*/
}