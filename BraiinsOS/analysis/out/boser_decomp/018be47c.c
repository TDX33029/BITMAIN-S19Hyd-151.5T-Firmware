// FUN_018be47c @ 018be47c size=80 calls_out=1 calls_in=1
// strings: 

void FUN_018be47c(byte param_1,byte param_2,int *param_3)

{
  int iVar1;
  
  if (1 < param_1) {
    if (param_1 == 2) {
      param_1 = 0x40;
    }
    else {
      param_1 = param_2;
    }
  }
  iVar1 = param_3[2];
  if (iVar1 == *param_3) {
    FUN_006666a0(param_3);
  }
  *(byte *)(param_3[1] + iVar1) = param_1;
  param_3[2] = iVar1 + 1;
  return;
}

