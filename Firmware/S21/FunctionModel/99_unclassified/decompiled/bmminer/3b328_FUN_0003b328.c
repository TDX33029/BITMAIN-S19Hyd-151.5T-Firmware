// FUN_0003b328 @ 0003b328  size=104  callers=3
// program: bmminer


void FUN_0003b328(int *param_1,size_t param_2,uint *param_3)

{
  void *pvVar1;
  uint uVar2;
  
  param_1[3] = (int)param_3;
  param_1[2] = 0;
  pvVar1 = malloc(param_2);
  *param_1 = (int)pvVar1;
  uVar2 = *param_3;
  *param_3 = uVar2 + param_2;
  param_3[1] = param_3[1] + ((int)param_2 >> 0x1f) + (uint)CARRY4(uVar2,param_2);
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("ctx->buf != NULL","miner_api/httpserver.h",0x59a,"grwprintf_init");
  }
  param_1[1] = param_2;
  return;
}

