#include "stdafx.h"
#include "ppm_format.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace imaging;
using namespace std;

Image * imaging::ReadPPM(const char * filename)
{
	ifstream file(filename, ios::binary);
	string version;
	const component_t* data_ptr;
	int width, height, maxSize;
	file >> version >> width >> height >> maxSize;
	char *buffer = new char[3];
	cout << (file.fail() ? "Could not open specified file" : "File opened successfully") << endl;
	vector<component_t> data_vector;

	while (file.read(buffer,3)) {
		float r((float)((unsigned char)(buffer[0]))), g((float)((unsigned char)buffer[1])), b((unsigned char)((float)buffer[2]));
		data_vector.push_back(r);
		data_vector.push_back(g);
		data_vector.push_back(b);
	}
	cout << data_vector.size() << " "<< &data_vector[0];

	static Image image = Image(width, height, data_ptr);
	return &image;
}
