/*  Hаписать функцию, которая возвращает количество цифр полученного на вход числа
 * (456789 -> 6, 567 ->3,  6789 ->4);
 * main.c
 *
 *  Created on: 10.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
int calculateDigitis(int num);

int main(){
	printf("%d", calculateDigitis(0));
	return 0;

}

int calculateDigitis(int num){
	int digitis = 0;

	if (num == 0){
		return 1;
	}

	while(num!=0){
		num = num/10;
		digitis++;

	}
	return digitis;

}

