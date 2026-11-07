// FUN_006fe820 @ 006fe820 size=388 calls_out=1 calls_in=2
// strings: 

void FUN_006fe820(int *param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_30;
  int iStack_2c;
  int local_28;
  
  iVar6 = ((uint)param_2 % 0x43) * 0x20;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if (*(int *)(&DAT_018dd084 + iVar6) != 1) {
    iVar10 = *param_2;
    iVar7 = param_2[1];
    iVar8 = param_2[2];
    iVar5 = param_2[3];
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    if (*(int *)(&DAT_018dd080 + iVar6) == *(int *)(&DAT_018dd080 + ((uint)param_2 % 0x43) * 0x20)
        && *(int *)(&DAT_018dd084 + iVar6) == *(int *)(&DAT_018dd084 + iVar6)) goto LAB_006fe94c;
  }
  piVar3 = (int *)(&DAT_018dd084 + iVar6);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
  if (iVar6 == 1) {
    uVar4 = 0;
    do {
      while (*piVar3 == 1) {
        if (uVar4 < 5) {
          uVar9 = 1;
          do {
            uVar1 = uVar9 >> (uVar4 & 0xff);
            uVar9 = uVar9 + 1;
            HintYield();
          } while (uVar1 == 0);
          uVar4 = uVar4 + 1;
        }
        else if ((uVar4 & 0x1f) != 0x1f) {
          iVar6 = 1 << (uVar4 & 0x1f);
          do {
            iVar6 = iVar6 + -1;
            HintYield();
          } while (iVar6 != 0);
        }
      }
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = 1;
      DataMemoryBarrier(0xb);
    } while (iVar6 == 1);
  }
  DataMemoryBarrier(0xb);
  iVar10 = *param_2;
  iVar7 = param_2[1];
  iVar8 = param_2[2];
  iVar5 = param_2[3];
  DataMemoryBarrier(0xb);
  *piVar3 = iVar6;
LAB_006fe94c:
  if ((iVar10 == 0 && iVar8 == 0) && (iVar7 == 0 && iVar5 == 0)) {
    param_1[6] = (int)&DAT_3b9aca00;
    return;
  }
  FUN_015f3b0c(&local_30,1);
  *param_1 = iVar10;
  param_1[1] = iVar7;
  param_1[2] = iVar8;
  param_1[3] = iVar5;
  param_1[4] = local_30;
  param_1[5] = iStack_2c;
  param_1[6] = local_28;
  return;
}

