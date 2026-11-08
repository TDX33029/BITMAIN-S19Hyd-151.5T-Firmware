// FUN_0129066c @ 0129066c size=1460 calls_out=17 calls_in=2
// strings: TZFindLocalTimeTypeLocalTimeTypeInvalidSliceInvalidTzFileInvalidTzStringProjectDateTime | TZFindLocalTimeTypeLocalTimeTypeInvalidSliceInvalidTzFileInvalidTzStringProjectDateTime

void FUN_0129066c(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *extraout_r1;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint unaff_r7;
  int *unaff_r8;
  int *piVar20;
  uint uVar21;
  uint *extraout_r12;
  bool bVar22;
  undefined8 uVar23;
  int *local_108;
  uint local_f8;
  int local_f4;
  undefined1 *local_f0;
  int iStack_ec;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int iStack_94;
  uint uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  uint local_6c;
  
  uVar23 = thunk_FUN_01bee35a(param_1,0x90);
  piVar20 = (int *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
  if (((char)piVar20[0x20] != '\x01') &&
     (piVar20 = (int *)FUN_0128fed8(piVar20,0), piVar20 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_019b0950(&DAT_01d301c0);
  }
  puVar17 = (uint *)(piVar20 + 2);
  if (*piVar20 != 0) {
    FUN_01306fc8(&DAT_01c26420);
    local_70 = extraout_r1;
    goto LAB_01290ba8;
  }
  *piVar20 = -1;
  if ((undefined1 *)piVar20[4] == &DAT_3b9aca00) {
    FUN_019abc84(&local_78,
                 "TZFindLocalTimeTypeLocalTimeTypeInvalidSliceInvalidTzFileInvalidTzStringProjectDateTime"
                 ,2);
    if (local_78 == (int *)&DAT_00000001) {
      if (local_74 != (int *)&DAT_80000000) {
        FUN_0134bd64(local_74,local_70);
      }
      piVar6 = (int *)0x0;
      piVar15 = (int *)&DAT_80000000;
    }
    else {
      local_108 = local_70;
      piVar6 = (int *)0x0;
      unaff_r7 = local_6c;
      piVar15 = local_74;
      if (local_74 != (int *)&DAT_80000000) {
        piVar6 = local_70;
      }
    }
    FUN_019ac130(&local_78,0);
    piVar3 = local_70;
    unaff_r8 = local_74;
    piVar2 = local_78;
    FUN_01290cd4(&local_88,piVar6,unaff_r7);
    FUN_01291290(&local_78,piVar6,unaff_r7);
    FUN_01bed4e2(&local_f8,&local_78,0x54);
    puVar4 = (undefined4 *)((uint)&local_a0 | 4);
    *puVar4 = local_88;
    puVar4[1] = uStack_84;
    puVar4[2] = uStack_80;
    puVar4[3] = uStack_7c;
    if (piVar15 != (int *)&DAT_80000000) {
      FUN_0134bd64(piVar15,local_108);
    }
    FUN_0128ffd4(puVar17);
    piVar20[4] = (int)piVar3;
    *puVar17 = (uint)piVar2;
    piVar20[3] = (int)unaff_r8;
    piVar20[5] = (int)local_a0;
    piVar20[6] = (int)local_9c;
    piVar20[7] = (int)local_98;
    piVar20[8] = iStack_94;
    piVar20[9] = uStack_90;
    FUN_01bed4e2(piVar20 + 10,&local_f8,0x54);
    unaff_r7 = uStack_90;
  }
  FUN_019ac130(&local_78,0);
  piVar3 = local_70;
  piVar2 = local_74;
  piVar15 = local_78;
  local_f8 = *puVar17;
  local_f4 = piVar20[3];
  local_9c = local_74;
  local_f0 = (undefined1 *)piVar20[4];
  local_a0 = local_78;
  local_98 = local_70;
  FUN_019ac248(&local_78,&local_a0,&local_f8);
  piVar5 = (int *)((uint)local_70 | local_6c);
  piVar6 = piVar5;
  if (piVar5 == (int *)0x0) {
    piVar6 = local_78;
  }
  if (piVar5 != (int *)0x0 || piVar6 != (int *)0x0) {
    FUN_019abc84(&local_78,
                 "TZFindLocalTimeTypeLocalTimeTypeInvalidSliceInvalidTzFileInvalidTzStringProjectDateTime"
                 ,2);
    if (local_78 == (int *)0x0) {
      piVar6 = local_70;
      piVar5 = local_74;
      unaff_r7 = local_6c;
    }
    else {
      piVar6 = local_78;
      if (local_74 != (int *)&DAT_80000000) {
        piVar6 = (int *)FUN_0134bd64(local_74,local_70);
      }
      piVar5 = (int *)&DAT_80000000;
    }
    unaff_r8 = (int *)0x0;
    if (piVar5 != (int *)&DAT_80000000) {
      unaff_r8 = piVar6;
    }
    FUN_01290cd4(&local_f8,unaff_r8,unaff_r7);
    puVar16 = (uint *)(piVar20 + 6);
    if ((undefined1 *)piVar20[8] == &DAT_3b9aca00) {
      if ((local_f0 != &DAT_3b9aca00) || (*puVar16 != local_f8 || piVar20[7] != local_f4))
      goto LAB_01290900;
    }
    else {
      if (local_f0 != &DAT_3b9aca00) {
        bVar22 = *puVar16 == local_f8 && piVar20[7] == local_f4;
        if (*puVar16 == local_f8 && piVar20[7] == local_f4) {
          bVar22 = (undefined1 *)piVar20[8] == local_f0;
        }
        if (bVar22) goto LAB_0129092c;
      }
LAB_01290900:
      FUN_01291290(&local_78,unaff_r8,unaff_r7);
      FUN_01288f48(piVar20 + 10);
      FUN_01bed4e2(piVar20 + 10,&local_78,0x54);
    }
LAB_0129092c:
    piVar20[4] = (int)piVar3;
    *puVar17 = (uint)piVar15;
    piVar20[3] = (int)piVar2;
    *puVar16 = local_f8;
    piVar20[7] = local_f4;
    piVar20[8] = (int)local_f0;
    piVar20[9] = iStack_ec;
    if (piVar5 != (int *)&DAT_80000000) {
      FUN_0134bd64(piVar5,piVar6);
    }
  }
  piVar6 = (int *)0x1290964;
  iVar7 = FUN_012920c0(*param_2);
  lVar1 = (longlong)iVar7 * 0x15180 + (ulonglong)(uint)param_2[1];
  uVar10 = (uint)lVar1;
  uVar9 = piVar20[0xc];
  piVar15 = (int *)piVar20[0xe];
  uVar18 = piVar20[0xf];
  uVar11 = uVar10 + 0x886cb780;
  uVar10 = (int)((ulonglong)lVar1 >> 0x20) - ((uVar10 < 0x77934880) + 0xe);
  bVar22 = uVar9 == 0;
  puVar17 = extraout_r12;
  if (!bVar22) {
    unaff_r8 = (int *)piVar20[0xb];
    piVar6 = unaff_r8 + uVar9 * 4;
    puVar17 = (uint *)(piVar6 + -4);
    bVar22 = puVar17 == (uint *)0x0;
  }
  if (bVar22) {
    if (*(char *)((int)piVar20 + 0x79) == '\x03') {
      local_78 = piVar15;
      if (uVar18 == 0) {
        uVar10 = 0;
        puVar12 = &DAT_01c25dd8;
        uVar18 = 0;
        goto LAB_01290c20;
      }
      goto LAB_01290b34;
    }
  }
  else {
    iVar7 = piVar20[0x12];
    uVar8 = uVar11;
    uVar19 = uVar10;
    if (iVar7 != 0) {
      puVar16 = (uint *)piVar20[0x11];
      do {
        uVar21 = puVar16[1];
        if ((int)(uVar19 - (uVar21 + (uVar8 < *puVar16))) < 0 !=
            (SBORROW4(uVar19,uVar21) != SBORROW4(uVar19 - uVar21,(uint)(uVar8 < *puVar16)))) break;
        uVar19 = puVar16[2];
        puVar16 = puVar16 + 4;
        uVar8 = uVar11 + uVar19;
        uVar19 = uVar10 + ((int)uVar19 >> 0x1f) + (uint)CARRY4(uVar11,uVar19);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    uVar10 = puVar17[1];
    if ((int)(uVar19 - (uVar10 + (uVar8 < *puVar17))) < 0 !=
        (SBORROW4(uVar19,uVar10) != SBORROW4(uVar19 - uVar10,(uint)(uVar8 < *puVar17)))) {
      iVar7 = 0;
      if (uVar9 != 1) {
        uVar10 = uVar9;
        iVar13 = 0;
        do {
          iVar7 = iVar13 + (uVar10 >> 1);
          uVar10 = uVar10 - (uVar10 >> 1);
          uVar11 = (unaff_r8 + iVar7 * 4)[1];
          bVar22 = uVar8 < (uint)unaff_r8[iVar7 * 4];
          if ((int)(uVar19 - (uVar11 + bVar22)) < 0 !=
              (SBORROW4(uVar19,uVar11) != SBORROW4(uVar19 - uVar11,(uint)bVar22))) {
            iVar7 = iVar13;
          }
          iVar13 = iVar7;
        } while (1 < uVar10);
      }
      uVar11 = unaff_r8[iVar7 * 4];
      uVar10 = (unaff_r8 + iVar7 * 4)[1];
      iVar13 = 1;
      if ((uVar11 != uVar8 || uVar10 != uVar19) &&
         (iVar13 = 0,
         (int)(uVar10 - (uVar19 + (uVar11 < uVar8))) < 0 !=
         (SBORROW4(uVar10,uVar19) != SBORROW4(uVar10 - uVar19,(uint)(uVar11 < uVar8))))) {
        iVar7 = iVar7 + 1;
      }
      if (iVar13 + iVar7 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (iVar13 + iVar7) - 1;
        if (uVar9 <= uVar10) {
          puVar12 = &DAT_01c25de8;
          uVar18 = uVar9;
          goto LAB_01290c20;
        }
        uVar10 = unaff_r8[uVar10 * 4 + 2];
      }
      if (uVar10 < uVar18) {
        local_78 = piVar15 + uVar10 * 4;
        goto LAB_01290b34;
      }
      puVar12 = &DAT_01c25df8;
LAB_01290c20:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar10,uVar18,puVar12);
    }
    if (*(char *)((int)piVar20 + 0x79) == '\x03') {
      uVar10 = piVar6[-2];
      if (uVar10 < uVar18) {
        local_78 = piVar15 + uVar10 * 4;
        goto LAB_01290b34;
      }
      puVar12 = &DAT_01c25e08;
      goto LAB_01290c20;
    }
  }
  FUN_0128c688(&local_78,piVar20 + 0x13);
  puVar17 = (uint *)&DAT_3b9aca00;
  if (local_70 != (int *)0x3b9aca10) {
LAB_01290ba8:
    if (local_70 == (int *)((int)puVar17 + 7)) {
      local_70 = (int *)((int)puVar17 + 1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0056b2e8,0x20,&local_78,&DAT_01c26448,&DAT_01c26460);
  }
LAB_01290b34:
  uVar14 = 2;
  iVar7 = *piVar20;
  if (*local_78 + 0x1517fU < 0x2a2ff) {
    uVar14 = 0;
  }
  param_1[1] = *local_78;
  param_1[2] = 0;
  *param_1 = uVar14;
  *piVar20 = iVar7 + 1;
  return;
}

