// FUN_01bc0948 @ 01bc0948 size=228 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_01bc0948(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_1[3] == 0) {
    param_1[5] = -1;
    param_1[6] = -1;
    return 0;
  }
  if ((uint)param_1[3] <= (uint)param_1[1]) {
    param_1[5] = -1;
    param_1[6] = -1;
    return 0;
  }
  iVar5 = param_1[1] * 0xc;
  iVar1 = *param_1 + iVar5;
  uVar3 = *(uint *)(iVar1 + 4);
  iVar1 = *(int *)(iVar1 + 8);
  uVar2 = param_1[2];
  if (uVar2 < uVar3) {
    uVar4 = uVar3 - uVar2;
  }
  else {
    uVar4 = 0;
    iVar1 = (uVar3 + iVar1) - uVar2;
  }
  if (uVar4 < param_3) {
    uVar2 = param_2 + param_3;
    iVar5 = *(int *)(*param_1 + iVar5);
    param_1[5] = param_2 + uVar4;
    uVar3 = param_2 + uVar4 + iVar1;
    param_1[6] = uVar3;
    if (uVar3 <= uVar2) {
      param_3 = iVar1 + uVar4;
    }
    param_1[7] = iVar5;
    if (uVar2 < uVar3) {
      param_1[6] = uVar2;
    }
  }
  else {
    param_1[5] = -1;
    param_1[6] = -1;
  }
  uVar6 = FUN_01bc0850(param_1,param_3);
  return uVar6;
}

