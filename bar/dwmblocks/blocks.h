//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
	{"", "b-pacupdate",  360,		          8},
	{"", "b-vol",     0,		              10},
	{"", "b-curr-layout",     0,		              9},
	{"", "  b-internet",	     5,	              0},
	{"", "  b-clock  ",	    30,	              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
