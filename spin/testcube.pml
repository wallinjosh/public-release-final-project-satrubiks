byte a=1, b=2, c=3, d=4, e=5, f=6;
byte tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8;
#define FINA (a==4)
#define FINB (b==1)
#define FINC (c==2)
#define FIND (d==3)
#define FINE (e==5)
#define FINF (f==6)
#define FINAL (FINA && FINB && FINC && FIND && FINE && FINF)
active proctype test(){
	do
	:: assert(!FINAL)-> atomic{
		printf("right");
		tmp1=a;
		tmp2=f;
		tmp3=c;
		tmp4=e;
		f=tmp1;
		c=tmp2;
		e=tmp3;
		a=tmp4
		}
	:: assert(!FINAL)-> atomic{
		printf("up");
		tmp1=a;
		tmp2=b;
		tmp3=c;
		tmp4=d;
		b=tmp1;
		c=tmp2;
		d=tmp3;
		a=tmp4
		}
	od
}
