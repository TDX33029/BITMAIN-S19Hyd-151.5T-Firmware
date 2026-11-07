// FUN_0003a734 @ 0003a734  size=144  callers=1
// program: bmminer


void FUN_0003a734(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *__ptr;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[2];
  __ptr = (void *)*param_1;
  if (iVar1 == param_1[1]) {
    param_1[1] = iVar1 * 2;
    __ptr = realloc(__ptr,iVar1 * 0x18);
    *param_1 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("dyn->buf != NULL","miner_api/httpserver.h",0x3eb,"http_token_dyn_push");
    }
    iVar1 = param_1[2];
  }
  puVar2 = (undefined4 *)((int)__ptr + iVar1 * 0xc);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  param_1[2] = param_1[2] + 1;
  return;
}

