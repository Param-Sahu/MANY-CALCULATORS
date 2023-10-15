#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<"Press 1 for find square root."<<endl;
	cout<<"Press 2 for find cubic root."<<endl;
	cout<<"Press 3 for solve quadratic equation."<<endl;
	cout<<"Press 4 for any power for a number."<<endl;
	cout<<"Press 5 for Fibonacci Series."<<endl;
	cout<<"Press 6 for Factorial of a Number."<<endl;
	cout<<"Press 7 for Calculations(+,-,*,/,Percentage)."<<endl;
	cout<<"Press 8 for Trignometric Function ."<<endl;
	cout<<"Press 9 for Logrithmic Value. "<<endl;
	cout<<"Press 10 for HCF and LCM of Two Numbers ."<<endl;
	cout<<"Press 11 for Specific base and power log value."<<endl;
	cout<<"Press 12 for Area and Circumferance of a Circle. "<<endl;
	cout<<"Press 13 for Area and Parameter of a Square"<<endl;
	cout<<"Press 14 for Area and Parameter of Reactangle. "<<endl;
	cout<<"Press 15 for Surface Area and Volume of Sphere. "<<endl;
	cout<<"Press 16 for Volume and Surface Area of Cube ."<<endl;
	cout<<"Press 17 for Volume and Surface Area of a Cuboid ."<<endl;
	cout<<"Press 18 for Area of Triangle."<<endl;
	cout<<"Press 19 for Avarage of Numbers."<<endl;
	cout<<"Press 20 for Sum of Natural Numbers ."<<endl;
	cout<<endl;
	
	int choice;
	cout<<"Enter Number to perform any task given above :-";
	
	cin>>choice;
	switch(choice){
	case 1:
	{
	  int b;
		cout<<"Enter number to find square root:-";
		cin>>b;
		cout<<sqrt(b);
	} break;
	case 2:
	{ 
	int c;
		cout<<"Enter Number to find cubic root:-";
		cin>>c;
		cout<<cbrt(c);
	}break;
	case 3:
	{
		int d,o,f;
		cout<<"Enter a,b,c:- ";
		cin>>d>>o>>f;
		float num1=sqrt(pow(o,2)-4*d*f) ,num2=2*d;
		if(num1>=0)
		{ cout<<"Roots are Real."<<endl;
		cout<<endl;
		cout<<"Root 1= "<<(-o+num1)/num2<<'\t'<<"Root 2= "<<(-o-num1)/num2<<endl;}
		else{ int D;
		D=4*d*f-pow(o,2);
			float num1=sqrt(D) ,num2=2*d;
			cout<<"Roots are Imagenary."<<endl;
			cout<<endl;
			cout<<"Root 1= "<<(-o)/num2<<"+"<<num1/num2<<"i"<<'\t'<<"Root 2= "<<(-o)/num2<<"-"<<num1/num2<<"i"<<endl;
		}
	} break;
	
	case 4:
    {  
	 float base,power;
	 cout<<"Enter Base:- ";
	 cin>>base;
	 cout<<"Enter Power:- ";
	 cin>>power;
	 cout<<"Answer:- "<<pow(base,power)<<endl;
	}break;
	
	case 5:
	{
		int n1=0,n2=1,n3,i,number;
	    cout<<"enter the number";
	    cin>>number;
	    cout<<n1<<" "<<n2<<" ";
	for(i=2;i<number;++i)
	{
		
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
	}
		}break;
	case 6:
	{ long long int number,fact=1,i;
	    UP:
		cout<<"Enter a Number:- ";
		cin>>number;
		if(number<0)
		{
			cout<<"You Entered Negetive Number."<<endl;
			goto UP;
		}
		else{
		for(i=number;i>=1;i--)
		{ fact*=i;
	
		}
		cout<<"Factorial of number "<<number<<" is "<<" = "<<fact<<endl;
		}}break;
	case 7:
	{ float num1,num2;
      char optr;
    	cout<<"Enter 1st Number:- ";
	 cin>>num1;
	 cout<<"Enter Arithmatic Operator(+,-,*,/,%):- ";
	 cin>>optr;
	 cout<<"Enter 2nd Number:- ";
	  cin>>num2;
	  switch(optr){
		case '+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
			break;
	    case '-':
		cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
		break;
		case '*':
			cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
			break;
		case '/':
			cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
				break;
		case '%':	
		cout<<num1<<"%"<<num2<<"="<<(num1*100)/num2<<endl;
			break;
				default:
					cout<<"Enter correct oprerator";
		}	
	
     }break;
     case 8:
     	{ string trigno;
     	float angle;
     		cout<<"Enter Trignometric Function:- ";
     		cin>>trigno;
     		cout<<"Enter Angle in Degree :-";
     		cin>>angle;
     		float R=(3.14159265358/180)*angle;
     		if(trigno=="sin")
     		{cout<<"sin "<<angle<<" = "<<sin(R)<<endl;
			 }
			 else if(trigno=="cos")
			 { cout<<"cos "<<angle<<" = "<<cos(R)<<endl;
			 }
			 else if(trigno=="tan")
			 { cout<<"tan "<<angle<<" = "<<tan(R)<<endl;
			 }
			 else if(trigno=="cosec")
			 { cout<<"cosec "<<angle<<" = "<<1/sin(R)<<endl;
			 }
			 else if(trigno=="sec")
			 { cout<<"sec "<<angle<<"  = "<<1/cos(R)<<endl;
			 }
			 else if(trigno=="cot")
			 { cout<<"cot "<<angle<<" = "<<1/tan(R)<<endl;
			 }
			 else
			 { cout<<"Enter Correct Trignometric Function."<<endl;
			 }
		 }break;
		 
		 case 9:
		 	{ float val;
		 		cout<<"Enter Log Value:- ";
		 		cin>>val;
		 		cout<<"Log base e value = "<<log(val)<<endl;
		 		cout<<'\n';
		 		cout<<"Log base 10 value = "<<log10(val)<<endl;
			 }break;
			 
		case 10:
		{
			
     	int Remender,Divisible,Divider;
	    cout<<"Enter 1st Natural Number :- ";
	    cin>>Divisible;
    	cout<<"Enter 2nd Natural Number:- ";
	    cin>>Divider;
	
	    int Divisible1=Divisible,Divider1=Divider;
     	if(Divisible1>Divider1)
    	{ 
    	goto Program;
	   }
    	else
    	{ 
	     Divisible1+=Divider1;
       	Divider1=Divisible1-Divider1;
	     Divisible1-=Divider1;
    	goto Program;
	     }
	    Program:
	 	do{ 
			Remender=Divisible1%Divider1;
			Divisible1=Divider1;
			Divider1=Remender;	
			}while(Remender>0);
		int HCF=Divisible1;
	   cout<<"HCF of "<<Divisible<<" and "<<Divider<<" is = "<<HCF<<endl;
	    int LCM = (Divisible*Divider)/HCF;
	   cout<<"LCM of "<<Divisible<<" and "<<Divider<<" is = "<<LCM<<endl;

			 }break;	 
		
		case 11:
		{ float power,base;
			cout<<"Enter Log Power value:- ";
			cin>>power;
			cout<<"Enter Log base value:- ";
			cin>>base;
			cout<<"log "<<power<<" of "<<"base "<<base<<" is = "<<log10(power)/log10(base)<<endl;
		
			 }break;	 
			 
		case 12:
		{
			float radius;
			string Unit;
			cout<<"Enter Radius of Circle:- ";
			cin>>radius;
			cout<<"Enter Unit (Centimeter , Meter etc.):- ";
			cin>>Unit;
			cout<<endl;
			cout<<"Area of Circle of Radius "<<radius<<" "<<Unit<<" is = "<<(3.14159265358)*(pow(radius,2))<<" Square "<<Unit<<endl;
			cout<<endl;
			cout<<"Circumferane of Circle of Radius "<<radius<<" "<<Unit<<" is = "<<2*(3.14159265358)*radius<<" "<<Unit<<endl;
			 }break;	 
		
		case 13:
		{ float side;
		string unit;
		 cout<<"Enter the Lenth of side of Square :- ";
		 cin>>side;
		 cout<<"Enter Unit (Centimeter , Meter etc.):- ";
		cin>>unit;
		cout<<endl;
		 cout<<"Area of Sqaure of side "<<side<<" "<<unit<<" is = "<<pow(side,2)<<" Square "<<unit<<endl;
		 cout<<endl;
		 cout<<"Parameter of Square of side "<<side<<" "<<unit<<" is = "<<4*side<<" "<<unit<<endl;
			
			 }break;	 
		
		case 14:
		{ float Lenth,Breath;
		string unit;
		 cout<<"Enter Lenth of Reactangle :- ";
		 cin>>Lenth;
		 cout<<"Enter Breath of Reactangle:- ";
		 cin>>Breath;
		 cout<<"Enter Unit (Centimeter , Meter etc.):- ";
		cin>>unit;
		cout<<endl;
		 cout<<"Area of Reactangle of "<<Lenth<<" "<<unit<<" and "<<Breath<<" "<<unit<<" is = "<<Lenth*Breath<<" Square "<<unit<<endl;
		 cout<<endl;
		 cout<<"Parameter of Reactangle. "<<Lenth<<" "<<unit<<" and "<<Breath<<" "<<unit<<" is = "<<" "<<unit<<" is = "<<2*(Lenth+Breath)<<" "<<unit<<endl;
			
			 }break;
		
		case 15:
		{ float rd;
		string unit;
		cout<<"Enter Radius of Sphere :- ";
		cin>>rd;
		cout<<"Enter Unit (Centimeter , Meter etc.):- ";
		cin>>unit;
		cout<<endl;
		cout<<"Surface Area of Sphere = "<<4*(3.14159265358)*rd*rd<<" Square "<<unit<<endl;
		cout<<endl;
		cout<<"Volume of Sphere = "<<(1.333333)*(3.14159265358)*(pow(rd,3))<<" Cubic "<<unit<<endl;
					   }break;	
					   
		case 16:
		{ float sd;
		string unit;
		cout<<"Enter Lenth of side of a  cube :- ";
		cin>>sd;
		cout<<"Enter Unit (Centimeter , Meter etc.):- ";
		cin>>unit;
		cout<<endl;
		cout<<"Volume of Cube = "<<pow(sd,3)<<" Cubic "<<unit<<endl;
		cout<<endl;
		cout<<"Surface Area of Cube = "<<6*(pow(sd,2))<<" Square "<<unit<<endl;
							  }break;
		
		case 17:
		{ float Lenth,Breath,Height;
		string unit;
		 cout<<"Enter Lenth of Cuboid :- ";
		 cin>>Lenth;
		 cout<<"Enter Breath of Cuboid :- ";
		 cin>>Breath;
		 cout<<"Enter Height of Cuboid:- ";
		 cin>>Height;
		 cout<<"Enter Unit (Centimeter , Meter etc.):- ";
		cin>>unit;
		cout<<endl;
		 cout<<"Volume of Cuboid is = "<<Lenth*Breath*Height<<" Cubic "<<unit<<endl;
		 cout<<endl;
		 cout<<"Surface Area of Cuboid is = "<<2*((Lenth*Breath)+(Breath*Height)+(Height*Lenth))<<" Square "<<unit<<endl;
			
			 }break;
		
		case 18:
			{
			float height , base;
			string unit;
			cout<<"Enter Height of Triangle :- ";
			cin>>height;
			cout<<"Enter Base of Triangle:- ";
			cin>>base;
			cout<<"Enter Unit (Meter , Centimeter etc. )";
			cin>>unit;
			cout<<endl;
			cout<<"Area of Triangle = "<<(0.5)*base*height<<" square "<<unit<<endl;
				
			}break;
		
		case 19:
		{
			
       {
	float sum=0,avg,n;
	int a;
	cout<<"Enter how many numbers avarage you want:- ";
	cin>>a;
	for(int i=1;i<=a;++i)
	{
		cout<<"enter the value of n:-"<<endl;
		cin>>n;
		sum=sum+n;
		
		}
		avg=sum/a;
		cout<<"sum="<<sum<<endl;
		cout<<"average="<<avg<<endl;
		
        }break;
        
        case 20:
        	{
        		int n,sum=0;
        		cout<<"Enter Terms :- ";
        		cin>>n;
        		float avg;
        		for(int i=1;i<=n;i++)
        		{ sum+=i;
				}
				avg=sum/n;
				cout<<"Sum of Natural Numbers :- "<<sum<<endl;
				cout<<"Average of Nautural Numbers :- "<<avg<<endl;
				
			}break;
															 }	 					  			    	 	 
			 default:
			 	{ cout<<"Enter Correct Number. ";}
   }
}
