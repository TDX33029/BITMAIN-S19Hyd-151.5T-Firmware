// FUN_0007f2fc @ 0007f2fc  size=240  callers=1
// program: bmminer


undefined4 FUN_0007f2fc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_14;
  
  iVar1 = FUN_0007eacc(param_1);
  iVar2 = FUN_0007eacc(param_2);
  if (iVar1 == iVar2) {
    uVar3 = FUN_0007f090(param_1);
    local_14 = FUN_0007f1cc(uVar3);
    while (local_14 != 0) {
      uVar3 = FUN_0007f2bc(local_14);
      iVar1 = FUN_0007f208(uVar3);
      if (iVar1 == 0) break;
      uVar3 = FUN_0007eb20(param_2,local_14);
      iVar1 = FUN_00080d20(iVar1,uVar3);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = FUN_0007f2bc(local_14);
      uVar3 = FUN_0007f15c(param_1,uVar3);
      local_14 = FUN_0007f1cc(uVar3);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

