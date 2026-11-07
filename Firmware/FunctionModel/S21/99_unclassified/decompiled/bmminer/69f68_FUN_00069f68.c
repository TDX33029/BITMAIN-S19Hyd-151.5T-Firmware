// FUN_00069f68 @ 00069f68  size=100  callers=1
// program: bmminer


void FUN_00069f68(undefined4 *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  free((void *)*param_1);
  pvVar1 = malloc(param_3);
  *param_1 = pvVar1;
  memcpy((void *)*param_1,param_2,param_3);
  return;
}

