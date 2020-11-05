#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
	  ofstream myfile;
	  myfile.open ("generated.html");
	  myfile << "<html><title>My Web Page</title>\n"
		    "<body><h1>CPE 422 Web Page</h1> \n"
		    "My first HTML web page. \n"
		    "<h2>Testing BeagleBone using CGI scripts</h2> \n"
		    "<ol> \n"
		    "<li>Linux</li> \n"
		    "<li>Web Servers</li> \n"
		    "</ol> \n"
		    "</body></html>";
	  myfile.close();
          return 0;
}
