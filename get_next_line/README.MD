# get_next_line

This is a 42 project written in C that reads a file (through the fd) one line at a time by saving the last position in a static variable. It can read several files at the same time while keeping track of each one of them. It does so by saving the different memory addresses in a double dimension pointer.

## Installation

In order to download and compile, just download the repository and execute the file "compile.sh". This executable will read the two test files attached to the project.

```bash
bash compile.sh
```

## How it works

There are two main functions in this program.
    1º get_next_line
    2º output_handler
    3º appendline

### int get_next_line(const int fd, char **line)

This function receives a file descriptor and a two dimensional array. 
First, it calls "ft_line_reader" and passes this function the file descriptor and the static variable. This function will return the line we need if everything was alright, or a null in case it is not.

Once we have the string, we search for the residual new line character + letters that came from ft_line_reader().


How do we cut the remainder characters?
Easy! 
    1. We save in a temporary variable the memory address where tye \n character is.
    2. Then we substract the memory addreses of the temp variable and the static one and store that number in a counter variable. 
    3. We store de addres of the character after the \n in the temporary variable.
    4. The copy into line the state_keeper string up to the newline.
    5. Free the static variable (in order to tell the variable the next place she must begin in).
    6. Pass to state_keeper the the address we saved in tmp.
    7. Free tmp, we dont want no leaks.

In the case of not existing a \n in our static variable, we will cppy the whole string to line (because it's the last line, henceforth there's no \n), free the static variable.. we dont want no leaks, and set it to null justtt in case :)




### char *ft_line_reader(const int fd, char *str)

This function receives the file descriptor and the static variable, and we begin the comprobations:
    1. If fd is null, Buffer_size is less than one or trying to read the file descriptor returns a -1, then we return a -1;
    2. If the static variable is null (that means is the first line), then it will allocate a 1 byte char to it.

Once comprobations are done, we jump into the while loop that will iterate as long as there's not a new_line. First it saves on a temporal string the current value of the static variable. Then checks if it can read the file (sending a 0 in case it cannot), it puts a null on the end of the static variable, and dumps the current buffer string into the state_keeper.
Once it reaches a newline, it will return the full line + the begining of the next one (depending on the buffer size).

















## Usage

If you are a 42 student and you wished to use this repository, go for it! Just try to understand what every function, variable assignement and memory usage does.