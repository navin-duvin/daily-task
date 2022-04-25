/*
Write a program by using switch case if user enter 11 it will have are area of circle and when user enter 22 it will have area of rectangle and when user enter 33 it will give area of square when user enter 44 it will give area of triangle.*/

using namespace std;
#include<iostream>

int main(){
	int choice;
	float radius,side,height,base,area,length,width;
	while(1){
		cout"11.calculatearea of circle\n22.calculate area of rectangle\n33.calculate area of square\n44.calculate area of triangle\n55.exit\n");
		cout"Enter the choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 11:{
			cout"Enter the radius for cirlce:\n");
				scanf("%f",&radius);
				area = 3.14*radius*radius;
				cout"Area of cirlce:%f\n",area);
				break;
			}
			case 22:{
				cout"Enter the length and width of rectangle:\n");
				scanf("%f %f",&length,&width);
				area = length * width;
				cout"area of rectangle:%f\n",area);
				break;
			}
			case 33:{
				cout"Enter the side of square:\n");
				scanf("%f",&side);
			    area = side*side;
				cout"Area of square: %f\n",area);
				break;
			}
			case 44:{
				cout"Enter the base and  height of triangle:\n");
				scanf("%f %f",&base,&height);
				area= 0.5*base*height;
				cout"Area of triangle: %f\n",area);
				break;
			}	
			case 55:
				exit(0);
			default:
				cout"Enter valid choice\n");
		}
	}
	return 0;
}
