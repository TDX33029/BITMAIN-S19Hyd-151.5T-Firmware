// FUN_0007f4ac @ 0007f4ac  size=156  callers=1
// program: bmminer


int FUN_0007f4ac(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_c;
  
  iVar1 = FUN_0007ea04();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    for (local_c = FUN_0007f090(param_1); local_c != 0; local_c = FUN_0007f15c(param_1,local_c)) {
      uVar2 = FUN_0007f1cc(local_c);
      uVar3 = FUN_0007f208(local_c);
      uVar3 = FUN_00080ee8(uVar3);
      FUN_0007eb90(iVar1,uVar2,uVar3);
    }
  }
  return iVar1;
}

