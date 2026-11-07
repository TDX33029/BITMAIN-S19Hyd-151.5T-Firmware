// FUN_01679c3c @ 01679c3c size=88 calls_out=1 calls_in=1
// strings: 

void FUN_01679c3c(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[2];
  if (*param_1 != 0) {
    iVar2 = uVar1 - 0x22;
    if (uVar1 < 0x22) {
      iVar2 = 0;
    }
    if (iVar2 == 1) {
      param_1 = param_1 + 4;
      if (*param_1 < -0x7ffffffc) {
        return;
      }
      goto LAB_01679c88;
    }
    if (iVar2 != 0) {
      return;
    }
  }
  iVar2 = 0x1c;
  if (uVar1 == 0x22) {
    iVar2 = 4;
  }
  param_1 = (int *)((int)(param_1 + 2) + iVar2);
LAB_01679c88:
  FUN_0134bd64(*param_1,param_1[1]);
  return;
}

