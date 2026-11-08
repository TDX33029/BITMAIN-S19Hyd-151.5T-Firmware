// FUN_01717ee0 @ 01717ee0 size=316 calls_out=5 calls_in=8
// strings: 

int FUN_01717ee0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    iVar1 = FUN_01717e5c();
    if (iVar1 != 0) {
      iVar1 = FUN_01714a30(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_01717e74(param_1,1);
      return iVar1;
    }
    if (param_1[3] != 0) {
      param_1[3] = 0;
      iVar1 = FUN_0171801c(param_1);
      param_1[3] = 1;
      return iVar1;
    }
    iVar2 = FUN_01714e64(param_1);
    puVar3 = (uint *)*param_1;
    uVar4 = *puVar3;
    iVar1 = 0;
    if (iVar2 == 1) {
      if (uVar4 < param_2) {
        *puVar3 = param_2 - uVar4;
        param_1[3] = 1;
        return 1;
      }
    }
    else {
      uVar5 = uVar4;
      iVar2 = 0;
      if (uVar4 < param_2) {
        do {
          *puVar3 = uVar5 - param_2;
          puVar3 = puVar3 + 1;
          uVar4 = *puVar3;
          iVar1 = iVar2 + 1;
          param_2 = 1;
          uVar5 = 0;
          iVar2 = iVar1;
        } while (uVar4 == 0);
      }
    }
    *puVar3 = uVar4 - param_2;
    if ((uVar4 - param_2 == 0) && (param_1[1] + -1 == iVar1)) {
      param_1[1] = iVar1;
    }
  }
  return 1;
}

