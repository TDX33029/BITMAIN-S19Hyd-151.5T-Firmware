// FUN_00a222f8 @ 00a222f8 size=840 calls_out=9 calls_in=2
// strings: 

void FUN_00a222f8(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  int local_40;
  undefined1 local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int iStack_2c;
  
  piVar8 = (int *)param_1[2];
  param_1[2] = 0;
  if (piVar8 != (int *)0x0) {
    piVar5 = param_1 + 1;
    if (*param_1 != 0) {
      piVar5 = (int *)param_1[1];
    }
    FUN_01656cb0(&local_38,*piVar5 + 8);
    iVar4 = local_34;
    if (local_38 == 1) {
      local_3c = (undefined1)local_30;
      local_40 = local_34;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01c0d734,&DAT_01c23498);
    }
    uVar13 = local_30 & 0xff;
    iVar1 = local_34 + 0x18;
    uVar14 = *(uint *)(local_34 + 0x24);
    if (uVar14 == 0) {
      uVar9 = 0;
      uVar10 = 0;
LAB_00a223f8:
      if (uVar10 < uVar14) {
        iVar12 = *(int *)(iVar4 + 0x20);
        iVar11 = *(int *)(iVar4 + 0x1c);
        uVar2 = *(uint *)(iVar4 + 0x18);
        do {
          uVar6 = uVar2;
          if (iVar12 + uVar10 < uVar2) {
            uVar6 = 0;
          }
          piVar5 = (int *)(iVar11 + iVar12 * 8 + uVar6 * -8 + uVar10 * 8);
          iVar3 = piVar5[1];
          uVar7 = *(uint *)(iVar3 + 8);
          uVar6 = uVar7 - 1;
          if (uVar7 < 5) {
            uVar7 = 4;
          }
          piVar5 = (int *)(**(code **)(iVar3 + 0x14))
                                    (*piVar5 + (uVar7 - 1 & 0xfffffff8) + (uVar6 & 0xffffffe4) +
                                     0x24);
          if (piVar5 != piVar8 + 9) {
            FUN_009d2870(iVar1,uVar9,uVar10);
            uVar9 = uVar9 + 1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar14);
      }
      if (uVar10 != uVar9) {
        FUN_009d27e4(iVar1,uVar9);
      }
    }
    else {
      iVar12 = *(int *)(local_34 + 0x20);
      uVar9 = 0;
      uVar10 = *(uint *)(local_34 + 0x18);
      iVar11 = *(int *)(local_34 + 0x1c) + iVar12 * 8 + 4;
      do {
        uVar2 = uVar10;
        if (iVar12 + uVar9 < uVar10) {
          uVar2 = 0;
        }
        piVar5 = (int *)(iVar11 + uVar2 * -8);
        iVar3 = *piVar5;
        uVar6 = *(uint *)(iVar3 + 8);
        uVar2 = uVar6 - 1;
        if (uVar6 < 5) {
          uVar6 = 4;
        }
        piVar5 = (int *)(**(code **)(iVar3 + 0x14))
                                  (piVar5[-1] + (uVar6 - 1 & 0xfffffff8) + (uVar2 & 0xffffffe4) +
                                   0x24);
        if (piVar5 == piVar8 + 9) {
          uVar10 = uVar9 + 1;
          goto LAB_00a223f8;
        }
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 8;
      } while (uVar14 != uVar9);
    }
    uVar16 = FUN_00a22208(piVar8 + 9);
    (**(code **)((int)((ulonglong)uVar16 >> 0x20) + 0xc))(&local_38,(int)uVar16);
    if ((local_38 != -0x6453d2f5 || local_30 != 0x54308641) ||
        (local_34 != 0x546e630d || iStack_2c != -0x52fb1630)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c23488);
    }
    DataMemoryBarrier(0xb);
    bVar15 = *(char *)((int)uVar16 + 0xc) != '\0';
    iVar11 = 0;
    if (bVar15) {
      iVar11 = *(int *)(iVar4 + 0x14);
    }
    if (bVar15 && iVar11 != 0) {
      do {
        uVar16 = FUN_015ef9a8(iVar1);
        iVar11 = (int)((ulonglong)uVar16 >> 0x20);
        piVar5 = (int *)uVar16;
        if (piVar5 == (int *)0x0) break;
        uVar14 = *(uint *)(iVar11 + 8);
        uVar9 = uVar14 - 1;
        if (uVar14 < 5) {
          uVar14 = 4;
        }
        iVar12 = (**(code **)(iVar11 + 0xc))
                           ((int)piVar5 + (uVar9 & 0xffffffe4) + (uVar14 - 1 & 0xfffffff8) + 0x24);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar15 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar15);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a970d8(piVar5,iVar11);
        }
      } while (iVar12 == 0);
    }
    FUN_00a97e8c(iVar4,uVar13);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar15 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar15);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a970d8(piVar8,&DAT_01c0dfc4);
    }
  }
  return;
}

