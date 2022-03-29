// Course: Advanced C programming
// exercise 1, question 2
// file name: ex1_q2.c
#define _CRT_SECURE_NO_WARNINGS
// --------------------------- //
// include package section:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// --------------------------- //


// --------------------------- //
// function declaration and main section:
// DO NOT CHANGE anything in the following macro:
#ifdef FUNC_DECLARE
	#include "ex1_q2.h"
#else
	#define FUNC_DECLARE
	
	// struct declaration section:
	typedef struct point
	{
		int x, y;
	}point;

	typedef struct polygon
	{
		int n;
		point* points;
		double scope;
	}polygon;
	// --------------------------- //

	unsigned long student_id();
	void scanPoint(point*);
	void scanPolygon(polygon*);
	double distance(point*, point*);
	void calculatePolygonScope(polygon*);
	void freeMemory(polygon*);

	int main()
	{
		unsigned long id_num;
		polygon poly;
		
		// call functions:
		id_num = student_id();
		printf("[id: %lu] start main\n", id_num);
		
		scanPolygon(&poly);
		calculatePolygonScope(&poly);
		freeMemory(&poly);
	
		// write output:
		printf("Output: Scope of polygon: %.2lf\n", poly.scope);
		
		return 0;
	}
#endif
// --------------------------- //


// --------------------------- //
// function implementation section:
unsigned long student_id()
{
    // return your id number,
    // for example if your id is 595207432
    // return 595207432
    // your code:
    return 326856432;
}
// --------------------------- //


/// <summary>
/// Function scan a point in the plane,
/// Used as auxiliary function for createPolygon.
/// </summary>
/// <param>point* p - pointer to p</param>
/// <returns>None</returns>
void scanPoint(point* p)
{
	// your code:
    printf("Enter X point number: ");
    scanf("%d", &p->x);
    printf("Enter Y point number ");
    scanf("%d", &p->y);
}
// --------------------------- //


/// <summary>
/// Function scan a polygon with n verticies,
/// Example of input parameters:
/// 4 1 2 2 3 3 2 2 1
/// translate to 4 points with values: 
/// (1,2), (2,3), (3,2), (2,1) 
/// </summary>
/// <param>polygon* poly - pointer to polygon</param>
/// <returns>None</returns>
void scanPolygon(polygon* poly)
{
	// your code:
    printf("Enter amount of points: ");
    scanf("%d", &poly->n);
    poly->points = malloc(poly->n * sizeof(point));
    for (int i = 0; i < poly->n; i++) scanPoint(poly->points + i);
}
// --------------------------- //


/// <summary>
/// Function calculates distance between 2 adjacent points  
/// </summary>
/// <param>point* p1 - pointer to the first point</param>
/// <param>point* p2 - pointer to the second point</param>
/// <returns>The Euclidean distance between p1 and p2</returns>
double distance(point* p1, point* p2)
{
	// your code:
    double result_1 = ((double)(p1->x - p2->x) * (double)(p1->x - p2->x));
    double result_2 = ((double)(p1->y - p2->y) * (double)(p1->y - p2->y));
    return sqrt(result_1 + result_2);
}
// --------------------------- //


/// <summary>
/// Function calculates the Scope of the entire polygon.
/// Setting the result inside the polygon object.  
/// </summary>
/// <param>polygon* poly - pointer to polygon</param>
/// <returns>None</returns>
void calculatePolygonScope(polygon* poly)
{
	// your code:
    poly->scope = 0;
	if (poly->n == 1) return;
    for (int i = 0; i < poly->n; i++)
    {
        if (poly->n == 2)
        {
            poly->scope += distance(poly->points + i, poly->points + i + 1);
            return;
        }
        if (i == (poly->n - 1)) poly->scope += distance(poly->points + i, poly->points);
        else poly->scope += distance(poly->points + i, poly->points + i + 1);
    }
}
// --------------------------- //


/// <summary>
/// Function free alocated memory. 
/// </summary>
/// <param>polygon* poly - pointer to polygon</param>
/// <returns>None</returns>
void freeMemory(polygon* poly)
{
	// your code:
    free(poly->points);
}
// --------------------------- //