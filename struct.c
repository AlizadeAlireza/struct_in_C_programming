#include<stdio.h>
#include<cstring>

struct manKind {
  int Id;
  char firstLetterOfName;
  char name[30]; // string
  char relegion[30]; // string
};

int main()
{
  // create a struct variable of myStructure called s1
  struct manKind s1;
  // struct manKind s2;
  
  // assign value to my structure
  printf("enter your number for id: ");
  scanf("%d", &s1.Id);
  s1.firstLetterOfName ='a';

  // assign a value to the string using the strcpy function
  strcpy(s1.name, "alireza alizadeh");
  strcpy(s1.relegion, "Earthian");

  // print values
  printf("my number is : %d\n",s1.Id);
  printf("my first letter of name is : %c\n",s1.firstLetterOfName);
  printf("name and family is: %s\n",s1.name);
  printf("relegion is: %s\n",s1.relegion);


  // other way assigning
  struct manKind s2 = {45, 'H', "mohsen", "Martian"};
  printf("\nstruct2\n\nnumber: %d\nfirst letter of name: %c\nname and family is: %s\nrelegion is: %s\n", s2.Id, s2.firstLetterOfName, s2.name, s2.relegion);

  // copy struct
  struct manKind s3;
  s3 = s2;
  printf("third struct has second struct number: %d\n", s3.Id);


  return 0;
}