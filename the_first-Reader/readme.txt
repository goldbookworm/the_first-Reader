1.Download and install the Dev-C++ .
2.Open the English_code.c with Dev-C++.
3.Edit the  English_code.c
char word[]=" /*put the English text you want to show here*/ "
4.Compile and run the English_code.c to get the codes and the number of codes. 
5.Download and install the Keil uVision5.
6.Open the the_first-Reader.uvproj with Keil uVision5.
7.Edit the Reader.c
uchar code Q21[N]={/*put the codes you got in English_code.exe here*/};
Remember to Delete the last ',' in the codes , otherwise it will occur an error !
8.Edit the naddr.h
#define N /*put the number of codes you got in English_code.exe here*/
9.Build the target files.
10.Download the_first-Reader.hex into your MCS-51 and run it.