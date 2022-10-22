## struct

in C programming :

    is a composite data type declaration that defines a physically grouped list of variables under one name
    in a block of memory.

    allowing the different variables to be accessed via a single pointer or by the struct
    declared name witch returns the same address.

    after declaring our struct out of main() scope,
    we can use it in main() and make a lot of different group of that struct.

### display our outputs & receive our inputs : 

    for display we can using printf() and for input we can use scanf().

### string issue : 

    strings in C are actually an array of characters, and unfortunately, we can't assign a value to an array:

     - s1.name ='alireza';

    if we do that we get this error:

        - error: assignment to expression with array type

    for solve this issue we can use the strcpy() function and assign the value to s1.name.

        - we must include this on the top.

        #include<cstring>

### we can assign them other way:

    - printf("%d %c %s %s", s1.Id, s1.firstLetterOfName, s1.name, s1.relegion);

### copy struct:

    - declare a struct and use the values.

    struct manKind s3;
    s3 = s2;

### modify values : 

    after declare the struct we can use the variables and equal them to our arbitrary values.

    - s1.firstLetterOfName ='a'; ---> is defined
     s1.firstLetterOfName ='b'; ---> modify to b
