// FUN_00883ee4 @ 00883ee4 size=1332 calls_out=13 calls_in=0
// strings: 

void FUN_00883ee4(int *param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined *local_380;
  int local_360;
  int local_35c;
  undefined *local_350;
  undefined4 local_34c;
  int local_348;
  int local_1c0;
  int local_1bc;
  undefined *local_1b8;
  int iStack_1b4;
  
  piVar13 = *(int **)(param_3 + 2);
  do {
    iVar3 = *piVar13;
    bVar2 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar2);
  *piVar13 = iVar3 + 1;
  if (iVar3 < 0) goto LAB_00884428;
  iVar3 = *(int *)((int)param_3 + 0x14);
  uVar17 = (**(code **)(iVar3 + 0x18))((int)piVar13 + (*(int *)(iVar3 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)((int)((ulonglong)uVar17 >> 0x20) + 0xc))(&local_1c0,(int *)uVar17);
  if ((local_1c0 == 0x34f9631d && local_1b8 == (undefined *)0x30678a24) &&
      (local_1bc == -0x4f0b6094 && iStack_1b4 == -0x4f0a8321)) {
    iVar9 = *(int *)uVar17;
    local_1c0 = *(int *)(iVar9 + 0x50);
    local_1bc = *(int *)(iVar9 + 0x54);
    local_1b8 = *(undefined **)(iVar9 + 0x58);
    FUN_007e5b48(&local_360,&local_1c0);
    iVar10 = local_35c;
    iVar5 = local_360;
    if (local_360 != 0) {
      piVar4 = (int *)thunk_FUN_016d4a50(0x10);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      piVar14 = *(int **)(param_3 + 3);
      *piVar4 = 1;
      piVar4[1] = 1;
      piVar4[2] = iVar5;
      piVar4[3] = iVar10;
      do {
        iVar5 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00884428;
      uVar17 = *param_3;
      piVar6 = (int *)thunk_FUN_016d4a50(0x30);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x30);
      }
      piVar6[2] = 0;
      piVar6[3] = 0;
      piVar6[4] = 0;
      *(undefined1 *)(piVar6 + 5) = 0;
      *piVar6 = 1;
      piVar6[1] = 1;
      iVar5 = *(int *)(param_2 + 0x148);
      piVar6[10] = (int)piVar14;
      *(undefined8 *)(piVar6 + 8) = uVar17;
      piVar6[6] = 2;
      if (iVar5 == 1) {
        do {
          iVar5 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar5 + 1;
        if (iVar5 < 0) goto LAB_00884428;
        piVar14 = (int *)thunk_FUN_016d4a50(0x1c);
        if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x1c);
        }
        local_380 = &DAT_0185fe78;
        piVar14[2] = (int)piVar6;
        *piVar14 = 1;
        iVar5 = *(int *)(param_2 + 0x14c);
        iVar10 = *(int *)(param_2 + 0x150);
        iVar12 = *(int *)(param_2 + 0x154);
        piVar14[1] = 1;
        piVar14[3] = (int)piVar4;
        piVar14[4] = iVar5;
        piVar14[5] = iVar10;
        piVar14[6] = iVar12;
        iVar5 = *(int *)((int)param_3 + 0x24);
        piVar6 = piVar14;
        if (iVar5 != 0) goto LAB_0088417c;
LAB_008840e0:
        iVar5 = 0;
        local_35c = 4;
        local_360 = 0;
      }
      else {
        local_380 = &DAT_01861b70;
        iVar5 = *(int *)((int)param_3 + 0x24);
        if (iVar5 == 0) goto LAB_008840e0;
LAB_0088417c:
        iVar10 = *(int *)(param_3 + 4);
        iVar12 = thunk_FUN_016d4a50(iVar5 << 3);
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,iVar5 << 3);
        }
        iVar11 = 0;
        piVar14 = *(int **)(param_2 + 0x158);
        local_360 = iVar5;
        local_35c = iVar12;
        do {
          iVar16 = iVar10 + iVar11 * 0x108;
          uVar15 = *(undefined4 *)(iVar16 + 0xf8);
          FUN_00849e70(&local_350,param_2);
          do {
            iVar7 = *piVar14;
            bVar2 = (bool)hasExclusiveAccess(piVar14);
          } while (!bVar2);
          *piVar14 = iVar7 + 1;
          if (iVar7 < 0) goto LAB_00884428;
          do {
            iVar7 = *piVar6;
            bVar2 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar2);
          *piVar6 = iVar7 + 1;
          if (iVar7 < 0) goto LAB_00884428;
          do {
            iVar7 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar7 + 1;
          if (iVar7 < 0) goto LAB_00884428;
          FUN_0087b564(&local_1c0,uVar15,&local_350,piVar14,iVar16 + 0x90,iVar9,piVar6,local_380,
                       piVar4);
          if (local_1c0 == 2 && local_1bc == 0) {
            local_350 = local_1b8;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00344cfc,0x24,&local_350,&DAT_018630e4,&DAT_01862e20);
          }
          FUN_016dd1aa(&local_350,&local_1c0,400);
          iVar16 = thunk_FUN_016d4a50(400);
          if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,400);
          }
          FUN_016dd1aa(iVar16,&local_350,400);
          piVar8 = (int *)(iVar12 + iVar11 * 8);
          *piVar8 = iVar16;
          iVar11 = iVar11 + 1;
          piVar8[1] = (int)&DAT_01862df4;
        } while (iVar11 != iVar5);
      }
      piVar14 = (int *)piVar4[2];
      do {
        iVar10 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar10 + 1;
      if (iVar10 < 0) {
LAB_00884428:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x884428);
        (*pcVar1)();
      }
      iVar10 = piVar4[2];
      iVar9 = piVar4[3];
      *param_1 = local_360;
      param_1[1] = local_35c;
      param_1[2] = iVar5;
      param_1[3] = iVar10;
      param_1[4] = iVar9;
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(piVar6,local_380);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00894304(piVar4);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar13;
        bVar2 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar2);
      *piVar13 = iVar5 + -1;
      goto LAB_00884380;
    }
    local_1c0 = 3;
    local_348 = local_35c;
    local_34c = 0x1d;
    local_350 = &DAT_003440df;
    iVar5 = FUN_0080807c(&local_350,&local_1c0);
  }
  else {
    iVar5 = FUN_0087af84(piVar13,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0x34));
  }
  *param_1 = -0x80000000;
  param_1[1] = iVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar13;
    bVar2 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar2);
  *piVar13 = iVar5 + -1;
LAB_00884380:
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(piVar13,iVar3);
  }
  return;
}

