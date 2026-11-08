// FUN_01a4bad4 @ 01a4bad4 size=152 calls_out=3 calls_in=2
// strings: 

void FUN_01a4bad4(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((uint)param_1[5] < param_2) {
    FUN_01a528c8(param_1 + 3,param_2,param_1[1],param_1[2]);
  }
  iVar1 = param_1[2];
  if (param_2 <= (uint)(*param_1 - iVar1)) {
    return;
  }
  uVar2 = 0xaaaaaa;
  if ((uint)(param_1[5] + param_1[6]) < 0xaaaaaa) {
    uVar2 = param_1[5] + param_1[6];
  }
  if (param_2 < uVar2 - iVar1) {
    iVar1 = FUN_01a54c4c(param_1,iVar1,uVar2 - iVar1,0xc0);
    if (iVar1 == -0x7fffffff) {
      return;
    }
    iVar1 = param_1[2];
  }
  FUN_01a54c38(param_1,iVar1,param_2,0xc0);
  return;
}

