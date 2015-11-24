#include "stdafx.h"
#include "Image.h"

using namespace imaging;

component_t * Image::getRawDataPtr()
{
	return buffer;
}

void Image::setData(const component_t *& data_ptr)
{
	buffer = const_cast<component_t*>(data_ptr);
}

void Image::resize(unsigned int new_width, unsigned int new_height)
{
	width = new_width;
	height = new_height;
}

Image::Image(): width(0), height(0),buffer(nullptr)
{
}

Image::Image(unsigned int width, unsigned int height): width(width),height(height),buffer(nullptr)
{
}

//του περνάμε σαν παράμετρο ενα CONST component_t * data_ptr και το member μας δεν είναι CONST. Γιαυτό θα πρέπει νακάνουμε const_cast
Image::Image(unsigned int width, unsigned int height, const component_t * data_ptr): width(width), height(height), buffer(const_cast<component_t*>(data_ptr))
{
}

Image::Image(const Image & src) : width(src.width), height(src.height), buffer(src.buffer)
{
}

Image::~Image()
{
}

Image & Image::operator=(const Image & right)
{
	width = right.width;
	height = right.height;
	buffer = right.buffer;

	return *this;
}
