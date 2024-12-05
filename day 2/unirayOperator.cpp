// uniray operator 



    /**there are two types of uniray operators 
     * first increment ++
     * second decerement --
     * in this also the usge of these operator is post let a = a++(it is post usage)
     * where as a=++a (it is the pre usage)
     */
#include <iostream>
using namespace std;

int main(){

 int b = 3, a = 3;
     a = a++;
     b = ++b;
     cout<<"a "<<a<<endl;/**we will get 3 */
     cout<<"b "<<b<<endl;/**we will get 4 */

    return 0;
}