// FUN_011c9534 @ 011c9534 size=812 calls_out=7 calls_in=44
// strings: 

void FUN_011c9534(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  int local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar15 = FUN_01238114(param_4);
  iVar5 = (int)((ulonglong)uVar15 >> 0x20);
  iVar4 = (int)uVar15;
  piVar12 = *(int **)(param_2 + 4);
  if (param_5 == 0) {
    do {
      iVar3 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_011c985c;
    uVar15 = CONCAT44(*(undefined4 *)(param_2 + 8),piVar12);
  }
  else {
    uVar9 = *(uint *)(param_2 + 8);
    uVar11 = (*(int **)(param_5 + 4))[1];
    uVar13 = 0;
    if (uVar11 <= uVar9) {
      iVar3 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar12 + 2,uVar11);
      if (iVar3 != 0) {
        uVar11 = 0;
      }
      uVar13 = uVar11;
    }
    DataMemoryBarrier(0xb);
    if (*(int *)(param_5 + 0x14) != 0) {
      FUN_011f6248(param_5 + 0xc,param_5);
    }
    uVar15 = FUN_0123a948(*(undefined4 *)(param_5 + 0xc),*(undefined4 *)(param_5 + 0x10),
                          (int)(piVar12 + 2) + uVar13,uVar9 - uVar13);
  }
  local_50 = (int)((ulonglong)uVar15 >> 0x20);
  iVar3 = *(int *)(param_2 + 0xc);
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar3 + 0x10) != 0) {
    FUN_0120dd5c((undefined4 *)(iVar3 + 8),param_2);
  }
  piVar12 = *(int **)(iVar3 + 8);
  do {
    iVar6 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = iVar6 + 1;
  if (-1 < iVar6) {
    iVar6 = *(int *)(iVar3 + 0xc);
    piVar10 = *(int **)(iVar3 + 8);
    FUN_011c9910(&local_40,param_2,param_3,param_4,param_5,param_6);
    piVar12 = *(int **)(param_2 + 0x10);
    if (local_40 == -0x80000000) {
      if (piVar12 != (int *)0x0) {
        do {
          iVar3 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_011c985c;
      }
      piVar7 = (int *)((uint)&local_40 | 4);
      do {
        iVar3 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar3 + 1;
      if (-1 < iVar3) {
        param_1[0xc] = (int)piVar12;
        iVar8 = piVar7[1];
        iVar14 = *piVar7;
        iVar3 = piVar7[2];
        *(undefined1 *)(param_1 + 0xf) = 1;
        param_1[10] = iVar4;
        param_1[1] = 4;
        param_1[2] = 0;
        param_1[3] = iVar14;
        param_1[8] = (int)piVar10;
        param_1[9] = iVar6;
        param_1[0xb] = iVar5;
        param_1[0xd] = local_30;
        param_1[0xe] = 0;
        *param_1 = 0;
        param_1[4] = iVar8;
        param_1[5] = iVar3;
        *(undefined8 *)(param_1 + 6) = uVar15;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(piVar10,iVar6);
        }
        return;
      }
    }
    else {
      if (piVar12 == (int *)0x0) {
        *param_1 = local_40;
        param_1[1] = local_3c;
        param_1[2] = local_38;
        param_1[7] = local_50;
        param_1[8] = (int)piVar10;
        param_1[9] = iVar6;
        param_1[10] = iVar4;
        *(undefined1 *)(param_1 + 0xf) = 0;
        param_1[3] = local_34;
        param_1[4] = local_30;
        param_1[5] = local_2c;
        param_1[6] = (int)uVar15;
        param_1[0xb] = iVar5;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = local_28;
        return;
      }
      do {
        iVar3 = *piVar12;
        bVar2 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar2);
      *piVar12 = iVar3 + 1;
      if (-1 < iVar3) {
        *param_1 = local_40;
        param_1[1] = local_3c;
        param_1[2] = local_38;
        param_1[3] = local_34;
        param_1[5] = local_2c;
        param_1[7] = local_50;
        param_1[8] = (int)piVar10;
        param_1[9] = iVar6;
        param_1[10] = iVar4;
        *(undefined1 *)(param_1 + 0xf) = 0;
        param_1[4] = local_30;
        param_1[6] = (int)uVar15;
        param_1[0xb] = iVar5;
        param_1[0xc] = (int)piVar12;
        param_1[0xd] = 0;
        param_1[0xe] = local_28;
        return;
      }
    }
  }
LAB_011c985c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11c985c);
  (*pcVar1)();
}

