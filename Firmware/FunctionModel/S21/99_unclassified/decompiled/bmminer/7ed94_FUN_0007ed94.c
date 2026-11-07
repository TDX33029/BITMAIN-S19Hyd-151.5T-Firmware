// FUN_0007ed94 @ 0007ed94  size=252  callers=0
// program: bmminer


undefined4 FUN_0007ed94(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if ((((param_1 == (int *)0x0) || (*param_1 != 0)) || (param_2 == (int *)0x0)) || (*param_2 != 0))
  {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_0007f090(param_2);
    local_c = FUN_0007f1cc(uVar2);
    while (local_c != 0) {
      uVar2 = FUN_0007f2bc(local_c);
      iVar1 = FUN_0007f208(uVar2);
      if (iVar1 == 0) break;
      iVar1 = FUN_0007e948(param_1,local_c,iVar1);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      uVar2 = FUN_0007f2bc(local_c);
      uVar2 = FUN_0007f15c(param_2,uVar2);
      local_c = FUN_0007f1cc(uVar2);
    }
    uVar2 = 0;
  }
  return uVar2;
}

