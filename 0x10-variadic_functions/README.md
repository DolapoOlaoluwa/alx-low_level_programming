Variaic functions are functions with many arguments, i.e they are not out conventional funtion we declare to take just a particular number of argument. Any function declared using variadic will have the ability to take as many arguments it can.
Basicallly to use and create a variadic function the <stdarg.h> header file has to be included in our program

Also we willl be using some macros. here is the list of macros in the stdarg.h header file

--va_list: this is a datatype we will be using to declare the arguments we have, in essense, the va_list puts all the arguments in a list, such that we can access the one afer the other.
--va_start(takes two arguments)
--va_arg(also takes two arguments)
--va_end(only one argument)
