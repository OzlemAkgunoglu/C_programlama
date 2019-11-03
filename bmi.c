#include <stdio.h>

int index(int weight,int height);

int main(int argc, char const *argv[])
{
	float weight,height;
	float BMI;
	printf("Weight(kg):");
	scanf("%f",&weight);
	printf("Height(cm):");
	scanf("%f",&height);
	height=height/100;
	BMI=weight/(height*height);


	if (bmi<=18.5)
	{
		index();
		printf("You are underweight\n");
	}
	else if (bmi<=24.9)
	{
		index();
		printf("Your weight is normal\n");
	}
	else if (bmi<=29.9)
	{
		index();
		printf("You are overweight\n");
	}
	else if (bmi>29.9)
	{	
		index();
		printf("You are obese\n");
	}
	else
	{
		printf("Please enter weight and height as a number\n");
		return 1;
	}

	return 0;
}

int index(int weight,int height)
{
	int BMI=weight/(height*height);
	printf("Your BMI is %f \n",BMI);

}