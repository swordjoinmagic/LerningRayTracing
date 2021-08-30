// LerningRayTracing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#ifdef __clang__
#define STBIWDEF static inline
#endif
#define STB_IMAGE_WRITE_STATIC
#define STB_IMAGE_WRITE_IMPLEMENTATION

#include <iostream>
#include "stb_img/stb_image_write.h"
#include "img_utils/utils.h"

int main()
{
	const int image_width = 200;
	const int image_height = 100;
	unsigned char pxiels[image_width*image_width*3];
	
	for(int j=0;j<image_height;j++)
	{
		for(int i=0;i<image_width;i++)
		{
			auto r = double(i) / image_width;
			auto g = double(j) / image_height;
			auto b = 0.2;

			int ir = r*255;
			int ig = g*255;
			int ib = b*255;

			SetPixel(pxiels,image_width,i,j,ir,ig,ib);
			
		}
	}
	
	
    stbi_write_bmp("OutputImage/test.jpg",image_width,image_height,3,pxiels);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
