#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{

vector<vector<int> > Table;
Table.resize(13);
for(int row=1; row<Table.size(); row++)
{
    cout<<"  ";
    Table[row].resize(13);
    for(int column=1; column<Table[row].size(); column++)
   {
      
      cout<<row*column<<"  ";
      
       
       
      
   } 
    cout<<endl;

}













return 0;
}
