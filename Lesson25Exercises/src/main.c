#include <stdio.h>

#include <stdlib.h>


char* stringCopy(char *fromStr) {

	int i = 0, j = 0;
	while(*(fromStr+i) != '\0') {
		i++;
	}

	char* holder = (char*) malloc( i*sizeof(char) );

	for(; j<=i; j++) {
		*(holder+j) = *(fromStr+j);
	}

	return holder;

}


typedef struct{

	double totalRain;
	double AverageTemp;
	double AverageWind;


} weatherRecord;


void populateWeather(weatherRecord* records, int n) {
	FILE* source;

	double a, b, c;

	source = fopen("astana.txt", "r");

	for(int i = 0; i < n; i++) {
		fscanf(source, "%lf %lf %lf", &a, &b, &c);
		(records+i)->totalRain = a;
		(records+i)->AverageTemp = b;
		(records+i)->AverageWind = c;
	}

//	for(int i = 0; i < n; i++) {
//		a = (records+i)->totalRain;
//		b = (records+i)->AverageTemp;
//		c = (records+i)->AverageWind;
//		printf("%.0lf\t%.1lf\t%.1lf\n", a, b, c);
//	}
}

double lowestTemp(weatherRecord* records, int n) {
	double min = records->AverageTemp;
	for(int i = 1; i < n; i++) {
		if( min > (records+i)->AverageTemp )
			min = (records+i)->AverageTemp;
	}
	return min;
}


double averageWindSpeed(weatherRecord* records, int n) {
	double sum = 0;

	for(int i = 0; i<n; i++) {
		sum += (records+i)->AverageWind;
	}

	return sum/n;

}


double totalRainfall(weatherRecord* records, int n) {
	double total = 0;
	for(int i = 0; i < n; i++) {
		total += (records+i)->totalRain;
}

	return total;
}

void printTable(weatherRecord* records, n) {
	double a, b, c;
	for(int i = 0; i < n; i++) {
		a = (records+i)->totalRain;
		b = (records+i)->AverageTemp;
		c = (records+i)->AverageWind;
		printf("%.0lf\t%.1lf\t%.1lf\n", a, b, c);
	}
}


int main() {

	int weatherNum = 12;

	weatherRecord* yearAstana = (weatherRecord*) malloc(weatherNum*sizeof(weatherRecord));

	populateWeather(yearAstana, 12);

	printf("%lf\n", totalRainfall(yearAstana, 12));

	printf("%lf\n", lowestTemp(yearAstana, 12));

	printf("%lf\n", averageWindSpeed(yearAstana, 12));

	printTable(yearAstana, 12);

	return 0;
}
