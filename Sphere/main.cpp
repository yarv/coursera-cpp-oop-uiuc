#include "Sphere.h"
#include <iostream>
#include <string>


using namespace std;
int main(){
    Sphere testSphere1 (5);
    Sphere testSphere2 (-3);

    cout << "Test sphere 1 details...\n\n" << endl;
    testSphere1.printDetails();

    cout << "Test sphere 2 details...\n\n" << endl;
    testSphere2.printDetails();
    return 0;
}
