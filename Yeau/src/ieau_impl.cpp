#include "ieau_api.h"
#include "eau_all.h"

void CreateIEauApi(eau::IEauApi ** pp)
{
    (*pp) = new eau::CEauAPI();
}

void DestroyIEauApi(eau::IEauApi ** pp)
{
    if (*pp) {
        delete (*pp);
        (*pp) = NULL;
    }
}
