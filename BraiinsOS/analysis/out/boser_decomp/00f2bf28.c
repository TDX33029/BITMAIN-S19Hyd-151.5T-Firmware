// FUN_00f2bf28 @ 00f2bf28 size=1052 calls_out=10 calls_in=3
// strings: Out of bounds access

void FUN_00f2bf28(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined *puVar20;
  uint uVar21;
  bool bVar22;
  undefined8 uVar23;
  int local_40;
  undefined1 local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int iStack_2c;
  
  piVar14 = (int *)param_1[2];
  param_1[2] = 0;
  if (piVar14 != (int *)0x0) {
    piVar6 = param_1 + 1;
    if (*param_1 != 0) {
      piVar6 = (int *)param_1[1];
    }
    FUN_01656cb0(&local_38,*piVar6 + 8);
    iVar5 = local_34;
    if (local_38 == 1) {
      local_3c = (undefined1)local_30;
      local_40 = local_34;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01c19394,&DAT_01c23498);
    }
    uVar1 = local_30 & 0xff;
    uVar21 = *(uint *)(local_34 + 0x24);
    if (uVar21 == 0) {
      uVar17 = 0;
      uVar18 = 0;
LAB_00f2c01c:
      if (uVar18 < uVar21) {
        puVar20 = &DAT_0056c0e8;
        do {
          if (*(uint *)(iVar5 + 0x24) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("Out of bounds access",0x14,&DAT_01d20e0c);
          }
          iVar15 = *(int *)(iVar5 + 0x20);
          if (*(uint *)(iVar5 + 0x18) <= uVar18 + iVar15) {
            iVar15 = iVar15 - *(uint *)(iVar5 + 0x18);
          }
          piVar6 = (int *)(*(int *)(iVar5 + 0x1c) + (uVar18 + iVar15) * 8);
          iVar15 = piVar6[1];
          uVar2 = *(uint *)(iVar15 + 8);
          uVar8 = uVar2 - 1;
          if (uVar2 < 5) {
            uVar2 = 4;
          }
          piVar6 = (int *)(**(code **)(iVar15 + 0x14))
                                    (*piVar6 + (uVar2 - 1 & 0xfffffff8) + (uVar8 & 0xffffffcc) +
                                     0x3c);
          if (piVar6 != piVar14 + 0xf) {
            if (*(uint *)(iVar5 + 0x24) <= uVar17) {
              puVar11 = &DAT_01d20e1c;
LAB_00f2c344:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(puVar20,0x20,puVar11);
            }
            if (*(uint *)(iVar5 + 0x24) <= uVar18) {
              puVar20 = &DAT_0056c748;
              puVar11 = &DAT_01d20e2c;
              goto LAB_00f2c344;
            }
            uVar8 = *(uint *)(iVar5 + 0x18);
            uVar12 = *(int *)(iVar5 + 0x20) + uVar18;
            uVar9 = *(int *)(iVar5 + 0x20) + uVar17;
            uVar17 = uVar17 + 1;
            uVar2 = uVar12 - uVar8;
            if (uVar12 < uVar8) {
              uVar2 = uVar12;
            }
            uVar12 = uVar9 - uVar8;
            if (uVar9 < uVar8) {
              uVar12 = uVar9;
            }
            puVar13 = (undefined4 *)(*(int *)(iVar5 + 0x1c) + uVar2 * 8);
            puVar7 = (undefined4 *)(*(int *)(iVar5 + 0x1c) + uVar12 * 8);
            uVar4 = *puVar7;
            uVar10 = puVar13[1];
            uVar16 = puVar7[1];
            *puVar7 = *puVar13;
            puVar7[1] = uVar10;
            *puVar13 = uVar4;
            puVar13[1] = uVar16;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar21);
      }
      if ((uVar18 != uVar17) && (uVar21 = *(uint *)(iVar5 + 0x24), uVar17 < uVar21)) {
        uVar2 = *(uint *)(iVar5 + 0x18);
        uVar8 = *(uint *)(iVar5 + 0x20);
        iVar15 = *(int *)(iVar5 + 0x1c);
        *(uint *)(iVar5 + 0x24) = uVar17;
        uVar18 = uVar8 - uVar2;
        if (uVar8 < uVar2) {
          uVar18 = uVar8;
        }
        uVar2 = uVar2 - uVar18;
        iVar19 = uVar21 - uVar2;
        if (uVar21 < uVar2) {
          iVar19 = 0;
        }
        if (uVar2 < uVar21) {
          uVar21 = uVar2;
        }
        if (uVar2 < uVar17) {
          iVar19 = iVar19 - (uVar17 - uVar21);
          iVar15 = iVar15 + (uVar17 - uVar21) * 8;
        }
        else {
          FUN_009d06fc(iVar15 + uVar18 * 8 + uVar17 * 8,uVar21 - uVar17);
        }
        FUN_009d06fc(iVar15,iVar19);
      }
    }
    else {
      iVar15 = *(int *)(local_34 + 0x20);
      uVar17 = 0;
      uVar18 = *(uint *)(local_34 + 0x18);
      iVar19 = *(int *)(local_34 + 0x1c) + iVar15 * 8 + 4;
      do {
        uVar2 = uVar18;
        if (iVar15 + uVar17 < uVar18) {
          uVar2 = 0;
        }
        piVar6 = (int *)(iVar19 + uVar2 * -8);
        iVar3 = *piVar6;
        uVar8 = *(uint *)(iVar3 + 8);
        uVar2 = uVar8 - 1;
        if (uVar8 < 5) {
          uVar8 = 4;
        }
        piVar6 = (int *)(**(code **)(iVar3 + 0x14))
                                  (piVar6[-1] + (uVar8 - 1 & 0xfffffff8) + (uVar2 & 0xffffffcc) +
                                   0x3c);
        if (piVar6 == piVar14 + 0xf) {
          uVar18 = uVar17 + 1;
          goto LAB_00f2c01c;
        }
        uVar17 = uVar17 + 1;
        iVar19 = iVar19 + 8;
      } while (uVar21 != uVar17);
    }
    uVar23 = FUN_00f2bf18(piVar14 + 0xf);
    (**(code **)((int)((ulonglong)uVar23 >> 0x20) + 0xc))(&local_38,(int)uVar23);
    if ((local_38 != -0x6453d2f5 || local_30 != 0x54308641) ||
        (local_34 != 0x546e630d || iStack_2c != -0x52fb1630)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c23488);
    }
    DataMemoryBarrier(0xb);
    bVar22 = *(char *)((int)uVar23 + 0xc) != '\0';
    iVar15 = 0;
    if (bVar22) {
      iVar15 = *(int *)(iVar5 + 0x14);
    }
    if (bVar22 && iVar15 != 0) {
      do {
        uVar23 = FUN_015ef9a8(iVar5 + 0x18);
        iVar15 = (int)((ulonglong)uVar23 >> 0x20);
        piVar6 = (int *)uVar23;
        if (piVar6 == (int *)0x0) break;
        uVar21 = *(uint *)(iVar15 + 8);
        uVar17 = uVar21 - 1;
        if (uVar21 < 5) {
          uVar21 = 4;
        }
        iVar19 = (**(code **)(iVar15 + 0xc))
                           ((int)piVar6 + (uVar17 & 0xffffffcc) + (uVar21 - 1 & 0xfffffff8) + 0x3c);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar6;
          bVar22 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar22);
        *piVar6 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a97a68(piVar6,iVar15);
        }
      } while (iVar19 == 0);
    }
    FUN_00f2be94(iVar5,uVar1);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar14;
      bVar22 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar22);
    *piVar14 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a97a68(piVar14,&DAT_01c19dcc);
    }
  }
  return;
}

