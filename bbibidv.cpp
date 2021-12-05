#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
int vl = 3;
vector<int>vc = {8, 9, 3, 2, 4};
auto rslt = find(vc.begin(), vc.end(), vl);
if (rslt != end(vc))
cout<< "Elements_present_in_Vector " <<vl<<endl;
vl = 4;
rslt = find(vc.begin(), vc.end(), vl);
if (rslt == end(vc))
cout<<"Element_not_present_in_Vector" <<vl<<endl;
return 0;
}
