// FUN_000800e8 @ 000800e8  size=200  callers=3
// program: bmminer


int FUN_000800e8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_c;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    if (param_3 == 0) {
      local_c = FUN_0007d960(param_1,param_2);
      if (local_c == 0) {
        return 0;
      }
    }
    else {
      local_c = param_1;
    }
    iVar1 = FUN_0007d8a0(0x10);
    if (iVar1 == 0) {
      FUN_0007d8e8(local_c);
      iVar1 = 0;
    }
    else {
      FUN_0007e9c8(iVar1,2);
      *(int *)(iVar1 + 8) = local_c;
      *(undefined4 *)(iVar1 + 0xc) = param_2;
    }
  }
  return iVar1;
}

