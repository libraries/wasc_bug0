#include "elem_7_glue.h"
#include "./elem_7_abi/spectest.h"
int main()
{
    init();
    wavm_ret_int32_t wavm_ret1 = wavm_exported_function_call_7(NULL);
    if (*(uint32_t *)&wavm_ret1.value != 65)
    {
        return 1;
    }
    wavm_ret_int32_t wavm_ret2 = wavm_exported_function_call_9(NULL);
    if (*(uint32_t *)&wavm_ret2.value != 66)
    {
        return 2;
    }
}
