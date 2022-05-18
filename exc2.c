 #include <stdio.h>

int main (){
 
    int a = 9;
    int b = 22;

    if (&a > &b)
      {
	    printf ("X tem o maior endereco de memoria\n");
	        return;
      }
    printf ("Y tem o maior endereco de memoria\n");
  
}