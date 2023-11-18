import math as cm      
  # importing cmath library for trignometric , log , exponential etc. functions.


print("\n\n\t\t\t\t\tOMNICALCULATOR\n\n")   #Printing OMNICALCULATOR in mid of screen.
print("Press 1 for Arithmatic Operations of two numbers .")
print("Press 2 for Area and Circumferance of a Circle .")
print("Press 3 for Surface Area and Volume of a Cylinder.")
print("Press 4 for Surface Area and Volume of a Sphere.")
print("Press 5 for Surface Area and Volume of a Cube.")
print("Press 6 for Surface Area and Volume of a Cuboid.")
print("Press 7 for Surface Area and Volume of a Cone.")
print("Press 8 for Area of a Triangle.")
print("Press 9 for Area and Parameter of a Square.")
print("Press 10 for Area and Parameter of a Rectangle." )
print("Press 11 for any power of any Number.")
print("Press 12 for Avarage of Numbers.")
print("Press 13 for Sum of Natural Numbers.")
print("Press 14 for Solve Quadratic Equation.")
print("Press 15 for Factorial of a Number.")
print("Press 16 for HCF and LCM of two numbers.")
print("Press 17 for Sqaure root , cube root and so on.")
print("Press 18 for Fibonacci Series .")
print('Press 19 for Exponantial Power .')
print("Press 20 for log 10 Operations. ")
print("Press 21 for particular base log Operations. ")
print("Press 22 for Trignometric Function.")

print("\n")  #Printing new line.

choice = int(input("Enter Number : "))  # Taking input from user.
print("\n")  #Printing new line.


if choice == 1 :   # Arithmatic operation of two numbers.
    
    Number_1 = float(input("Emter First Number : "))
    Number_2 = float(input("Enter Second Number : "))
    optr = input("Enter Operator : (+,-,x,/,% ) ")
    print('\n')  #Printing new line.
    if optr == '+' :
        print("Addition of two numbers is : ",Number_1,"+",Number_2,"=" ,Number_1 + Number_2)
    elif optr == '-' :
        print("Substraction of two numbers is : ",Number_1,"-",Number_2 ,"=" , Number_1 - Number_2)
    elif optr == 'x' :
        print("Multiplication of two numbers is : ",Number_1,"×",Number_2 ,"=" , Number_1*Number_2)
    elif optr == '/' :
        print("Division of two numbers is : ",Number_1,"÷",Number_2 ,"=" , Number_1/Number_2)    
    elif optr == '%' :
        print("Modulus of two numbers is : ",Number_1,"%",Number_2 ,"=" , Number_1%Number_2)
    else :
        print("Enter correct Operator ")
        


elif choice == 2:   # Area and Circumferance of a Circle
    
    radius = float(input("Enter Radius of Circle : "))
    print("\nArea of Circle : ",3.1415*(radius**2)," square unit.")
    print("\nCircumferance of Circle : ", 2*3.1415*radius," unit.")
    


elif choice == 3:   #Surface Area and Volume of a Cylinder.
    
    radius = float(input("Enter Radius of Cylinder : "))
    height = float(input("Enter Height of Cylinder : "))
    
    print("\nCurved Surface Area of Cylinder : ", 2*3.1415*radius*height," square unit.")
    print("\nTotal Surface Area of Cylinder : ", 2*3.1415*radius*(radius+height)," square unit.")
    print("\nVolume of Cylinder : ", 3.1415*(radius**2)*height," cubic unit.")



elif choice == 4 :  # Surface Area and Volume of a Sphere.

    radius = float(input("Enter Radius of Sphere : "))
    
    print("\nSurface Area of Sphere : ", 4*3.1415*(radius**2), " square unit.")
    print("\nVolume of Sphere : ", 1.333*3.1415*(radius**3), " cubic unit.")



elif choice == 5 :  # Surface Area and Volume of a Cube.

    side = float(input("Enter lenth of side of Cube : "))
    
    print("\nTotal Surface Area of Cube : ", 6*(side**2) , " square unit.")
    print("\nVolume of Cube : ", (side**3), " cubic unit.")



