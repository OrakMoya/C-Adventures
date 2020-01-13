//This is the solution to a math problem
//See: https://www.cemc.uwaterloo.ca/resources/potw/2019-20/English/POTWE-19-AE-CP-14-P.pdf


#include "stdio.h"
#include "stdlib.h"
#include "math.h"


int main(){
	int looking, sum, curnum, counter, numcount, starter, flag;

	starter = 2;		//on what number the triangle starts on
	looking = 2020;		//what its looking for
	numcount = 1;		//how many numbers in the current row, which for the first row is 1
	counter = 0;		//counts how many numbers it added to the row
	sum = 0;		//sum of all the previous numbers and the current number added to the row

	curnum = starter;	//sets the first number to be 2

		COUNTER:
	while(counter < numcount){		//while it has written less numbers than that row needs, it repeats this part of the code

		if(curnum == looking){		//checks if the last written number is 2020
			flag = 1;
		}

		sum = sum + curnum;		//add the last written number to the sum
		
		//If i sum it up after adding 2, like below, it would have skipped the first number in the row and instead added the first number in the next row
	
		curnum = curnum + 2;		//adds 2 to the last written number
		counter++;			//counts how many numbers were written
        }


	if(flag != 1){				//if the counter hasnt contained a 2020
			CLEARER:
		counter = 0;			//resets the counter back to 0
		numcount = numcount + 1;	//increases the number of numbers needed for the next row by 1
		sum = 0;			//resets the sum back to 0
		goto COUNTER;			//jumps back to the counter
	}

	else{
			PRINTOUT:
		printf("Sum is %d", sum);
		return 0;
	}
}

