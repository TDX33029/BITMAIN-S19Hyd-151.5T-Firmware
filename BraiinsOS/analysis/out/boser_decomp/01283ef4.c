// FUN_01283ef4 @ 01283ef4 size=104 calls_out=1 calls_in=25
// strings: 

void FUN_01283ef4(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = param_1[3];
  if ((uVar1 & 1) != 0) {
    uVar2 = param_2 + (uVar1 >> 5);
    if (uVar2 < 0x8000000) {
      param_1[3] = uVar1 & 0x1f | uVar2 * 0x20;
    }
    else {
      FUN_01283f5c(param_1,1);
    }
  }
  iVar3 = param_1[1] - param_2;
  if ((uint)param_1[1] < param_2) {
    iVar3 = 0;
  }
  *param_1 = *param_1 + param_2;
  param_1[1] = iVar3;
  param_1[2] = param_1[2] - param_2;
  return;
}

