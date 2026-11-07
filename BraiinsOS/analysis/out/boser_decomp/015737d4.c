// FUN_015737d4 @ 015737d4 size=680 calls_out=7 calls_in=45
// strings: 

void FUN_015737d4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int local_50;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int local_28;
  
  uVar13 = FUN_01531840(param_4);
  iVar4 = (int)((ulonglong)uVar13 >> 0x20);
  if (param_5 == 0) {
    piVar9 = *(int **)(param_2 + 4);
    do {
      iVar11 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar11 + 1;
    if (iVar11 < 0) goto LAB_01573a78;
    uVar14 = CONCAT44(*(undefined4 *)(param_2 + 8),piVar9);
  }
  else {
    uVar8 = *(uint *)(param_2 + 8);
    uVar10 = (*(int **)(param_5 + 4))[1];
    iVar11 = *(int *)(param_2 + 4) + 8;
    uVar6 = 0;
    if (uVar10 <= uVar8) {
      iVar3 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,iVar11,uVar10);
      uVar6 = uVar10;
      if (iVar3 != 0) {
        uVar6 = 0;
      }
    }
    DataMemoryBarrier(0xb);
    if (*(int *)(param_5 + 0x14) != 0) {
      FUN_0154f894(param_5 + 0xc,param_5);
    }
    uVar14 = FUN_01534d2c(*(undefined4 *)(param_5 + 0xc),*(undefined4 *)(param_5 + 0x10),
                          iVar11 + uVar6,uVar8 - uVar6);
  }
  local_50 = (int)((ulonglong)uVar14 >> 0x20);
  iVar11 = *(int *)(param_2 + 0xc);
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar11 + 0x10) != 0) {
    FUN_01551998((undefined4 *)(iVar11 + 8),param_2);
  }
  piVar9 = *(int **)(iVar11 + 8);
  do {
    iVar3 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar3 + 1;
  if (iVar3 < 0) {
LAB_01573a78:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1573a78);
    (*pcVar1)();
  }
  iVar11 = *(int *)(iVar11 + 0xc);
  FUN_01573b2c(&local_40,param_2,param_3,param_4,param_5,param_6);
  if (local_40 == -0x80000000) {
    piVar5 = *(int **)(param_2 + 0x10);
    if (piVar5 != (int *)0x0) {
      do {
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_01573a78;
    }
    piVar12 = (int *)((uint)&local_40 | 4);
    do {
      iVar3 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_01573a78;
    iVar3 = piVar12[1];
    iVar7 = piVar12[2];
    param_1[3] = *piVar12;
    param_1[4] = iVar3;
    param_1[5] = iVar7;
    *(undefined1 *)(param_1 + 0xf) = 1;
    param_1[7] = local_50;
    param_1[8] = (int)piVar9;
    param_1[9] = iVar11;
    param_1[10] = (int)uVar13;
    param_1[0xc] = (int)piVar5;
    param_1[0xe] = 0;
    param_1[6] = (int)uVar14;
    param_1[0xb] = iVar4;
    param_1[0xd] = local_30;
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(piVar9,iVar11);
    }
  }
  else {
    piVar5 = *(int **)(param_2 + 0x10);
    if (piVar5 != (int *)0x0) {
      do {
        iVar3 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_01573a78;
    }
    *param_1 = local_40;
    param_1[1] = iStack_3c;
    param_1[2] = iStack_38;
    param_1[3] = local_34;
    param_1[4] = local_30;
    param_1[5] = iStack_2c;
    *(undefined1 *)(param_1 + 0xf) = 0;
    param_1[7] = local_50;
    param_1[8] = (int)piVar9;
    param_1[9] = iVar11;
    param_1[10] = (int)uVar13;
    param_1[0xe] = local_28;
    param_1[6] = (int)uVar14;
    param_1[0xb] = iVar4;
    param_1[0xc] = (int)piVar5;
    param_1[0xd] = 0;
  }
  return;
}

