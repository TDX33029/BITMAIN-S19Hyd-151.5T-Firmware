// FUN_0007f3ec @ 0007f3ec  size=192  callers=1
// program: bmminer


int FUN_0007f3ec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_c;
  
  iVar1 = FUN_0007ea04();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = FUN_0007f090(param_1);
    local_c = FUN_0007f1cc(uVar2);
    while (local_c != 0) {
      uVar2 = FUN_0007f2bc(local_c);
      iVar3 = FUN_0007f208(uVar2);
      if (iVar3 == 0) break;
      FUN_0007e948(iVar1,local_c,iVar3);
      uVar2 = FUN_0007f2bc(local_c);
      uVar2 = FUN_0007f15c(param_1,uVar2);
      local_c = FUN_0007f1cc(uVar2);
    }
  }
  return iVar1;
}

