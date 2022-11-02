#include <iostream>
#include "Ex71.h"


int DentroRet(Ponto *v1, Ponto *v2, Ponto *p){

return v1->X >= p->X && v2->X <= p->X 
&& v1->Y >= p->Y && p->Y <= p->Y;

}