elif choice == 6 :  # Surface Area and Volume of a Cuboid.

    lenth = float(input("Enter lenth of Cuboid : "))
    width = float(input("Enter width of Cuboid : "))
    height = float(input("Enter height of Cuboid : "))
    
    
    print("\nTotal Surface Area of Cuboid : ", 2*( lenth*width + width*height + height*lenth ) , " square unit.")
    print("\nVolume of Cuboid : ", lenth*width*height , " cubic unit.")   
    


elif choice == 7 :   #  Surface Area and Volume of a Cone.

    radius = float(input("Enter Radius of Cone : "))
    height = float(input("Enter Height of Cone : "))
    Slant_lenth = ((height**2 + radius**2)**0.5)
    print('\nSlant Lenth of Cone is : ',Slant_lenth ,"unit.")
    print('\nCurved Surface Area of Cone is : ', 3.1415*radius*Slant_lenth , "square unit.")
    print("\nTotal Surface Area of Cone is : ", 3.1415*radius*(radius + Slant_lenth) , "square unit.")
    print("\nVolume of Cone is : " , 0.333*3.1415*(radius**2)*height , "cubic unit.")




elif choice == 8 :  # Area of a Triangle .

    base = float(input("Enter lenth of base of Triangle : "))
    height = float(input("Enter height of Triangle : "))
    
    print("\nArea of Triangle is : ", 0.5*base*height , " square unit.")

    


elif choice == 9 :  # Area and Parameter of a Square .

    side = float(input("Enter lenth of side of Square : "))   
    
    print("\nArea of Square is : ", side**2 , " square unit.")
    print("\nParameter of Squareis : ", 4*side , " unit.")
       


elif choice == 10 :  # Area and Parameter of a Rectangle .

    lenth = float(input("Enter lenth of Rectangle : "))
    width = float(input("Enter width of Rectangle : "))
        
    print("\nArea of Rectangle is: ", lenth*width , " square unit.")
    print("\nParameter of Square  is: ", 2*(lenth + width ) , " unit.")    
       



elif choice == 11 :  # Any power of any number .

    Number = float(input("Enter Number : "))
    Power = float(input("Enter Power : "))

    print("\n", Number , " to the power ", Power , ":  " , Number,'^',Power,"=", Number**Power)




elif choice == 12 :  # Avarage of Numbers

    count = int(input("How many numbers you want to take avarage : "))

    i=0
    Sum =0
    
    for i in range(count):
        
        Number = float(input(f'Enter Number {i+1} : '))
        Sum = Sum + Number
        i+=1
        
    print("Total of Numbers is : " ,Sum)
    print("Avarage of Numbers is : ",Sum/count)




elif choice == 13 :  #Sum of Natural Numbers
    count = int(input("Enter terms of natural number : "))
    sum =0
    i=1
    for i in range(count+1) :
        sum = sum + i
        i+=1

    print("Sum of Natural Numbers upto",count,"terms is : ", sum )
    



elif choice == 14 :  # Solve Quarditic equation

    print("\nQuarditic equation format is ax^2 + bx + c = 0 , where a is not equal to zero. \n")
    a = float(input("Enter a : "))
    b = float(input("Enter b : "))
    c = float(input("Enter c : "))
    print('\nRoots of Quarditic Equation are : - ')
    D = b**2 - 4*a*c  # Discriment of Quarditic Equation
    if D<0 :
        D = 4*a*c - b**2
        print("\nRoots are Imaginary .") 
        
        print('\n1st Root is ',-b/2,'+',(D**0.5)/2,'i',' and 2nd Root is ',-b/2,'-',(D**0.5)/2,'i')
        
    elif D == 0 :
        print("\nBoth Roots are same. Roots are : ",-b/2)

    else :
        print("\nRoots are Real and Distinct.")
        print("\n1st Root is :",(-b+(D**0.5))/2,"  and 2nd Root is :",(-b-(D**0.5))/2)





