# DataStructures303Hw.1
 
Inside main.cpp a new object can be created of class arrayManip by the following code:

arrayManip array1;

There are four main methods that can be called on array1 shown below:

array1.findInteger();
array1.modifyInteger();
array1.addInteger();
array1.deleteInteger();

The array can be displayed by calling the following method:

array1.displayTheArray();


****************The following examples show each method working correctly. ***********************
*****************The array may also be displayed to show the changes were made.******************


array1.findInteger();
![Screenshot 2023-02-11 154450](https://user-images.githubusercontent.com/119560473/218282842-000c41f6-b22e-49c3-9b30-5ce05938b7b2.jpg)


array1.modifyInteger();
![Screenshot 2023-02-11 154858](https://user-images.githubusercontent.com/119560473/218282849-0ed614c2-8ce6-471d-94b4-ba15c4dabd59.jpg)


array1.addInteger();
![Screenshot 2023-02-11 155051](https://user-images.githubusercontent.com/119560473/218282852-76d30178-01b4-4560-ab84-15b8fc88e098.jpg)


array1.deleteInteger();
![Screenshot 2023-02-11 155750](https://user-images.githubusercontent.com/119560473/218282853-eb12a38c-e083-4b90-b24c-d4d45f982f53.jpg)



Exception handling was also built in to some of the functions as the following pictures show. Try and catch were used to ensure that numerical inputs were accepted, while characters and strings would terminate the program.


A function that can modify the value of an integer when called with the index of
the integer in the array and return the new value and old value back to the user.

array1.modifyInteger(); // try and except

![Screenshot 2023-02-11 160552](https://user-images.githubusercontent.com/119560473/218283158-5afe7125-160c-438b-8ebc-19f9657fac0c.jpg)



A function that adds a new integer to the end of the array

array.addInteger(); // try and except

![Screenshot 2023-02-11 160727](https://user-images.githubusercontent.com/119560473/218283170-08ac452b-1c24-4d06-a235-409077aa0fe1.jpg)







