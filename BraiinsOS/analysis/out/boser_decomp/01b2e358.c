// FUN_01b2e358 @ 01b2e358 size=256 calls_out=5 calls_in=8
// strings: 

int FUN_01b2e358(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_2 != 0) {
    iVar1 = FUN_01b2e300();
    if (iVar1 != 0) {
      iVar1 = FUN_01b2b4cc(param_1,param_2);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_01b2e318(param_1,1);
      return iVar1;
    }
    if (param_1[3] != 0) {
      param_1[3] = 0;
      iVar1 = FUN_01b2e458(param_1,param_2);
      param_1[3] = 1;
      return iVar1;
    }
    iVar2 = FUN_01b2b88c(param_1);
    puVar4 = (uint *)*param_1;
    iVar1 = 0;
    if ((iVar2 == 1) && (*puVar4 < param_2)) {
      *puVar4 = param_2 - *puVar4;
      param_1[3] = 1;
    }
    else {
      for (; uVar3 = *puVar4 - param_2, *puVar4 < param_2; puVar4 = puVar4 + 1) {
        iVar1 = iVar1 + 1;
        param_2 = 1;
        *puVar4 = uVar3;
      }
      *puVar4 = uVar3;
      if ((uVar3 == 0) && (param_1[1] + -1 == iVar1)) {
        param_1[1] = iVar1;
      }
    }
  }
  return 1;
}

