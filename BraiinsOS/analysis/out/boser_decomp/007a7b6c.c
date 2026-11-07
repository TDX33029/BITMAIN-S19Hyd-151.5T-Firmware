// FUN_007a7b6c @ 007a7b6c size=1032 calls_out=10 calls_in=2
// strings: Out of bounds access

void FUN_007a7b6c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined *puVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
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
      FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01c095e0,&DAT_01cfd9e0);
    }
    uVar17 = local_30 & 0xff;
    uVar15 = *(uint *)(local_34 + 0x24);
    if (uVar15 == 0) {
      uVar16 = 0;
      uVar8 = 0;
LAB_007a7c48:
      if (uVar8 < uVar15) {
        puVar18 = &DAT_0056c0e8;
        do {
          if (*(uint *)(iVar4 + 0x24) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("Out of bounds access",0x14,&DAT_01d20e0c);
          }
          iVar7 = *(int *)(iVar4 + 0x20);
          if (*(uint *)(iVar4 + 0x18) <= uVar8 + iVar7) {
            iVar7 = iVar7 - *(uint *)(iVar4 + 0x18);
          }
          piVar5 = (int *)(*(int *)(iVar4 + 0x1c) + (uVar8 + iVar7) * 8);
          iVar7 = piVar5[1];
          uVar11 = *(uint *)(iVar7 + 8);
          uVar12 = uVar11 - 1;
          if (uVar11 < 5) {
            uVar11 = 4;
          }
          piVar5 = (int *)(**(code **)(iVar7 + 0x14))
                                    (*piVar5 + (uVar11 - 1 & 0xfffffff8) + (uVar12 & 0xfffffff4) +
                                     0x14);
          if (piVar5 != piVar14 + 5) {
            if (*(uint *)(iVar4 + 0x24) <= uVar16) {
              puVar10 = &DAT_01d20e1c;
LAB_007a7f74:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(puVar18,0x20,puVar10);
            }
            if (*(uint *)(iVar4 + 0x24) <= uVar8) {
              puVar18 = &DAT_0056c748;
              puVar10 = &DAT_01d20e2c;
              goto LAB_007a7f74;
            }
            uVar19 = *(uint *)(iVar4 + 0x18);
            uVar12 = *(int *)(iVar4 + 0x20) + uVar8;
            uVar20 = *(int *)(iVar4 + 0x20) + uVar16;
            uVar11 = uVar12 - uVar19;
            if (uVar12 < uVar19) {
              uVar11 = uVar12;
            }
            uVar12 = uVar20 - uVar19;
            if (uVar20 < uVar19) {
              uVar12 = uVar20;
            }
            puVar6 = (undefined4 *)(*(int *)(iVar4 + 0x1c) + uVar11 * 8);
            uVar16 = uVar16 + 1;
            puVar9 = (undefined4 *)(*(int *)(iVar4 + 0x1c) + uVar12 * 8);
            uVar21 = *puVar9;
            uVar13 = puVar6[1];
            uVar1 = puVar9[1];
            *puVar9 = *puVar6;
            puVar9[1] = uVar13;
            *puVar6 = uVar21;
            puVar6[1] = uVar1;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar15);
      }
      if ((uVar8 != uVar16) && (uVar15 = *(uint *)(iVar4 + 0x24), uVar16 < uVar15)) {
        uVar11 = *(uint *)(iVar4 + 0x18);
        uVar12 = *(uint *)(iVar4 + 0x20);
        iVar7 = *(int *)(iVar4 + 0x1c);
        *(uint *)(iVar4 + 0x24) = uVar16;
        uVar8 = uVar12 - uVar11;
        if (uVar12 < uVar11) {
          uVar8 = uVar12;
        }
        uVar11 = uVar11 - uVar8;
        iVar2 = uVar15 - uVar11;
        if (uVar15 < uVar11) {
          iVar2 = 0;
        }
        if (uVar11 < uVar15) {
          uVar15 = uVar11;
        }
        if (uVar11 < uVar16) {
          iVar2 = iVar2 - (uVar16 - uVar15);
          iVar7 = iVar7 + (uVar16 - uVar15) * 8;
        }
        else {
          FUN_015eebb8(iVar7 + uVar8 * 8 + uVar16 * 8,uVar15 - uVar16);
        }
        FUN_015eebb8(iVar7,iVar2);
      }
    }
    else {
      uVar16 = 0;
      do {
        iVar7 = *(int *)(iVar4 + 0x20);
        if (*(uint *)(iVar4 + 0x18) <= uVar16 + iVar7) {
          iVar7 = iVar7 - *(uint *)(iVar4 + 0x18);
        }
        piVar5 = (int *)(*(int *)(iVar4 + 0x1c) + (uVar16 + iVar7) * 8);
        iVar7 = piVar5[1];
        uVar8 = *(uint *)(iVar7 + 8);
        uVar11 = uVar8 - 1;
        if (uVar8 < 5) {
          uVar8 = 4;
        }
        piVar5 = (int *)(**(code **)(iVar7 + 0x14))
                                  (*piVar5 + (uVar8 - 1 & 0xfffffff8) + (uVar11 & 0xfffffff4) + 0x14
                                  );
        if (piVar5 == piVar14 + 5) {
          uVar8 = uVar16 + 1;
          goto LAB_007a7c48;
        }
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
    }
    uVar23 = FUN_007a714c(piVar14 + 5);
    (**(code **)((int)((ulonglong)uVar23 >> 0x20) + 0xc))(&local_38,(int)uVar23);
    if ((local_38 != -0x6fea4326 || local_30 != 0x5b966778) ||
        (local_34 != -0x3fda496b || iStack_2c != 0x133bc219)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c09628);
    }
    DataMemoryBarrier(0xb);
    bVar22 = *(char *)((int)uVar23 + 0xc) != '\0';
    iVar7 = 0;
    if (bVar22) {
      iVar7 = *(int *)(iVar4 + 0x14);
    }
    if (bVar22 && iVar7 != 0) {
      do {
        uVar23 = FUN_015ef9a8(iVar4 + 0x18);
        iVar7 = (int)((ulonglong)uVar23 >> 0x20);
        piVar5 = (int *)uVar23;
        if (piVar5 == (int *)0x0) break;
        uVar15 = *(uint *)(iVar7 + 8);
        uVar16 = uVar15 - 1;
        if (uVar15 < 5) {
          uVar15 = 4;
        }
        iVar2 = (**(code **)(iVar7 + 0xc))
                          ((int)piVar5 + (uVar16 & 0xfffffff4) + (uVar15 - 1 & 0xfffffff8) + 0x14);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar22 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar22);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015fa720(piVar5,iVar7);
        }
      } while (iVar2 == 0);
    }
    FUN_00a97e8c(iVar4,uVar17);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar14;
      bVar22 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar22);
    *piVar14 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015fa720(piVar14,&DAT_01c09600);
    }
  }
  return;
}

