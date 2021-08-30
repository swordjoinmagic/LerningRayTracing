
/*
 *
 * 在贴图上的(x,y)位置绘制值为(r,g,b)的像素
 */
void SetPixel(unsigned char* pxiels,int width,int x,int y,int r,int g,int b)
{
	pxiels[y * width * 3 + x * 3] = r;
	pxiels[y * width * 3 + x * 3 + 1] = g;
	pxiels[y * width * 3 + x * 3 + 2] = b;

}