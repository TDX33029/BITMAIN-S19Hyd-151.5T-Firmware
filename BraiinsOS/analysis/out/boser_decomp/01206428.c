// FUN_01206428 @ 01206428 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_01206428(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (*param_1 == 0) {
    if (iVar1 == 0) {
      FUN_01443048(param_1[2],param_1[3]);
      return;
    }
    return;
  }
  if (iVar1 == -0x80000000) {
    return;
  }
  FUN_019bb7e0(iVar1,param_1[2]);
  return;
}

