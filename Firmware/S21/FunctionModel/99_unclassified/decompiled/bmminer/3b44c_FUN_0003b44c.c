// FUN_0003b44c @ 0003b44c  size=264  callers=4
// program: bmminer


void FUN_0003b44c(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = vsnprintf((char *)(*param_1 + param_1[2]),param_1[1] - param_1[2],param_2,&uStack_8);
  uVar5 = param_1[1];
  iVar2 = iVar1 + param_1[2];
  if ((int)uVar5 < iVar2) {
    puVar3 = (uint *)param_1[3];
    uVar6 = *puVar3;
    *puVar3 = uVar6 - uVar5;
    puVar3[1] = puVar3[1] - (((int)uVar5 >> 0x1f) + (uint)(uVar6 < uVar5));
    uVar5 = param_1[1];
    if ((int)uVar5 < iVar1 + param_1[2]) {
      do {
        uVar5 = uVar5 * 2;
      } while ((int)uVar5 < iVar1 + param_1[2]);
      param_1[1] = uVar5;
    }
    puVar3 = (uint *)param_1[3];
    uVar6 = *puVar3;
    *puVar3 = uVar6 + uVar5;
    puVar3[1] = puVar3[1] + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar6,uVar5);
    pvVar4 = realloc((void *)*param_1,param_1[1]);
    *param_1 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("ctx->buf != NULL","miner_api/httpserver.h",0x5b4,"grwprintf");
    }
    iVar2 = vsnprintf((char *)((int)pvVar4 + param_1[2]),param_1[1] - param_1[2],param_2,&uStack_8);
    iVar2 = iVar1 + iVar2 + param_1[2];
  }
  param_1[2] = iVar2;
  return;
}

