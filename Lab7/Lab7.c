#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

enum OCtypes {
	Symbian,
	Embedded,
	Linux,
	Windows,
	VxWorks,
	QNX
};



int main() {
	//First task.
	{
		enum OCtypes a;
		a = Symbian;
		printf("a=%d\n", a);
	};

	//Second task.
	struct Square {
		int x1, x2, x3, x4, y1, y2, y3, y4;
	};

	struct Square c;
	c.x1 = 4;
	c.x2 = 10;
	c.x3 = 10;
	c.x4 = 4;
	c.y1 = 1;
	c.y2 = 3;
	c.y3 = 9;
	c.y4 = 9;

	double ans = pow(sqrt((pow((c.x2 - c.x1), 2) + pow((c.y2 - c.y1), 2))), 2);
	printf("Area=%f\n", ans);


	//Third task.
	struct BIT {
		unsigned int Ready : 1;
		unsigned int TonerLow : 1;
		unsigned int DrumDamag : 1;
		unsigned int NoPaper : 1;
	};

	union Printer {
		struct BIT b;
		short i;
	};

	union Printer t;
	scanf("%hx", &t.i);
	if (t.b.Ready == 1)printf("Ready: ON\n");
	if (t.b.Ready == 0)printf("Ready: OFF\n");
	if (t.b.TonerLow == 1)printf("Ready: ON\n");
	if (t.b.TonerLow == 0)printf("Ready: OFF\n");
	if (t.b.DrumDamag == 1)printf("Ready: ON\n");
	if (t.b.DrumDamag == 0)printf("Ready: OFF\n");
	if (t.b.NoPaper == 1)printf("Ready: ON\n");
	if (t.b.NoPaper == 0)printf("Ready: OFF\n");

};