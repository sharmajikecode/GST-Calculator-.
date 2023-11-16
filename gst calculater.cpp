#include <stdio.h>

int main(){
	float gst,amount,total,netamount;
	
	printf("what is your total product amount?\n");
	scanf("%f",&amount);
	printf("how many tax you give on product?\n");
	scanf("%f",&gst);
	
    total = amount * gst/100;
	
	printf("total tax amount %f * %f = %f\n", amount, gst, total);
	
	netamount = total + amount;
	
	printf("total amount after tax %f",netamount, amount, total);
	
	return 0;
}
