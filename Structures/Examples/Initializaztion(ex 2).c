#include<stdio.h>
typedef struct car {
	char engine[50];
	char fuel_type[10];
	int fuel_tank_cap;
	float city_mileage;
}C;
int main()
{
	C c1 = {
			"DDis 190 Engine",
			"Diesel",
			37,
			19.74
			};
			
	C c2 = {
			"Kappa",
			"Petrol",
			22,
			14.5
			};
	printf("For Peron C1\nEngine:%s\nFule_Type:%s\nFule_tank:%d\nMilage:%f\t\n",c1.engine,c1.fuel_type,c1.fuel_tank_cap,c1.city_mileage);
	printf("\nFor PersonC2\nEngine:%s\nFule_Type:%s\nFule_tank:%d\nMilage:%f\t",c2.engine,c2.fuel_type,c2.fuel_tank_cap,c2.city_mileage);
	return 0;

}
