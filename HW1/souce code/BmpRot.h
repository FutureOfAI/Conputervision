typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned int DWORD;
typedef long LONG;

typedef struct  tagBITMAPFILEHEADER{
	WORD bfType;//must be 0x424D,it means "BM"
	DWORD bfSize;
	WORD bfReserved1;
	WORD bfReserved2;
	DWORD bfOffBits;
}BITMAPFILEHEADER;

typedef struct tagBITMAPINFOHEADER{
	DWORD biSize;
	LONG biWidth;
	LONG biHeight;
	WORD biPlanes;//mean must be 1
	WORD biBitCount;
	DWORD  biCompression;
	DWORD  biSizeImage;
	LONG  biXPelsPerMeter;
	LONG  biYPelsPerMeter;
	DWORD  biClrUsed;
	DWORD  biClrImportant;
}BITMAPINFOHEADER;

typedef struct tagRGBQUAD{
	BYTE rgbBlue;
	BYTE rgbGreen;
	BYTE rgbRed;
	BYTE rgbReserved;
}RGBQUAD;


typedef struct tagIMAGEDATA
{
	BYTE blue;
	BYTE green;
	BYTE red;
}IMAGEDATA;
