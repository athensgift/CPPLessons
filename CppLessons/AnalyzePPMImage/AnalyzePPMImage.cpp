// AnalyzePPMImage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ppm_format.h"
#include <iostream>
#include <string>

using namespace std;
using namespace imaging;


int main(int argc,char *argv[])
{
	string imagePath = "";
	if (argc <= 1) {
		cout << "File name of the image to load: ";
		cin >> imagePath;
	}
	else {
		imagePath = argv[1];
	}

	Image * theImage = ReadPPM(imagePath.c_str());
	auto data = theImage->getRawDataPtr();

	cout << "Image dimensions are: " << theImage->getWidth() << " X " << theImage->getHeight() << endl;
	cout << "The average color of the image is(" << &data[0] << ", " << (&data[1]) << ", " << (&data)[2] << ")" << endl;


	system("PAUSE");
	return 0;
}

