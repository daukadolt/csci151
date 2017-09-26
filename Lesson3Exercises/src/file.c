

#include <stdio.h>


#include <math.h>

int main() {


	// Measurement conversion

	double meters = 100;

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

	double height = 10;
	double radius = 4;

	double surf_area = M_PI * radius * (radius + sqrt( pow(height,2) + pow(radius, 2) ) );

	double base_area = M_PI * pow(radius, 2);

	double volume = M_PI * pow(radius, 2) * height/3;

	printf("The cone has a height of %g and radius of %g \n", height, radius);

	printf("Surface area is %g\n", surf_area);

	printf("Circular base area is %g\n", base_area);

	printf("Volume is %g\n \n \n \n", volume);

	//



	// Grade calculator


	double labs_total = 94.3;

	double quizzes_total = 96.5;

	double final_exam = 94.9;

	double final_grade = labs_total * 0.25 + quizzes_total * 0.45 + final_exam * 0.3;

	printf("Total grade for labs is %g\n", labs_total);

	printf("Total grade for quizzes is %g\n", quizzes_total);

	printf("Final exam grade is %g\n", final_exam);

	printf("Final grade for Computer science course is: %g \n", final_grade);

	//
}
