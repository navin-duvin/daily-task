/*5. Write a program by using a switch case. 
If a user enters 11 it will have area of circle and 
when user enters 22 it will have area of rectangle and 
when user enters 33 it will give area of square. 
When the user enters 44 it will give an area of triangle.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int choice;
	float radius,side,height,base,area,length,width;
	while(1){
		printf("11.calculatearea of circle\n22.calculate area of rectangle\n33.calculate area of square\n44.calculate area of triangle\n55.exit\n");
		printf("Enter the choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 11:{
			printf("Enter the radius for cirlce:\n");
				scanf("%f",&radius);
				area = 3.14*radius*radius;
				printf("Area of cirlce:%f\n",area);
				break;
			}
			case 22:{
				printf("Enter the length and width of rectangle:\n");
				scanf("%f %f",&length,&width);
				area = length * width;
				printf("area of rectangle:%f\n",area);
				break;
			}
			case 33:{
				printf("Enter the side of square:\n");
				scanf("%f",&side);
			    area = side*side;
				printf("Area of square: %f\n",area);
				break;
			}
			case 44:{
				printf("Enter the base and  height of triangle:\n");
				scanf("%f %f",&base,&height);
				area= 0.5*base*height;
				printf("Area of triangle: %f\n",area);
				break;
			}	
			case 55:
				exit(0);
			default:
				printf("Enter valid choice\n");
		}
	}
	return 0;
}
