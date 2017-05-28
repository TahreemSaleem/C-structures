# include <stdio.h>
struct complex{
	float real;
	float imaginary;
}num2;

int main()
{
	int i;
	float sum_real=0, sum_imaginary=0;
	for(i=0; i<2; i++)
	{ struct complex numi;
	printf ("Enter Real part of %d complex number\n",i+1 );
	scanf ("%f", &numi.real);
	printf ("Enter Imaginary part of %d compex number\n",i+1);
	scanf ("%f", &numi.imaginary);
	sum_real+=numi.real;
	sum_imaginary+=numi.imaginary;
	}

	printf ("Sum of Two Imaginary Numbers is %.3f+%.3fi\n", sum_real, sum_imaginary);


	return 0;
}
