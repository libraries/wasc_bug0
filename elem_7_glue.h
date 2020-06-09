#include<stddef.h>
#include<stdint.h>

#ifndef elem_7_GLUE_H
#define elem_7_GLUE_H

typedef struct {
  void* dummy;
  int32_t value;
} wavm_ret_int32_t;

typedef struct {
  void* dummy;
  int64_t value;
} wavm_ret_int64_t;

typedef struct {
  void* dummy;
  float value;
} wavm_ret_float;

typedef struct {
  void* dummy;
  double value;
} wavm_ret_double;

const uint64_t functionDefMutableData = 0;
const uint64_t biasedInstanceId = 0;
const uint64_t tableReferenceBias = 0;

const uint64_t typeId0 = 0;
extern wavm_ret_int32_t (functionDef0) (void*);
const uint64_t functionDefMutableDatas0 = 0;
extern wavm_ret_int32_t (functionDef1) (void*);
const uint64_t functionDefMutableDatas1 = 0;
extern wavm_ret_int32_t (functionDef2) (void*);
const uint64_t functionDefMutableDatas2 = 0;
extern wavm_ret_int32_t (functionDef3) (void*);
const uint64_t functionDefMutableDatas3 = 0;
#define wavm_exported_function_call_7 functionDef2
#define wavm_exported_function_call_9 functionDef3
uint32_t table0_length = 10;
uintptr_t table0[10] = {
  0, 0, 0, 0,
  0, 0, 0, ((uintptr_t) (functionDef0)),
  0, ((uintptr_t) (functionDef1))
};
uintptr_t* tableOffset0 = table0;
#define TABLE0_DEFINED 1

void* init() {
  table0[7] = table0[7] - ((uintptr_t) &tableReferenceBias) - 0x20;
  table0[9] = table0[9] - ((uintptr_t) &tableReferenceBias) - 0x20;
}

#endif /* elem_7_GLUE_H */
