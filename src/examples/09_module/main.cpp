#include "temperature_data.h"
#include<iostream>
int main() 
{
	std::vector<Temperature> out_temps{ 
		Temperature(1, 90.2), Temperature(2, 99.3), Temperature(3, 99.5),
		Temperature(4, 99.6), Temperature(5, 99.7), Temperature(6, 99.8) };

	TemperatureData data;
	data.save_temps(out_temps);

	std::vector<Temperature> in_temps = data.get_temps();
	for (auto temp : in_temps)
	{
		std::cout << temp.get_hour()<<" " <<temp.get_reading() << "\n";
	}

	return 0;
}