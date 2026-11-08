// FUN_01bb1ba8 @ 01bb1ba8 size=2124 calls_out=13 calls_in=0
// strings: 

void FUN_01bb1ba8(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *extraout_r1;
  int *extraout_r1_00;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  undefined4 *puVar24;
  int *piVar25;
  char *pcVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  undefined8 uVar30;
  undefined1 *local_54;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_30;
  uint local_2c;
  
  iVar28 = *(int *)(param_1 + 4);
  local_2c = DAT_01d53560;
  param_5 = (int)param_4 + param_5;
  piVar12 = (int *)(param_5 - 0x10);
  uVar13 = *(uint *)(param_1 + 0xc);
  pcVar14 = (char *)(iVar28 + uVar13);
  uVar15 = *(uint *)(param_1 + 200);
  uVar16 = *(uint *)(param_1 + 0xc4);
  uVar17 = uVar16;
  if (5 < uVar16) {
    uVar17 = 6;
  }
  if (uVar17 < 4) {
    uVar17 = 4;
  }
  local_44 = (undefined1 *)*param_3;
  local_48 = (undefined1 *)param_3[1];
  piVar18 = *(int **)(param_1 + 0xb4);
  iVar9 = piVar18[1];
  iVar10 = piVar18[3];
  iVar19 = *piVar18;
  iVar20 = iVar19 - iVar9;
  iVar6 = *(int *)(param_1 + 0x5c);
  piVar18 = param_4;
  if ((iVar9 + iVar10) - iVar19 == (int)param_4 - (int)pcVar14) {
    piVar18 = (int *)((int)param_4 + 1);
  }
  uVar11 = *(uint *)(param_1 + 0x1c);
  uVar21 = 0;
  iVar7 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  piVar8 = *(int **)(param_1 + 0x24);
  if ((int *)(iVar28 + uVar11) <= piVar12) {
    uVar21 = (int)piVar12 + (1 - (int)(iVar28 + uVar11));
  }
  if (uVar21 < 9) {
    uVar21 = uVar11 + uVar21;
  }
  else {
    uVar21 = uVar11 + 8;
  }
  for (; uVar11 < uVar21; uVar11 = uVar11 + 1) {
    puVar4 = (uint *)(iVar28 + uVar11);
    if (uVar15 == 5) {
      uVar5 = puVar4[1];
      uVar27 = *(uint *)(iVar28 + uVar11);
      uVar23 = 0xbb000000;
LAB_01bb1dfc:
      uVar5 = uVar23 * uVar5 + uVar27 * -0x30e44324 +
              (int)((ulonglong)uVar23 * (ulonglong)uVar27 >> 0x20) ^ *(uint *)(param_1 + 0x54);
      uVar23 = ((uint)((ulonglong)uVar23 * (ulonglong)uVar27) ^ *(uint *)(param_1 + 0x50)) >>
               (0x38U - (int)piVar8 & 0xff) | uVar5 << ((uint)(piVar8 + -6) & 0xff) |
               uVar5 >> (0x18U - (int)piVar8 & 0xff);
    }
    else {
      if (5 < uVar15) {
        uVar27 = *puVar4;
        uVar5 = puVar4[1];
        uVar23 = 0xbf9b0000;
        goto LAB_01bb1dfc;
      }
      uVar23 = (*(uint *)(param_1 + 0x50) ^ *(int *)(iVar28 + uVar11) * -0x61c8864f) >>
               (0x18U - (int)piVar8 & 0xff);
    }
    iVar1 = (uVar23 >> 8) << (uVar17 & 0xff);
    HintPreloadData(iVar6 + iVar1 * 4);
    if (4 < uVar16) {
      HintPreloadData(iVar6 + iVar1 * 4 + 0x40);
    }
    HintPreloadData(iVar7 + iVar1);
    if (5 < uVar16) {
      HintPreloadData(iVar7 + iVar1 + 0x20);
    }
    *(uint *)(param_1 + (uVar11 & 7) * 4 + 0x2c) = uVar23;
  }
  do {
    while( true ) {
      if (piVar12 <= piVar18) {
        *param_3 = local_44;
        param_3[1] = local_48;
        if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4(param_5 - (int)param_4,piVar8,local_2c ^ DAT_01d53560,0);
        }
        return;
      }
      uVar11 = (int)piVar18 + ((1 - (int)local_44) - iVar28);
      if (uVar11 < uVar13) {
        piVar8 = (int *)(iVar9 + (iVar20 - uVar13) + uVar11);
      }
      else {
        piVar8 = (int *)(iVar28 + uVar11);
      }
      if (((uVar13 - 1) - uVar11 < 3) || (*piVar8 != *(int *)((int)piVar18 + 1))) break;
      if (uVar11 < uVar13) {
        iVar6 = iVar19;
      }
      else {
        iVar6 = param_5;
      }
      iVar6 = FUN_01b9b970((int)piVar18 + 5,piVar8 + 1,param_5,iVar6,pcVar14);
      uVar11 = iVar6 + 4;
      local_54 = (undefined1 *)0x1;
      piVar25 = (int *)((int)piVar18 + 1);
LAB_01bb1ed4:
      uVar21 = (int)piVar25 - (int)param_4;
      piVar22 = (int *)(param_5 - 0x20);
      if (piVar22 < piVar25) {
        FUN_01b9b730(param_2[3],param_4,piVar25,piVar22);
      }
      else {
        FUN_01b9b650(param_2[3],param_4);
        if (0x10 < uVar21) {
          iVar6 = param_2[3];
          FUN_01b9b650(iVar6 + 0x10,param_4 + 4);
          if (0x10 < (int)(uVar21 - 0x10)) {
            uVar23 = iVar6 + 0x20;
            do {
              FUN_01b9b650(uVar23,param_4 + 8);
              FUN_01b9b650(uVar23 + 0x10,param_4 + 0xc);
              uVar23 = uVar23 + 0x20;
              param_4 = param_4 + 8;
            } while (uVar23 < iVar6 + uVar21);
          }
        }
      }
      param_2[3] = param_2[3] + uVar21;
      puVar24 = (undefined4 *)param_2[1];
      if (0xffff < uVar21) {
        param_2[9] = 1;
        param_2[10] = (int)puVar24 - *param_2 >> 3;
      }
      piVar8 = (int *)(uVar11 - 3);
      *(short *)(puVar24 + 1) = (short)uVar21;
      *puVar24 = local_54;
      if ((int *)0xffff < piVar8) {
        param_2[9] = 2;
        param_2[10] = (int)puVar24 - *param_2 >> 3;
      }
      *(short *)((int)puVar24 + 6) = (short)piVar8;
      param_2[1] = (int)(puVar24 + 2);
      piVar18 = (int *)((int)piVar25 + uVar11);
      if (*(int *)(param_1 + 0xdc) != 0) {
        uVar11 = *(uint *)(param_1 + 0x1c);
        iVar6 = *(int *)(param_1 + 0x5c);
        piVar25 = (int *)(iVar28 + uVar11);
        bVar29 = piVar25 <= piVar12;
        iVar7 = *(int *)(param_1 + 0x28);
        if (bVar29) {
          piVar25 = (int *)((int)piVar12 - (int)piVar25);
        }
        piVar8 = *(int **)(param_1 + 0x24);
        if (bVar29) {
          uVar21 = (int)piVar25 + 1;
        }
        else {
          uVar21 = 0;
        }
        if (uVar21 < 9) {
          uVar21 = uVar11 + uVar21;
        }
        else {
          uVar21 = uVar11 + 8;
        }
        for (; uVar11 < uVar21; uVar11 = uVar11 + 1) {
          puVar4 = (uint *)(iVar28 + uVar11);
          if (uVar15 == 5) {
            uVar5 = puVar4[1];
            uVar27 = *(uint *)(iVar28 + uVar11);
            uVar23 = 0xbb000000;
LAB_01bb2280:
            uVar5 = uVar23 * uVar5 + uVar27 * -0x30e44324 +
                    (int)((ulonglong)uVar23 * (ulonglong)uVar27 >> 0x20) ^ *(uint *)(param_1 + 0x54)
            ;
            uVar23 = ((uint)((ulonglong)uVar23 * (ulonglong)uVar27) ^ *(uint *)(param_1 + 0x50)) >>
                     (0x38U - (int)piVar8 & 0xff) | uVar5 << ((uint)(piVar8 + -6) & 0xff) |
                     uVar5 >> (0x18U - (int)piVar8 & 0xff);
          }
          else {
            if (5 < uVar15) {
              uVar27 = *puVar4;
              uVar5 = puVar4[1];
              uVar23 = 0xbf9b0000;
              goto LAB_01bb2280;
            }
            uVar23 = (*(uint *)(param_1 + 0x50) ^ *(int *)(iVar28 + uVar11) * -0x61c8864f) >>
                     (0x18U - (int)piVar8 & 0xff);
          }
          iVar1 = (uVar23 >> 8) << (uVar17 & 0xff);
          HintPreloadData(iVar6 + iVar1 * 4);
          if (4 < uVar16) {
            HintPreloadData(iVar6 + iVar1 * 4 + 0x40);
          }
          HintPreloadData(iVar7 + iVar1);
          if (5 < uVar16) {
            HintPreloadData(iVar7 + iVar1 + 0x20);
          }
          *(uint *)(param_1 + (uVar11 & 7) * 4 + 0x2c) = uVar23;
        }
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      for (; puVar2 = local_44, piVar18 <= piVar12; piVar18 = (int *)((int)piVar18 + iVar6 + 4)) {
        uVar11 = ((int)piVar18 - iVar28) - (int)local_48;
        if (uVar11 < uVar13) {
          piVar8 = (int *)(iVar9 + (iVar20 - uVar13) + uVar11);
        }
        else {
          piVar8 = (int *)(iVar28 + uVar11);
        }
        if ((local_48 + ((uVar13 - 1) - ((int)piVar18 - iVar28)) < (undefined1 *)0x3) ||
           (*piVar8 != *piVar18)) break;
        iVar6 = param_5;
        if (uVar11 < uVar13) {
          iVar6 = iVar19;
        }
        iVar6 = FUN_01b9b970(piVar18 + 1,piVar8 + 1,param_5,iVar6,pcVar14);
        if (piVar22 < piVar18) {
          FUN_01b9b730(param_2[3],piVar18,piVar18,piVar22);
          piVar8 = extraout_r1_00;
        }
        else {
          FUN_01b9b650(param_2[3],piVar18);
          piVar8 = extraout_r1;
        }
        puVar24 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar24 + 1) = 0;
        *puVar24 = 1;
        if (0xffff < iVar6 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar24 - *param_2 >> 3;
        }
        *(short *)((int)puVar24 + 6) = (short)(iVar6 + 1U);
        param_2[1] = (int)(puVar24 + 2);
        local_44 = local_48;
        local_48 = puVar2;
      }
      param_4 = piVar18;
    }
    local_30 = &DAT_3b9ac9ff;
    if (uVar15 == 5) {
      if (uVar16 == 5) {
        uVar30 = FUN_01ba51a8(param_1,piVar18,param_5,&local_30);
      }
      else if (uVar16 < 6) {
        uVar30 = FUN_01ba5a60();
      }
      else {
        uVar30 = FUN_01ba4840();
      }
    }
    else if (uVar15 < 6) {
      if (uVar16 == 5) {
        uVar30 = FUN_01ba6b38(param_1,piVar18,param_5);
      }
      else if (uVar16 < 6) {
        uVar30 = FUN_01ba72ac();
      }
      else {
        uVar30 = FUN_01ba6314();
      }
    }
    else if (uVar16 == 5) {
      uVar30 = FUN_01ba36e4(param_1,piVar18,param_5);
    }
    else if (uVar16 < 6) {
      uVar30 = FUN_01ba3f90();
    }
    else {
      uVar30 = FUN_01ba2d84();
    }
    piVar8 = (int *)((ulonglong)uVar30 >> 0x20);
    uVar11 = (uint)uVar30;
    if ((uVar11 != 0) && (local_54 = local_30, 3 < uVar11)) {
      piVar25 = piVar18;
      if ((undefined1 *)0x3 < local_30) {
        uVar21 = (int)piVar18 + ((3 - (int)local_30) - iVar28);
        if (uVar21 < uVar13) {
          pcVar26 = (char *)(iVar9 + (iVar20 - uVar13) + uVar21);
          pcVar3 = (char *)(iVar9 + iVar10);
        }
        else {
          pcVar26 = (char *)(iVar28 + uVar21);
          pcVar3 = pcVar14;
        }
        for (; (param_4 < piVar25 && pcVar3 < pcVar26 &&
               (pcVar26 = pcVar26 + -1, *(char *)((int)piVar25 - 1) == *pcVar26));
            piVar25 = (int *)((int)piVar25 - 1)) {
        }
        local_48 = local_44;
        uVar11 = (int)piVar18 + (uVar11 - (int)piVar25);
        local_44 = local_30 + -3;
      }
      goto LAB_01bb1ed4;
    }
    uVar11 = ((uint)((int)piVar18 - (int)param_4) >> 8) + 1;
    piVar18 = (int *)((int)piVar18 + uVar11);
    *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar11);
  } while( true );
}

