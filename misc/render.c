#include <stdio.h>

#define width 20
#define heigth 20

static char Matrix[heigth][width];

struct {int x,y;} volatile typedef _2d_point;

void main(void){
    _2d_point Point,Point2;
    Point.x = 20;Point.y = 10;
    Point2.x = 13;Point2.y = 20;

    DrawLine(Point,Point2);

    PrintMatrix();

}

void DrawLine(_2d_point A, _2d_point B){
    int i;
    //Get gradient
    float slope = (A.y - B.y) / (A.x - B.x);
    //One-point/slope formula
    for(i=(A.x < B.x ? A.x: B.x); i < (A.x > B.x ? A.x: B.x); i++){
            Matrix[(int)((slope*i)-(slope*A.x)+A.y)][i] = slope > 0 ? '/' : '\\';
    }
}

void PrintMatrix(){
    int i,j;
    for(i = heigth-1; i >= 0; i-- ){
        for(j = 0; j < width; j++ )
            putchar(Matrix[i][j]);
        putchar('\n');
    }
}
