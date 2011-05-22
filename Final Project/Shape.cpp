#include "stdafx.h"
#include "Shape.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>

Shape::Shape(){}

void Shape::createShape(int index, char& choice)
{
	double quad[5];		//used for quadrilateral shapes to store values 
	string name;		//will represent type of the shape
	int sides;			//will represent quantity of sides of shape
	int i;				//counter
	bool flag;			// boolean trigger
	char str[256];		// vars to validate
	char *input, *rest; // users input  
	char type;			// will represent user's selection
	
						
		flag = true;
		//determine what shape user would like to create	
		switch (choice)
			{
				case '1': // Triangle choice
					name = "Triangle";
					shape[index] = new Triangle();
					sides = 3;
					break;
				case '2': // Quadrilateral choices
					
					cout << "Please choose the type of Quadrilateral shape:" << endl;
					cout << "    Parallelogram   " << "  	Rectangle	  " << "    Square     " << "     Trapezoid" << endl;
					cout << "       Press 1      " << "     Press 2      " << "        Press 3    " << "      Press 4   :";
					cin >> type;
					cout << endl;
					
					if (type == '1')
						{
							name = "Parallelogram";
							sides = 2;
						}
					
					if (type == '2')
						{
							name = "Rectangle";
							sides = 2;
						}

					if (type == '3')
						{
							name = "Square";
							sides = 1;
						}

					if (type == '4')
						{
							name = "Trapezoid";
							sides = 4;
						}
					break;
					
				case '3': //Circle choice
					name = "Circle";
					shape[index] = new Circle();
					sides = 1;
					break;
				default: cout << endl;
			}

	//output to the screen user's choice of shape
			cout << "Shape : " << name << endl;
			clearInput();

	//get user's input for the sides of the shape
	// Triangle and Circle shapes 
			if ((name=="Triangle")||(name=="Circle"))	
			{
				for (i=1; i<=sides; i++)
					{
						if (sides==1) {	cout << "Enter radius of " << name << " : ";	}
						else	{ cout << "Enter side " << i << " of " << name << ": ";    }
						cin >> str;
						cout << endl;
						input = str;
						val = strtod(input, &rest);
						if (val)
						{
							try{
									if (isValid(val))
										shape[index]->setSide(i, val);
								}
							catch (LessThanZero &exception)
							{
								i--;
								cout << exception.what() << " Prease re-enter the value." << endl;
							}
						} else 
						{
						i--;
								cout << "Non Numeric input. Prease re-enter the value." << endl;
						}
					}	
			}

	// Quadrilateral shapes get user's input for the sides
			else 
			{
				for (i=1; i<=sides; i++)
					{
						cout << "Enter side " << i << " of " << name << ": ";
						cin >> str;
						cout << endl;
						input = str;
						val = strtod(input, &rest);
						quad[i] = val;
						if (quad[i])
						{
							try{
									isValid(quad[i]);
									}
								catch (LessThanZero &exception)
									{
										i--;
										cout << exception.what() << " Prease re-enter the value." << endl;
									}
						}else{
								i--;
								cout << "Non Numeric input. Prease re-enter the value." << endl;
						}
					}		
			}

	// For Parallelogram and Trapezoid get input for the height
				if ((name == "Parallelogram")||(name == "Trapezoid"))
				{
					do {
							cout << "Enter height of " << name << ": ";
							cin >> str;
							cout << endl;
							input = str;
							val = strtod(input, &rest);
							quad[0] = val;
							if (quad[0])
							{
								if (name == "Parallelogram") { if(quad[0]>quad[1]) flag = false;}
								else if (name == "Trapezoid") { if((quad[0]>quad[1])&&(quad[0]>quad[3])) flag = false;}

								if (flag)
									{
										try{
											if(isValid(quad[0])) flag = false;
											}
										catch (LessThanZero &exception)
											{
												cout << exception.what() << " Prease re-enter the value." << endl;
											}
									} else 
										if (name == "Parallelogram"){
											cout << "The value of height of parallelogram must be less of equal than side a=" << quad[1] << endl;
											flag = true;
										}
										else {
											cout << "The height of Trapezoid must be less or equal to sides a=" << quad[1] << " and c=" << quad[3] << " of trapezoid" << endl;
											flag = true;
										}

							} else cout << "Non Numeric input. Prease re-enter the value." << endl;

						} while(flag);
				}

	// check what Quadrilateral shape user has chosen and create an object
				if (name == "Parallelogram") {shape[index] = new Parallelogram(quad[1], quad[2], quad[0]);}
				else if (name == "Rectangle") {shape[index] = new Rectangle(quad[1], quad[2]);}
				else if (name == "Square") {shape[index] = new Square(quad[1]);}
				else if (name == "Trapezoid") {shape[index] = new Trapezoid(quad[1], quad[2], quad[3], quad[4], quad[0]);}

	//check if the shape with the given parameters exists		
				if (shape[index]->shapeExists(name) )
					{
						cout << fixed << setprecision(2) << name << " area: " << shape[index]->getArea() << endl;
						cout << fixed << setprecision(2) << name << " perimeter: " <<  shape[index]->getPerimeter() << endl;
				}
	
	
}

void Shape::loadInterface()
{
	index = -1;
	const int SHAPES_QTY = 9; // + 1 (0-based) maximum number of shapes per session
	int k = 0;
	do
	{
		system("CLS");
		
		cout << " " <<setfill('*') << setw(44) << " Main Menu "  << setfill('*') << setw(32) << " X - Exit " << endl << endl;
		cout << "    Triangle       " << "   Quadrilateral     " << "     Circle" << "         List the Shapes " << endl;
		cout << "     press 1       " << "      Press 2       " << "      Press 3        " << "    Press 7" << endl << endl;
		cout << " Please enter Your choice: ";
		cin >> choice;
		cout << endl;
		switch (choice)
			{
			case '1':		// adding Triangle Shape
			case '2':		// adding Quadrilateral 
			case '3':		// adding Cirlce Shape
				if (index < SHAPES_QTY )
					{	index++;// counts the number of shapes 
						createShape(index, choice);
					} 
				else cout << "You have reached maximum number of Shapes alowed per single session." << endl;
			break;
			case '7':
				if (index>-1)
				{
					for (k=0; k<=index; k++)
					{
						cout << shape[k]->getClassName() << endl;
						cout << " area: " << shape[k]->getArea() << endl;
						cout << " perimeter: " <<  shape[k]->getPerimeter() << endl<< endl;
					}
				}
				else {
						cout << "There were no shapes created yet." << endl;
				}
				break;
			case 'X':
			case 'x': break;
			default: cout << " Press 1, 2, 3 and 7 for the menu options or X to eXit" << endl;
		}
		cout << "To continue press - Y, to exit - N : ";
		cin >> startOver;
	}
	while ((startOver=='Y') || (startOver=='y'));
}

void Shape::clearInput()
{
	cin.clear();
	cin.ignore(200, '\n');
}

bool Shape::isValid(double value)
{
	if (value <= 0)
	{
		throw LessThanZero();
		return false;
	} else 
		return true;
}