elif choice ==15 : # Factorial of a Number

    Number = int(input("Enter Integer Number : "))
    i = Number
    Factorial = 1 
    while i != 1 :
        Factorial*=i
        i-=1

    print("Factorial of Number ",Number," is :",str(Number)+'! =',Factorial)    




elif choice == 16 :  #  HCF and LCM of two integer Numbers .

    Divisible = int(input("Enter 1st natural number for HCF and LCM : "))
    Divider = int(input("Enter 2nd natural number for HCF and LCM : "))

    Divisible1 = Divisible
    Divider1 = Divider
    
    if(Divisible1 < Divider1):
        Divisible1 += Divider1
        Divider1 = Divisible1 - Divider1
        Divisible1-=Divider1
    Remender = 1
    while Remender != 0 :
        Remender = Divisible1 % Divider1
        Divisible1 = Divider1
        Divider1 = Remender

    HCF = int(Divisible1)
    LCM = int((Divisible*Divider)/HCF)

    print('\nHCF of',Divisible,'and',Divider,'is : ',HCF)
    print('\nLCM of',Divisible,'and',Divider,"is : ",LCM)




elif choice == 17 : # Square Root , Cube Root and so on....

    Number = float(input("Enter Number to take Root : "))
    Power = int(input("Enter Root Power (Ex. For Square Root, Enter 2 ) : "))
    Root = 1/Power

    print('\nAnswer of ',Number,'with Root Power',Power ,'is : ',str(Power)+'√'+str(Number),'=',Number**Root)




elif choice == 18 : # Fibonacci Series

    terms = int(input("Enter terms in Fibonacci Series : "))

    fibo_1 = 0
    fibo_2 = 1
    print("Fibonacci Series upto",terms,"are : \n")
    print(fibo_1)
    print(fibo_2)
    i = 2
    for i in range(terms) :
        fibo_3 = fibo_1 + fibo_2
        print(fibo_3)
        fibo_1 = fibo_2
        fibo_2 = fibo_3



elif choice == 19 :
    Power = float(input("Enter Power for e^x  , x : "))
    print(f"Exponential  e to the power {Power} is :\t {(cm.exp(Power)).real}")


elif choice == 20: 
    value = float(input("Enter Value for log(10) : "))
    print(f"Answer for {value} for log(10) is :\t {(cm.log10(value)).real}")


elif choice == 21 :
    base = float(input("Enter base for log function : "))
    value = float(input(f"Enter value for log  base {base} : "))
    print(f"Answer of log base {base} for value {value} is : \t{(cm.log(value,base)).real}  ")

elif choice == 22 : 
    
    print("Note : Please do not enter angle which value is infinite .")

    trgno_function = input("Enter Trignometric Function (for ex sin,cos etc.(without space)) : ")
    angle = float(input("Enter Angle in Degree : "))
    radian = ((cm.pi)/180)*angle
    print('\n')
    if trgno_function.lower() == 'sin':
        print(f"sin {angle} ° =  {(cm.sin(radian)).real}")

    elif trgno_function.lower() == 'cos':
        print(f"cos {angle} ° =  {(cm.cos(radian)).real}")

    elif trgno_function.lower() == 'tan':
        print(f"tan {angle} ° =  {(cm.tan(radian)).real}")

    elif trgno_function.lower() == 'cosec':
        print(f"cosec {angle} ° =  {1/((cm.sin(radian)).real)}")

    elif trgno_function.lower() == 'sec':
        print(f"sec {angle} ° =  {1/((cm.cos(radian)).real)}")

    elif trgno_function.lower() == 'cot':
        print(f"cot {angle} ° =  {1/((cm.tan(radian)).real)}")
    
    else :
        print(f"\nPlease enter correct trignometric function or angle .")
        print("May you have given a space after writing function. ")


else :
    print('Please enter correct number ')    
