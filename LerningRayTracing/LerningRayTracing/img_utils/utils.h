
/*
 *
 * ����ͼ�ϵ�(x,y)λ�û���ֵΪ(r,g,b)������
 */
void SetPixel(unsigned char* pxiels,int width,int x,int y,int r,int g,int b)
{
	pxiels[y * width * 3 + x * 3] = r;
	pxiels[y * width * 3 + x * 3 + 1] = g;
	pxiels[y * width * 3 + x * 3 + 2] = b;

}