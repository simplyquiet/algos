#include <algorithm>
#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>
#include <fstream>
using namespace std;


void BubbleSort(auto& data)
{
	for(int i=0; i < data.size();i++)
	{
		for(int j=0;j < data.size()-1; j++)
		{
			if(data[j] > data[j+1])
			{
				swap(data[j],data[j+1]);
			}
		}
	}
}


int main()
{
	vector<string> data;
	string input;

        ifstream infile {"top1Mweb"}; //create an input fil$
        if(!infile) //test if the handle was created succes$
        {
                cout<<"Error reading from file bin/data/input"<<endl;
                return -1;
        }
        else
        //infile>>input; //read from the file
        while(infile>>input)//read an unknown number of inp$
        {
                data.push_back(input);
        }

	 BubbleSort(data);

	return 0;
}
