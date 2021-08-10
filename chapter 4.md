# What is function?
A function is a self-contained block of statements that perform a 
coherent task of some kind. 


main( ) 

{ 

 message( ) ; 
 
 printf ( "\nCry, and you stop the monotony!" ); 
 
} 

message( ) 

{ 

 printf ( "\nSmile, and the world smiles with you..." ) ; 
 
} 

- output :

Smile, and the world smiles with you... 

Cry, and you stop the monotony!

# A number of conclusions can be drawn: 

- Any C program contains at least one function.

- If a program contains only one function, it must be main( )

- If a C program contains more than one function, then one (and only one) of these functions must be main( ), because program execution always begins with main( )

- There is no limit on the number of functions that might be present in a C program. 

- Each function in a program is called in the sequence specified by the function calls in main( ).

# Why Use Functions?

Don’t try to cram the entire logic in one function. Instead, break 
a program into small units and write functions for each of these isolated subdivisions. Don’t hesitate to write functions that are called only once. What is important is that these functions perform 
some logically isolated task.

# Passing Values between Functions:

Arguments are sometimes also called ‘parameters’. 
In main( ) we receive the values of a, b and c through the keyboard.
However,the calculation of sum is done in a different function called calsum( ).



















