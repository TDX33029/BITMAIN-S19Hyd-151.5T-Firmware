// FUN_013cb330 @ 013cb330 size=72 calls_out=3 calls_in=0
// strings: 

void FUN_013cb330(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *param_1 + 0x80000001U & *param_1 >> 0x1f;
  if (uVar1 == 0) {
    if ((short)param_1[3] != 2) {
      FUN_013cb16c();
    }
    FUN_0074dd34(param_1);
    return;
  }
  if (uVar1 == 1) {
    iVar2 = param_1[5];
    iVar3 = param_1[6];
  }
  else {
    iVar2 = param_1[1];
    iVar3 = param_1[2];
  }
  FUN_019bb7e0(iVar2,iVar3);
  return;
}

