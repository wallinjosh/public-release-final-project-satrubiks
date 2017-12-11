	/*colors: 1=blue, 2=yellow, 3= green, 4=white, 5=red, 6=pink */
byte a1=1, a2=1, a3=1, a4=1, b1=2, b2=2, b3=2, b4=2, c1=3, c2=3, c3=3, c4=3, d1=4, d2=4, d3=4, d4=4, e1=5, e2=5, e3=5, e4=5, f1=6, f2=6, f3=6, f4=6;
byte tmp1=0, tmp2=0, tmp3=0, tmp4=0, tmp5=0, tmp6=0, tmp7=0, tmp8=0, tmp9=0, tmp10=0, tmp11=0, tmp12=0;	
#define ASIDE (a1==3	 && a2==6 && a3==2 && a4==3)
#define BSIDE (b1==2 && b2==1 && b3==5 && b4==1)
#define CSIDE (c1==5 && c2==5 && c3==1 && c4==6)
#define DSIDE (d1==5 && d2==6 && d3==3 && d4==6)
#define ESIDE (e1==4 && e2==4 && e3==2 && e4==2)
#define FSIDE (f1==3 && f2==4 && f3==4 && f4==1)
#define FINISH (ASIDE && BSIDE && CSIDE && DSIDE && ESIDE)
active proctype rubiks()
{
	do
	
	::assert(!FINISH) -> atomic{
		tmp1=a2;
		tmp2=a4;
		tmp3=b2;
		tmp4=b4;
		tmp5=c1;
		tmp6=c3;
		tmp7=d2;
		tmp8=d4;
		tmp9=e1;
		tmp10=e2;
		tmp11=e3;
		tmp12=e4;
		a2=tmp7;
		a4=tmp8;
		b2=tmp1;
		b4=tmp2;
		c1=tmp4;
		c3=tmp3;
		d2=tmp6;
		d4=tmp5;
		e2=tmp9;
		e4=tmp10;
		e3=tmp12;
		e1=tmp11;	
		printf("Right")
		}
	
	::assert(!FINISH)->atomic{
		tmp1=a1;
		tmp2=a3;
		tmp3=b1;
		tmp4=b3;
		tmp5=c2;
		tmp6=c4;
		tmp7=d1;
		tmp8=d3;
		tmp9=f1;
		tmp10=f2;
		tmp11=f3;
		tmp12=f4;
		a1=tmp7;
		a3=tmp8;
		b1=tmp1;
		b3=tmp2;
		c4=tmp3;
		c2=tmp4;
		d1=tmp6;
		d3=tmp5;
		f3=tmp9;
		f4=tmp11;
		f2=tmp12;
		f1=tmp10;	
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
		tmp9=b1;
		tmp10=b2;
		tmp11=b3;
		tmp12=b4;
		a1=tmp3;
		a2=tmp4;
		e1=tmp5;
		e2=tmp6;
		c1=tmp7;
		c2=tmp8;
		f1=tmp1;
		f2=tmp2;
		b2=tmp9;
		b4=tmp10;
		b3=tmp12;
		b1=tmp11;	
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
		tmp9=d1;
		tmp10=d2;
		tmp11=d3;
		tmp12=d4;
		a3=tmp3;
		a4=tmp4;
		e3=tmp5;
		e4=tmp6;
		c3=tmp7;
		c4=tmp8;
		f3=tmp1;
		f4=tmp2;
		d4=tmp11;
		d2=tmp12;
		d1=tmp10;
		d3=tmp9;	
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
		tmp9=a1;
		tmp10=a2;
		tmp11=a3;
		tmp12=a4;
		b4=tmp3;
		b3=tmp4;
		d2=tmp5;
		d1=tmp6;
		f2=tmp7;
		f4=tmp8;
		a2=tmp9;
		a4=tmp10;
		a1=tmp11;
		a3=tmp12;
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
		tmp9=c1;
		tmp10=c2;
		tmp11=c3;
		tmp12=c4;
		b2=tmp3;
		b1=tmp4;
		e2=tmp1;
		e4=tmp2;
		d3=tmp6;
		d4=tmp5;
		f1=tmp7;
		f3=tmp8;
		c3=tmp9;
		c1=tmp10;
		c4=tmp11;
		c2=tmp12;
		printf("Back")
		}
	od
}



