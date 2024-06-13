#include<stdio.h>
#include<math.h>
int main () {
	float a,b,c,d,r1,r2,rp,ip; //rp=real part,ip=imaginary part,[r1,r2]=two roots,d=discriminant
	printf("Enter coefficients of (a,b&c) of quadratic equation (ax^2+bx+c):");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if (d>0) {
		r1= (-b+sqrt(d))/(2*a);
		r2= (-b-sqrt(d))/(2*a);
		printf("Roots are real and different:%f and %f\n",r1,r2);
	}
	else if (d==0)
    {
	    r1=r2= -b/(2*a);
	    printf("Roots are real and same:%f and %f\n",r1,r2);
    }
	else if (d<0) {
		rp=-b/(2*a);
		ip=sqrt(-d)/(2*a);
		printf("Roots are imaginary:%f+%fi & %f-%fi",rp,ip,rp,ip);
	}
	return 0;
}

/*

output:

Enter coefficients of (a,b&c) of quadratic equation (ax^2+bx+c):3
11
10
Roots are real and different:-1.666667 and -2.000000

******************************************************************

Enter coefficients of (a,b&c) of quadratic equation (ax^2+bx+c):
1
-4
4
Roots are real and same:2.000000 and 2.000000

******************************************************************

Enter coefficients of (a,b&c) of quadratic equation (ax^2+bx+c):
3
10
11
Roots are imaginary:-1.666667+0.942809i & -1.666667-0.942809i

##################################################################

*/