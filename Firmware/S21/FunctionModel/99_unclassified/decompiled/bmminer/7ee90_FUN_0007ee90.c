// FUN_0007ee90 @ 0007ee90  size=256  callers=0
// program: bmminer


undefined4 FUN_0007ee90(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  
  if ((((param_1 == (int *)0x0) || (*param_1 != 0)) || (param_2 == (int *)0x0)) || (*param_2 != 0))
  {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_0007f090(param_2);
    local_c = FUN_0007f1cc(uVar3);
    while (local_c != 0) {
      uVar3 = FUN_0007f2bc(local_c);
      iVar2 = FUN_0007f208(uVar3);
      if (iVar2 == 0) break;
      iVar1 = FUN_0007eb20(param_1,local_c);
      if (iVar1 != 0) {
        FUN_0007e948(param_1,local_c,iVar2);
      }
      uVar3 = FUN_0007f2bc(local_c);
      uVar3 = FUN_0007f15c(param_2,uVar3);
      local_c = FUN_0007f1cc(uVar3);
    }
    uVar3 = 0;
  }
  return uVar3;
}

