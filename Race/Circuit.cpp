#include "Circuit.h"

void Circuit::SetLength(int lg)
{
	this->length = lg;
}

void Circuit::SetWeather(Weather wth)
{
	W = wth;
}

void Circuit::AddCar(Car *C)
{
	Cars.push_back(C);
}

void Circuit::Race()
{
	double aux = 0;
	for (int i = 0;i < Cars.size();i++)
	{
		Cars[i]->SetForRace(W);
		if ((Cars[i]->GetFuel_Capacity() / Cars[i]->GetFuel_Consumption() * 100) < length)
			time[i] = 0;
		else time[i] = double(length / Cars[i]->GetAverageSpeed());
	}
	for(int i=0;i<Cars.size();i++)
		for (int j = 0;j < Cars.size();j++)
		{
			if (time[i] < time[j])
			{
				aux = time[i];
				time[i] = time[j];
				time[j] = aux;
				Car* temp = Cars[i];
				Cars[i] = Cars[j];
				Cars[j] = temp;
			}	
		}
}

void Circuit::ShowFinalRanks()
{
	int hours, min, seconds;
	for (int i = 0;i < Cars.size();i++)
		if (time[i] != 0)
		{
			hours = time[i] / 1;
			min = (time[i] - hours) * 60;
			seconds = ((time[i] - hours) * 60 - min) *60 ;
			cout << Cars[i]->GetName() << "    " << hours << " ore " << min << " de minute " << seconds <<  " de secunde"  << endl;
		}
}

void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 0;i < Cars.size();i++)
		if (time[i] == 0)
			cout << Cars[i]->GetName() << "   did not finish" << endl;
}
