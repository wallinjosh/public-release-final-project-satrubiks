byte a = 1, b = 0;

byte temp1 = 0;

#define FINISH ((a == 0) && (b == 1))

active proctype test()
{
	do
	::  assert(!FINISH) -> atomic {
		temp1 = a;
		a = b;
		b = temp1;
	}
	od
}
