#include "stdio.h"
#include <string.h>
#include <float.h>

struct PlayStruct{
  int int_value;
  double double_value;
  char a_string[64];
};
void change_string(char string1[], char *p_string[]);

void print_string(char string_to_print[]);

void print_struct(struct PlayStruct ps, struct PlayStruct *pps);

void change_struct(struct PlayStruct ps, struct PlayStruct *pps);

int main(int argc, char const *argv[]) {
struct PlayStruct play_struct={7,7.77,"Siamashka Vlad!"};
struct PlayStruct *play_struct_pointer=&play_struct;
print_struct(play_struct, play_struct_pointer);
change_struct(play_struct, play_struct_pointer);
print_struct(play_struct, play_struct_pointer);

char another_string[16] = "another_string";
char *another_string_p = another_string;
print_string(play_struct.a_string);
change_string(play_struct.a_string,&another_string_p);
print_string(play_struct.a_string);
print_string(another_string_p);
return 0;
}

void print_struct(struct PlayStruct ps, struct PlayStruct *pps)
{
  printf("Values of struct ps: %d,%.3lf, %s\n",ps.int_value, ps.double_value, ps.a_string );
  printf("Values of struct pps: %d, %.3lf, %s\n",pps->int_value, pps->double_value,pps->a_string);
}

void change_struct(struct PlayStruct ps, struct PlayStruct *pps)
{
pps->int_value=9;
pps->double_value=9.99;
strcpy(pps->a_string, "Siamashka Stan");
}

void print_string(char string_to_print[])
{
  printf("print string %s\n",string_to_print);
}

void change_string(char string1[], char *p_string[])
{
  string1[2] = 0;
  p_string[1] = 0;
}
