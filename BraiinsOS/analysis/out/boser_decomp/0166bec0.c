// FUN_0166bec0 @ 0166bec0 size=152 calls_out=2 calls_in=2
// strings: 

void FUN_0166bec0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 == 0x8000000a) {
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  }
  uVar1 = *param_1;
  iVar2 = 6;
  if (0x80000000 < uVar1) {
    iVar2 = uVar1 + 0x7fffffff;
  }
  switch(iVar2) {
  case 0:
    FUN_019bb7e0(param_1[1],param_1[2]);
    FUN_01443048(param_1[4],param_1[5]);
    return;
  default:
    uVar1 = param_1[1];
    uVar3 = param_1[2];
    break;
  case 3:
    FUN_019bb7e0(param_1[1],param_1[2]);
    uVar1 = param_1[4];
    uVar3 = param_1[5];
    break;
  case 6:
    iVar2 = 4;
    if (uVar1 != 0x80000000) {
      FUN_019bb7e0(uVar1,param_1[1]);
      iVar2 = 0xc;
    }
    uVar1 = *(uint *)((int)param_1 + iVar2);
    uVar3 = ((uint *)((int)param_1 + iVar2))[1];
  }
  FUN_019bb7e0(uVar1,uVar3);
  return;
}

