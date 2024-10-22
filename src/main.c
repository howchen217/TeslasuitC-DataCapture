#include<stdio.h>
#include<ts_api/ts_core_api.h>

int main()
{
    printf("hello world");
    if(1){
        TsStatusCode code = ts_initialize();
        printf(ts_get_status_code_message(code));
    }

    return 0;
}