// FUN_00756518 @ 00756518 size=60 calls_out=1 calls_in=4
// strings: 

void FUN_00756518(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == -0x7ffffffe) {
    return;
  }
  uVar1 = iVar2 + 0x80000001U & iVar2 >> 0x1f;
  if (uVar1 == 1) {
    param_1 = param_1 + 1;
    iVar2 = *param_1;
  }
  else if (uVar1 != 0) {
    return;
  }
  FUN_019bb7e0(iVar2,param_1[1]);
  return;
}

