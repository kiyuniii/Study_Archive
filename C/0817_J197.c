#include <stdio.h>

typedef struct {
    int x1;
    int y1;
    int x2;
    int y2;
} Rect;

int main() {
    Rect r1, r2;
    scanf("%d%d%d%d", &r1.x1, &r1.y1, &r1.x2, &r1.y2);   
    scanf("%d%d%d%d", &r2.x1, &r2.y1, &r2.x2, &r2.y2);   
    
    int minX;
    if(r1.x1 < r2.x1) minX = r1.x1;
    else minX = r2.x1;
    int minY;
    if(r1.y1 < r2.y1) minY = r1.y1;
    else minY = r2.y1;

    int maxX;
    if(r1.x2 < r2.x2) maxX = r2.x2;
    else maxX = r1.x2;
    int maxY;
    if(r1.y2 < r2.y2) maxY = r2.y2;
    else maxY = r1.y2;

    printf("%d %d %d %d", minX, minY, maxX, maxY);
}