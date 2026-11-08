// FUN_0166d0cc @ 0166d0cc size=36 calls_out=1 calls_in=1
// strings: 

void FUN_0166d0cc(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_1 != 0) {
    uVar1 = param_1[1];
    iVar2 = 6;
    if (0x80000000 < uVar1) {
      iVar2 = uVar1 + 0x7fffffff;
    }
    switch(iVar2) {
    case 0:
      FUN_019bb7e0(param_1[2],param_1[3]);
      FUN_01443048(param_1[5],param_1[6]);
      return;
    default:
      iVar2 = param_1[2];
      iVar3 = param_1[3];
      break;
    case 3:
      FUN_019bb7e0(param_1[2],param_1[3]);
      iVar2 = param_1[5];
      iVar3 = param_1[6];
      break;
    case 6:
      iVar2 = 4;
      if (uVar1 != 0x80000000) {
        FUN_019bb7e0(uVar1,param_1[2]);
        iVar2 = 0xc;
      }
      piVar4 = (int *)((int)(param_1 + 1) + iVar2);
      iVar2 = *piVar4;
      iVar3 = piVar4[1];
    }
    FUN_019bb7e0(iVar2,iVar3);
    return;
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_01665520();
  return;
}

