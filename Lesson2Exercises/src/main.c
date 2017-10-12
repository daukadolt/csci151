
#include <stdio.h>

#include <math.h>
#define MAX_LEN 128

// Folder experiment
#include <dirent.h>
//

int main() {

	boxExercise();

	circleExercise();

	asciiArt();


	//listDirectory(); THIS FUNCTION HAS BRAVELY SERVED IT'S TERM. REST IN COMMENTS
}


int boxExercise() {
	int l= 4;
	int w = 4;
	int h = 5;

	int vol = l*w*h;

//	scanf("%i", l);
//	scanf("%i", w);
//	scanf("%i", h);

	printf("The volume of the box is: %i \n", vol);
	printf("The surface area of the box is: %i\n", l*w*2 + w*h*4);

	return 0;
}

int circleExercise() {
	double radius = 4;

	double circumf = 2 *	M_PI * radius;
	double area = M_PI * pow(radius,2);

	printf("The circumference of the circle is %f\n", circumf);
	printf("The area of the circle is %f\n", area);
	return 0;
}

int asciiArt() {
// 	This thing works pretty fine too -----> char *filename = "/Users/cassiopeia/eclipse-workspace/Lesson2Exercises/src/image.txt";


	char *filename = "src/image.txt";
	FILE *fptr = NULL;

	if((fptr = fopen(filename,"r")) == NULL)
	{
		fprintf(stderr,"error opening %s\n",filename);
		return 1;
	}

	print_image(fptr);

	fclose(fptr);

	return 0;
}

int print_image(FILE *fptr)
{
    char read_string[MAX_LEN];

    while(fgets(read_string,sizeof(read_string),fptr) != NULL)
        printf("%s",read_string);

    return 0;
}


// BEWARE! FOLDER EXPERIMENT ZONE! HIGHLY BAGUOUS!

int listDirectory() {
	DIR           *d;
	  struct dirent *dir;
	  d = opendir(".");
	  if (d)
	  {
		while ((dir = readdir(d)) != NULL)
		{
		  printf("%s\n", dir->d_name);
		}

		closedir(d);
	  }

	  return(0);
}

// YOU ARE NOW LEAVING HIGHLY BAGUOUS ZONE

