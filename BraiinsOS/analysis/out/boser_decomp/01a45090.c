// FUN_01a45090 @ 01a45090 size=140 calls_out=0 calls_in=4
// strings: 

void FUN_01a45090(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar4 = param_4;
  if (uVar3 < param_4) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    uVar1 = 0;
    do {
      if (*(char *)(param_3 + uVar1) != *(char *)(iVar2 + uVar1)) {
        if (uVar1 < uVar4) goto LAB_01a450fc;
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar4 != uVar1);
  }
  if (param_4 <= uVar3) {
    param_1[2] = param_4;
    *(uint *)(param_2 + 8) = iVar2 + param_4;
    *(uint *)(param_2 + 0xc) = uVar3 - param_4;
    *param_1 = 3;
    param_1[1] = iVar2;
    return;
  }
LAB_01a450fc:
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

