/*
 * Draw_Bitmap.h
 *
 * Created: 4/3/2013 11:03:49 AM
 *  Author: mfolz
 */ 


#ifndef DRAW_BITMAP_H_
#define DRAW_BITMAP_H_


/// 268 megs max size
/// reads from the bottom left -> right draws upwards.
// READS ONLY 24BIT color BMPS! No transpari
void ReadBMP_ARRAY(int x, int y, const char *bmparray);

const char BMP_IMAGE2[];

#endif /* DRAW_BITMAP_H_ */