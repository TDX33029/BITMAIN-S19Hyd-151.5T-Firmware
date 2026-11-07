// FUN_0007ff14 @ 0007ff14  size=184  callers=1
// program: bmminer


undefined4 FUN_0007ff14(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_c;
  
  uVar1 = FUN_0007f66c(param_1);
  uVar2 = FUN_0007f66c(param_2);
  if (uVar1 == uVar2) {
    for (local_c = 0; local_c < uVar1; local_c = local_c + 1) {
      uVar5 = FUN_0007f6b8(param_1,local_c);
      uVar3 = FUN_0007f6b8(param_2,local_c);
      iVar4 = FUN_00080d20(uVar5,uVar3);
      if (iVar4 == 0) {
        return 0;
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

