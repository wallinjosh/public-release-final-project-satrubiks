	/*colors: 1=white, 2=pink, 3= green, 4=red, 5=blue, 6=yellow */
byte a1=6, a2=2, a3=2, a4=1, b1=2, b2=5, b3=4, b4=3, c1=1, c2=3, c3=4, c4=4, d1=3, d2=6, d3=4, d4=6, e1=6, e2=2, e3=5, e4=1, f1=1, f2=3, f3=5, f4=5;
byte tmp1=0, tmp2=0, tmp3=0, tmp4=0, tmp5=0, tmp6=0, tmp7=0, tmp8=0;	
#define FINISH (((a1==1 && a2==1 && a3==1 && a4==1) || (a1==2 && a2==2 && a3==2 && a4==2 ) || (a1==3 && a2==3 && a3==3 && a4==3)||(a1==4 && a2==4 && a3==4 && a4==4)||(a1==5 && a2==5 && a3==5 && a4==5)||(a1==6 && a2==6 && a3==6 && a4==6))&& ((b1==1 && b2==1 && b3==1 && b4==1) || (b1==2 && b2==2 && b3==2 && b4==2 ) || (b1==3 && b2==3 && b3==3 && b4==3)||(b1==4 && b2==4 && b3==4 && b4==4)||(b1==5 && b2==5 && b3==5 && b4==5)||(b1==6 && b2==6 && b3==6 && b4==6))&& ((c1==1 && c2==1 && c3==1 && c4==1) || (c1==2 && c2==2 && c3==2 && c4==2 ) || (c1==3 && c2==3 && c3==3 && c4==3)||(c1==4 && c2==4 && c3==4 && c4==4)||(c1==5 && c2==5 && c3==5 && c4==5)||(c1==6 && c2==6 && c3==6 && c4==6))&&((d1==1 && d2==1 && d3==1 && d4==1) || (d1==2 && d2==2 && d3==2 && a4==2 ) || (d1==3 && d2==3 && d3==3 && d4==3)||(d1==4 && d2==4 && d3==4 && d4==4)||(d1==5 && d2==5 && d3==5 && d4==5)||(d1==6 && d2==6 && d3==6 && d4==6))&&((e1==1 && e2==1 && e3==1 && e4==1) || (e1==2 && e2==2 && e3==2 && e4==2 ) || (e1==3 && e2==3 && e3==3 && e4==3)||(e1==4 && e2==4 && e3==4 && e4==4)||(e1==5 && e2==5 && e3==5 && e4==5)||(e1==6 && e2==6 && e3==6 && e4==6))&&((f1==1 && f2==1 && f3==1 && f4==1) || (f1==2 && f2==2 && f3==2 && f4==2 ) || (f1==3 && f2==3 && f3==3 && f4==3)||(f1==4 && f2==4 && f3==4 && f4==4)||(f1==5 && f2==5 && f3==5 && f4==5)||(f1==6 && f2==6 && f3==6 && f4==6)))
active proctype rubiks()
{
	do
	
	::assert(!FINISH) -> atomic{
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
	
	::assert(!FINISH)->atomic{
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
	
	::assert(!FINISH)->atomic{
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
	
	::assert(!FINISH)->atomic{
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
	
	::assert(!FINISH)->atomic{
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
	
	::assert(!FINISH)->atomic{
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


