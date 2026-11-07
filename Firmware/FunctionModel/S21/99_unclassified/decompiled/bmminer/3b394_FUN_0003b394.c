// FUN_0003b394 @ 0003b394  size=180  callers=2
// program: bmminer


void FUN_0003b394(undefined4 *param_1,void *param_2,size_t param_3)

{
  uint *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1[2];
  uVar3 = param_1[1];
  if ((int)uVar3 < (int)(iVar5 + param_3)) {
    puVar1 = (uint *)param_1[3];
    uVar4 = *puVar1;
    *puVar1 = uVar4 - uVar3;
    puVar1[1] = puVar1[1] - (((int)uVar3 >> 0x1f) + (uint)(uVar4 < uVar3));
    puVar1 = (uint *)param_1[3];
    uVar3 = param_3 + param_1[2];
    param_1[1] = uVar3;
    uVar4 = *puVar1;
    *puVar1 = uVar4 + uVar3;
    puVar1[1] = puVar1[1] + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar4,uVar3);
    pvVar2 = realloc((void *)*param_1,param_1[1]);
    *param_1 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("ctx->buf != NULL","miner_api/httpserver.h",0x5a4,"grwmemcpy");
    }
    iVar5 = param_1[2];
  }
  else {
    pvVar2 = (void *)*param_1;
  }
  memcpy((void *)((int)pvVar2 + iVar5),param_2,param_3);
  param_1[2] = param_1[2] + param_3;
  return;
}

