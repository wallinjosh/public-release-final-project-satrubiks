	/*colors: 1=white, 2=pink, 3= green, 4=red, 5=blue, 6=yellow */
byte a1=6, a2=2, a3=2, a4=1, b1=2, b2=5, b3=4, b4=3, c1=1, c2=3, c3=4, c4=4, d1=3, d2=6, d3=4, d4=6, e1=6, e2=2, e3=5, e4=1, f1=1, f2=3, f3=5, f4=5;
byte tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8;	
#define FINISH (a1==a2==a3==a4 && b1==b2==b3==b4 && c1==c2==c3==c4 && d1==d2==d3==d4 && e1==e2==e3==e4 && f1==f2==f3==f4)
active proctype rubiks()
{
	do
	
	::atomic{
		tmp1=a2;
		tmp2=a4;
		tmp3=b2;
		tmp4=b4;
		tmp5=c2;
		tmp6=c4;
		tmp7=d2;
		tmp8=d4;
		a2=tmp7;
		a4=tmp8;
		b2=tmp1;
		b4=tmp2;
		c2=tmp3;
		c4=tmp4;
		d2=tmp5;
		d4=tmp6;	
		printf("Right")
		}
	
	::atomic{
		tmp1=a1;
		tmp2=a3;
		tmp3=b1;
		tmp4=b3;
		tmp5=c1;
		tmp6=c3;
		tmp7=d1;
		tmp8=d3;
		a1=tmp7;
		a3=tmp8;
		b1=tmp1;
		b3=tmp2;
		c1=tmp3;
		c3=tmp4;
		d1=tmp5;
		d3=tmp6;	
		printf("Left")
		}
	
	::atomic{
		tmp1=a1;
		tmp2=a2;
		tmp3=e1;
		tmp4=e2;
		tmp5=c1;
		tmp6=c2;
		tmp7=f1;
		tmp8=f2;
		a1=tmp7;
		a2=tmp8;
		e1=tmp1;
		e2=tmp2;
		c1=tmp3;
		c2=tmp4;
		f1=tmp5;
		f2=tmp6;	
		printf("Top")
		}	
	
	::atomic{
		tmp1=a3;
		tmp2=a4;
		tmp3=e3;
		tmp4=e4;
		tmp5=c3;
		tmp6=c4;
		tmp7=f3;
		tmp8=f4;
		a3=tmp7;
		a4=tmp8;
		e3=tmp1;
		e4=tmp2;
		c3=tmp3;
		c4=tmp4;
		f3=tmp5;
		f4=tmp6;	
		printf("Bottom")
		}
	
	::atomic{
		tmp1=b3;
		tmp2=b4;
		tmp3=f2;
		tmp4=f4;
		tmp5=e1;
		tmp6=e3;
		tmp7=d1;
		tmp8=d2;
		b4=tmp3;
		b3=tmp4;
		e1=tmp1;
		e3=tmp2;
		d1=tmp6;
		d2=tmp5;
		f2=tmp7;
		f4=tmp8;
		printf("Front")
		}
	
	::atomic{
		tmp1=b1;
		tmp2=b2;
		tmp3=f1;
		tmp4=f3;
		tmp5=e2;
		tmp6=e4;
		tmp7=d3;
		tmp8=d4;
		b2=tmp3;
		b1=tmp4;
		e2=tmp1;
		e4=tmp2;
		d3=tmp6;
		d4=tmp5;
		f3=tmp7;
		f3=tmp8;
		printf("Back")
		}
	od
}

ltl aside {(a1==1 && a2==1 && a3==1 && a4==1) || (a1==2 && a2==2 && a3==2 && a4==2) || (a1==3 && a2==3 && a3==3 && a4==3) || (a1==4 && a2==4 && a3==4 && a4==4) || (a1==5 && a2==5 && a3==5 && a4==5) || (a1==6 && a2==6 && a3==6 && a4==6)}
