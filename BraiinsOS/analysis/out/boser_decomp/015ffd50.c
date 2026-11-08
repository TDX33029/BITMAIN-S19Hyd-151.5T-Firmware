// FUN_015ffd50 @ 015ffd50 size=180 calls_out=0 calls_in=1
// strings: 

void FUN_015ffd50(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (*param_2 == 1) {
    uVar3 = *(uint *)(param_2[5] + 0x10);
    if (uVar3 == 1) {
      uVar3 = param_3 << 1 | 1;
      param_3 = param_3 << 1;
    }
    else {
      if ((uVar3 <= (uint)param_2[1]) ||
         (piVar4 = (int *)(*(int *)(param_2[5] + 0xc) + param_2[1] * 8), iVar1 = *piVar4,
         (uint)(piVar4[1] - iVar1) >> 1 < param_3)) goto LAB_015ffdec;
      iVar1 = iVar1 + param_3 * 2;
      uVar3 = iVar1 - 1;
      param_3 = iVar1 - 2;
    }
    if (param_3 < (uint)param_2[4]) {
      iVar1 = *(int *)(param_2[3] + param_3 * 4);
      if (((iVar1 != 0) && (uVar3 < (uint)param_2[4])) &&
         (iVar2 = *(int *)(param_2[3] + uVar3 * 4), iVar2 != 0)) {
        iVar5 = param_2[8];
        iVar6 = param_2[9];
        param_1[2] = iVar1 + -1;
        param_1[1] = iVar6;
        param_1[3] = iVar2 + -1;
      }
    }
  }
LAB_015ffdec:
  *param_1 = iVar5;
  return;
}

