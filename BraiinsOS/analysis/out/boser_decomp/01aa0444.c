// FUN_01aa0444 @ 01aa0444 size=1188 calls_out=7 calls_in=2
// strings: fieldencoding error | oneof

void FUN_01aa0444(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  piVar8 = (int *)0x0;
  if (*(int *)(param_6 + 0x60) != -0x80000000) {
    piVar8 = (int *)(param_6 + 0x60);
  }
  FUN_01aa0048(&local_40,param_4,param_5,&DAT_005325f1,7,piVar8);
  iVar4 = local_34;
  iVar3 = local_38;
  iVar12 = local_3c;
  if (local_40 == 0) {
    FUN_006666fc(&local_40,local_38,local_34);
    iVar6 = param_2 + 0x20;
    do {
      iVar7 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar7 + 1;
    if (iVar7 < 0) {
LAB_01aa08e4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1aa08e4);
      (*pcVar1)();
    }
    piVar8 = (int *)FUN_01aa33b0(iVar6,&local_40,param_3);
    if (piVar8 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a9c644();
      }
    }
    iVar7 = *(int *)(param_6 + 0x20);
    if (iVar7 != 0) {
      iVar13 = *(int *)(param_6 + 0x1c);
      iVar11 = iVar13;
      do {
        iVar15 = iVar11 + 0x7c;
        do {
          iVar9 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_01aa08e4;
        FUN_01aa0444(&local_40,param_2,param_3,iVar3,iVar4,iVar11);
        if (local_40 != -0x7fffffff) goto LAB_01aa0864;
        iVar11 = iVar15;
      } while (iVar15 != iVar13 + iVar7 * 0x7c);
    }
    iVar7 = *(int *)(param_6 + 0x2c);
    if (iVar7 != 0) {
      iVar13 = *(int *)(param_6 + 0x28);
      iVar11 = iVar13;
      do {
        iVar15 = iVar11 + 0x40;
        do {
          iVar9 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_01aa08e4;
        FUN_01aa0178(&local_40,param_2,param_3,iVar3,iVar4,iVar11);
        if (local_40 != -0x7fffffff) goto LAB_01aa0864;
        iVar11 = iVar15;
      } while (iVar15 != iVar13 + iVar7 * 0x40);
    }
    iVar7 = *(int *)(param_6 + 8);
    if (iVar7 != 0) {
      iVar13 = *(int *)(param_6 + 4);
      iVar11 = iVar13;
      do {
        iVar15 = iVar11 + 0x80;
        do {
          iVar9 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_01aa08e4;
        piVar8 = (int *)0x0;
        if (*(int *)(iVar11 + 0x40) != -0x80000000) {
          piVar8 = (int *)(iVar11 + 0x40);
        }
        FUN_01aa0048(&local_40,iVar3,iVar4,"fieldencoding error",5,piVar8);
        iVar5 = local_34;
        iVar9 = local_38;
        iVar11 = local_3c;
        if (local_40 == 0) {
          local_30 = local_3c;
          local_2c = local_38;
          iStack_28 = local_34;
          piVar8 = (int *)FUN_01aa33b0(iVar6,&local_30,param_3);
          if (piVar8 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar8;
              bVar2 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar2);
            *piVar8 = iVar11 + -1;
            if (iVar11 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01a9c644();
            }
          }
        }
        else {
          DataMemoryBarrier(0xb);
          do {
            iVar10 = *param_3;
            bVar2 = (bool)hasExclusiveAccess(param_3);
          } while (!bVar2);
          *param_3 = iVar10 + -1;
          if (iVar10 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a9c644(param_3);
          }
          if (iVar11 != -0x7fffffff) {
            *param_1 = iVar11;
            param_1[1] = iVar9;
            param_1[2] = iVar5;
            goto LAB_01aa089c;
          }
        }
        iVar11 = iVar15;
      } while (iVar15 != iVar13 + iVar7 * 0x80);
    }
    iVar7 = *(int *)(param_6 + 0x44);
    if (iVar7 != 0) {
      piVar16 = *(int **)(param_6 + 0x40);
      piVar8 = piVar16;
      do {
        piVar17 = piVar8 + 6;
        piVar14 = (int *)0x0;
        if (*piVar8 != -0x80000000) {
          piVar14 = piVar8;
        }
        FUN_01aa0048(&local_40,iVar3,iVar4,"oneof",5,piVar14);
        local_30 = local_3c;
        local_2c = local_38;
        iStack_28 = local_34;
        if (local_40 != 0) {
          *param_1 = local_3c;
          param_1[1] = local_38;
          param_1[2] = local_34;
          goto LAB_01aa089c;
        }
        local_40 = local_3c;
        local_3c = local_38;
        local_38 = local_34;
        do {
          iVar11 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar11 + 1;
        if (iVar11 < 0) goto LAB_01aa08e4;
        piVar8 = (int *)FUN_01aa33b0(iVar6,&local_40,param_3);
        if (piVar8 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar11 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = iVar11 + -1;
          if (iVar11 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a9c644();
          }
        }
        piVar8 = piVar17;
      } while (piVar17 != piVar16 + iVar7 * 6);
    }
    *param_1 = -0x7fffffff;
    FUN_019bb7e0(iVar12,iVar3);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = iVar12 + -1;
    goto LAB_01aa08c0;
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  param_1[2] = local_34;
  goto LAB_01aa08a8;
LAB_01aa0864:
  param_1[1] = local_3c;
  *param_1 = local_40;
  param_1[2] = local_38;
LAB_01aa089c:
  FUN_019bb7e0(iVar12,iVar3);
LAB_01aa08a8:
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = iVar12 + -1;
LAB_01aa08c0:
  if (iVar12 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a9c644(param_3);
    return;
  }
  return;
}

