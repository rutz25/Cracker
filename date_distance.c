#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Date{
	int dt;
	char mon[10];
	int mn;
	int yr; 
}typedef Date;


void main()
{
	Date d1,d2;
	char arry[20],arry1[20],k;
	int vr, i,j,count,flag ,num ,n ,cn ,n1 ,n2 ,lyear ,years, m ,dy1 ,dy2 ,dsm ,ds ,tdays ;

	while(1){
		
	vr=0;count=0;flag=0;num=0;n=0;cn=0;n1=0;n2=0;lyear=0;years=0;m=0;dy1=0;dy2=0;dsm=0;ds=0;tdays=0;
	
	printf("\n\n Enter past date in format : date-month-year ");
	fflush(stdin);
	gets(arry);
 
for(i=0;i<2;i++)
{for(k='0';k<='9';k++){
	if(arry[i]==k){
	j=count;
	break;
	}
	
	else 
	count++;
}
if(flag==0)
num=count*10;
else 
n=count;
flag=1;
num=n+num; 
count=0;
}
d1.dt=num;

for(i=3;i<6;i++){
	j=i-3;
d1.mon[j]=arry[i];
}



for(i=7;i<11;i++)
{for(k='0';k<='9';k++){
	if(arry[i]==k){
	j=count;
	cn++;
	break;
	}
	
	else 
	count++;
}
if(cn==1)
n=count*1000;
if(cn==2)
n1=count*100;
if(cn==3)
n2=count*10;
if(cn==4)
{ 
 num=n+n1+n2+count;
}
count=0;
}
d1.yr=num;



if(!(strcmp(d1.mon,"jan")))
num=1;
else if(!(strcmp(d1.mon,"feb")))
num=2;
else if(!(strcmp(d1.mon,"mar")))
num=3;
else if(!(strcmp(d1.mon,"apr")))
num=4;
else if(!(strcmp(d1.mon,"may")))
num=5;
else if(!(strcmp(d1.mon,"jun")))
num=6;
else if(!(strcmp(d1.mon,"jul")))
num=7;
else if(!(strcmp(d1.mon,"aug")))
num=8;
else if(!(strcmp(d1.mon,"sep")))
num=9;
else if(!(strcmp(d1.mon,"oct")))
num=10;
else if(!(strcmp(d1.mon,"nov")))
num=11;
else if(!(strcmp(d1.mon,"dec")))
num=12;

d1.mn=num;

//initialisation.....
d2.dt=0;
d2.mn=0;
strcpy(d2.mon,"...");
d2.yr=0;

//2nd date 
count=0;
flag=0;
num=0;
n=0;
cn=0;
n1=0;
n2=0;
printf("\n\n Enter any date in format : date-month-year ");
fflush(stdin);
gets(arry1);
 
for(i=0;i<2;i++)
{for(k='0';k<='9';k++){
	if(arry1[i]==k){
	j=count;
	break;
	}
	
	else 
	count++;
}
if(flag==0)
num=count*10;
else 
n=count;
flag=1;
num=n+num; 
count=0;
}
d2.dt=num;

for(i=3;i<6;i++){
	j=i-3;
d2.mon[j]=arry1[i];
}
 



for(i=7;i<11;i++)
{for(k='0';k<='9';k++){
	if(arry1[i]==k){
	j=count;
	cn++;
	break;
	}
	
	else 
	count++;
}
if(cn==1)
n=count*1000;
if(cn==2)
n1=count*100;
if(cn==3)
n2=count*10;
if(cn==4)
{ 
 num=n+n1+n2+count;
}
count=0;
}
d2.yr=num;



if(!(strcmp(d2.mon,"jan")))
num=1;
else if(!(strcmp(d2.mon,"feb")))
num=2;
else if(!(strcmp(d2.mon,"mar")))
num=3;
else if(!(strcmp(d2.mon,"apr")))
num=4;
else if(!(strcmp(d2.mon,"may")))
num=5;
else if(!(strcmp(d2.mon,"jun")))
num=6;
else if(!(strcmp(d2.mon,"jul")))
num=7;
else if(!(strcmp(d2.mon,"aug")))
num=8;
else if(!(strcmp(d2.mon,"sep")))
num=9;
else if(!(strcmp(d2.mon,"oct")))
num=10;
else if(!(strcmp(d2.mon,"nov")))
num=11;
else if(!(strcmp(d2.mon,"dec")))
num=12;

d2.mn=num;
 
 //calculation of year gape
years=d2.yr-d1.yr;

years=years-1;
//for same year dates
if(years<0)
{
if(d1.mn==d2.mn)
tdays=d2.dt-d1.dt;

else{
	m=d2.mn-d1.mn-1;
if(d1.mn==2)
dy1=28;
else if(d1.mn==4)
dy1=30;
else if(d1.mn== 6)
dy1=30;
else if(d1.mn==9)
dy1=30;
else if(d1.mn==11)
dy1=30;
else
 dy1=31;

ds=dy1-d1.dt;

ds=ds+d2.dt;
	
for(i=0;i<m;i++)
{d1.mn=d1.mn+1;
 

if(d1.mn<d2.mn)
{ 
if(d1.mn==2)
dy1=28;
else if(d1.mn==4)
dy1=30;
else if(d1.mn== 6)
dy1=30;
else if(d1.mn==9)
dy1=30;
else if(d1.mn==11)
dy1=30;
else
 dy1=31; 
}
else
dy1=0;
  
dsm=dsm+dy1;}
	
	if(d1.yr%4==0)
	tdays=ds+dsm+1;
	else
	tdays=ds+dsm;
}
	
}





//for different year dates 
else
{
	
//for leap year
flag=0;count=0;

 if(d1.yr%4==0){
 	if(d1.mn<=2){
	 flag=1; }
 	
 }
 
 if(d2.yr%4==0){
 	if(d2.mn>=2){
 	count=1; }
 	
 }
 
 if(d1.yr%2==0)
 vr=d2.yr-d1.yr;
if(vr==4)
vr=1;
else
vr=0;
 	
	
	
	
m=d2.mn-d1.mn;
m=12+m-1;

 
if(d1.mn==2)
dy1=28;
else if(d1.mn==4)
dy1=30;
else if(d1.mn== 6)
dy1=30;
else if(d1.mn==9)
dy1=30;
else if(d1.mn==11)
dy1=30;
else
 dy1=31;

 

ds=dy1-d1.dt;

ds=ds+d2.dt;
 
for(i=0;i<m;i++)
{d1.mn=d1.mn+1;
d2.mn=d2.mn-1;

if(d1.mn<13)
{ 
if(d1.mn==2)
dy1=28;
else if(d1.mn==4)
dy1=30;
else if(d1.mn== 6)
dy1=30;
else if(d1.mn==9)
dy1=30;
else if(d1.mn==11)
dy1=30;
else
 dy1=31; 
}
else
dy1=0;

if(d2.mn>0)
{ 
if(d2.mn==2)
dy2=28;
else if(d2.mn==4)
dy2=30;
else if(d2.mn== 6)
dy2=30;
else if(d2.mn==9)
dy2=30;
else if(d2.mn==11)
dy2=30;
else
 dy2=31; 
}
else
dy2=0;

  
dsm=dsm+dy1+dy2;}
 

for(i=0;i<4;i++)
{
	if(d1.yr%4==0)
	break;
	d1.yr+1;
}
for(i=0;i<4;i++)
{
	if(d2.yr%4==0)
	break;
	d2.yr-1;
}
 if(d1.yr==d2.yr)
 flag++;
lyear=d2.yr-d1.yr;
lyear=lyear/4+flag+count-vr;
 
 
tdays=years*365+ds+dsm+lyear;


}

printf("\n\n Total Days :  %d",tdays);
years=tdays/365;

//this section is not exactly calculated ,hence commented
/*printf("\n\n Total years :  %d",years); 
m=years*12;
 
i=tdays*24;
printf("\n\n Total hours :  %d",i);
i=i*60;
printf("\n\n Total min :  %d",i);
i=i*60;
printf("\n\n Total sec :  %d",i);
*/
printf("\n\n Do you want to continue Y/N ...");
fflush(stdin);
scanf("%c",&k);
if(k=='y')
k='.';
else if(k=='n')
exit(1);

for(i=0;i<28;i++)
printf("\n");
 
	}
	
}
