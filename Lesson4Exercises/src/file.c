

#include <stdio.h>


#include <math.h>

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

//	firstTask();


	// Second task
	printf("Octal to decimal\n%d\t%d\t%d\n", 010, 062, 05712);
	printf("Decimal to octal\n %o\t %o\t %o\t %o\n", 5, 40, 125, 1000000);
	printf("Hexadecimal to decimal\n %d\t %d\t %d\n", 0x23, 0x2A9, 0xDECAF);
	printf("Decimal to hexadecimal\n %x\t %x\t %x\t %x\n", 38, 259, 98765, 1000000);
	//

	// Third task

	printf("%i\n", 2147483647);
	printf("%i\n", 2147483648);

	//

}


int firstTask() {
	// Measurement conversion

		double meters;

		printf("Please enter length in meters to convert it into other systems\n");

		scanf("%lf", &meters);

		double centimeters = meters * 100;

		double myriameters = meters / 10000;

		double inches = meters * 39.3701;

		double miles = meters * 0.000621371;

		double furlongs = meters * 0.00497096;

		printf("The length in meters is %g. In other systems the value is equivalent to:\n", meters);
		printf("centimeters: %g \n", centimeters);
		printf("myriameters: %g \n", myriameters);
		printf("inches: %g \n", inches);
		printf("miles: %g \n", miles);
		printf("furlongs: %g \n \n \n \n", furlongs);

		//


		// Cone properties

		double height;
		double radius;

		printf("Please enter height of a cone\n");

		scanf("%lf", &height);

		printf("Please enter radius of the base of a cone\n");

		scanf("%lf", &radius);

		double surf_area = M_PI * radius * (radius + sqrt( pow(height,2) + pow(radius, 2) ) );

		double base_area = M_PI * pow(radius, 2);

		double volume = M_PI * pow(radius, 2) * height/3;

		printf("The cone has a height of %g and radius of %g \n", height, radius);

		printf("Surface area is %g\n", surf_area);

		printf("Circular base area is %g\n", base_area);

		printf("Volume is %g\n \n \n \n", volume);

		//



		// Grade calculator


		double labs_total;

		double quizzes_total;

		double final_exam;

		printf("Please enter total grade for lab exercises\n");

		scanf("%lf", &labs_total);

		printf("Please enter total grade for quizzes\n");

		scanf("%lf", &quizzes_total);

		printf("Please enter total grade for the final exam\n");

		scanf("%lf", &final_exam);

		double final_grade = labs_total * 0.2 + quizzes_total * 0.5 + final_exam * 0.3;

		printf("Total grade for labs is %g\n", labs_total);

		printf("Total grade for quizzes is %g\n", quizzes_total);

		printf("Final exam grade is %g\n", final_exam);

		printf("Final grade for Computer science course is: %g \n", final_grade);

		//

		return 0;
}
