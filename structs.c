#include <stdio.h>

// (struct example_struct) is the ENTIRE type name.
struct example_struct
{
    int number;
};

// Gives int's a nickname of int_nickname.
typedef int int_nickname;

// warning: empty declaration with storage class specifier does not redeclare tag
typedef struct example_struct;

// Nickname to our "ENTIRE" (struct example_struct) type of "custom_name"
typedef struct example_struct custom_name;

// But since "struct example_name" IS the name orginally, we can very well use "example_struct" alone:
// example_struct foo; now possible
typedef struct example_struct example_struct;

// Special way:
//Has no nickname for the typedef!
//The struct creation is made, but also passed as the type for typedef?
typedef struct second_example_struct
{
    int number2;
};

//Now has name.
typedef struct second_example_struct
{
    int number2;
} custom_name2;

//For somereason we can make this with no name.
struct
{
    //void no_named_struct;
};
//But then using the typedef syntax above we could give this nameless struct a nickname:
typedef struct
{
    /* data */
} nameless_nickname;

//What is a nameless struct? I dont want to assume its "struct  _" with a blank char for its name, as multiple could be created nameless.
//How do we pass struct as a type to typedef when we create a struct? As in typedef struct premade_struct nickname; vs typedef struct new_struct{data} nickname;
//I know how we can pass a premade struct to typedef as-in line 13-16 `typedef struct example_struct example_nickname`
//But doing typedef struct creation{data} nickname; is very different and...weird

int main(void)
{
    return 0;
}