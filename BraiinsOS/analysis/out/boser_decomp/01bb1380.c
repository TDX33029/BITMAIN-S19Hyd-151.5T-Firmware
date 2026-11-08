// FUN_01bb1380 @ 01bb1380 size=2060 calls_out=14 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01bb1380(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  int *piVar5;
  char *extraout_r1;
  char *extraout_r1_00;
  undefined1 *extraout_r2;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  char *pcVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  undefined4 *puVar21;
  int *piVar22;
  char *pcVar23;
  int *piVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  undefined8 uVar29;
  undefined1 *local_54;
  undefined1 *local_4c;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  pcVar7 = (char *)((int)param_4 + param_5);
  piVar8 = (int *)(pcVar7 + -0x10);
  iVar9 = *(int *)(param_1 + 4);
  piVar10 = (int *)(iVar9 + *(int *)(param_1 + 0xc));
  uVar11 = *(uint *)(param_1 + 200);
  uVar12 = *(uint *)(param_1 + 0xc4);
  uVar13 = uVar12;
  if (5 < uVar12) {
    uVar13 = 6;
  }
  if (uVar13 < 4) {
    uVar13 = 4;
  }
  puVar14 = (undefined1 *)*param_3;
  puVar15 = (undefined1 *)param_3[1];
  piVar24 = param_4;
  if (param_4 == piVar10) {
    piVar24 = (int *)((int)param_4 + 1);
  }
  iVar2 = FUN_01b9b818(param_1,(int)piVar24 - iVar9,*(undefined4 *)(param_1 + 0xb8));
  puVar25 = (undefined1 *)(((int)piVar24 - iVar9) - iVar2);
  iVar2 = *(int *)(param_1 + 0x28);
  if (puVar25 < puVar15) {
    local_3c = (undefined1 *)0x0;
    local_54 = puVar15;
  }
  else {
    local_54 = (undefined1 *)0x0;
    local_3c = puVar15;
  }
  pcVar4 = *(char **)(param_1 + 0x24);
  if (puVar25 < puVar14) {
    local_38 = (undefined1 *)0x0;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  puVar15 = extraout_r2;
  local_4c = puVar14;
  if (puVar14 <= puVar25) {
    local_4c = (undefined1 *)0x0;
    puVar15 = puVar14;
  }
  iVar16 = *(int *)(param_1 + 0x5c);
  if (puVar14 <= puVar25) {
    local_38 = puVar15;
  }
  uVar6 = *(uint *)(param_1 + 0x1c);
  if (piVar8 < (int *)(uVar6 + iVar9)) {
    pcVar17 = (char *)0x0;
  }
  else {
    pcVar17 = (char *)((int)piVar8 + (1 - (int)(uVar6 + iVar9)));
  }
  if (pcVar17 < (char *)0x9) {
    uVar18 = uVar6 + (int)pcVar17;
  }
  else {
    uVar18 = uVar6 + 8;
  }
  for (; uVar6 < uVar18; uVar6 = uVar6 + 1) {
    puVar3 = (uint *)(uVar6 + iVar9);
    if (uVar11 == 5) {
      uVar26 = puVar3[1];
      uVar27 = 0xbb000000;
      uVar20 = *(uint *)(uVar6 + iVar9);
LAB_01bb1638:
      uVar26 = uVar27 * uVar26 + uVar20 * -0x30e44324 +
               (int)((ulonglong)uVar27 * (ulonglong)uVar20 >> 0x20) ^ *(uint *)(param_1 + 0x54);
      uVar27 = ((uint)((ulonglong)uVar27 * (ulonglong)uVar20) ^ *(uint *)(param_1 + 0x50)) >>
               (0x38U - (int)pcVar4 & 0xff) | uVar26 << ((uint)(pcVar4 + -0x18) & 0xff) |
               uVar26 >> (0x18U - (int)pcVar4 & 0xff);
    }
    else {
      if (5 < uVar11) {
        uVar20 = *puVar3;
        uVar26 = puVar3[1];
        uVar27 = 0xbf9b0000;
        goto LAB_01bb1638;
      }
      uVar27 = (*(uint *)(param_1 + 0x50) ^ *(int *)(uVar6 + iVar9) * -0x61c8864f) >>
               (0x18U - (int)pcVar4 & 0xff);
    }
    iVar1 = (uVar27 >> 8) << (uVar13 & 0xff);
    HintPreloadData(iVar16 + iVar1 * 4);
    if (4 < uVar12) {
      HintPreloadData(iVar16 + iVar1 * 4 + 0x40);
    }
    HintPreloadData(iVar2 + iVar1);
    if (5 < uVar12) {
      HintPreloadData(iVar2 + iVar1 + 0x20);
    }
    *(uint *)(param_1 + (uVar6 & 7) * 4 + 0x2c) = uVar27;
  }
  piVar19 = (int *)(pcVar7 + -0x20);
  do {
    while( true ) {
      if (piVar8 <= piVar24) {
        if (local_4c != (undefined1 *)0x0 && local_38 != (undefined1 *)0x0) {
          local_54 = local_4c;
        }
        else if (local_38 == (undefined1 *)0x0) {
          local_38 = local_4c;
        }
        *param_3 = local_38;
        if (local_3c == (undefined1 *)0x0) {
          local_3c = local_54;
        }
        param_3[1] = local_3c;
        if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4((int)pcVar7 - (int)param_4,pcVar4,local_2c ^ DAT_01d53560,0);
        }
        return;
      }
      if (*(int *)((int)piVar24 + (1 - (int)local_38)) != *(int *)((int)piVar24 + 1) ||
          local_38 == (undefined1 *)0x0) break;
      iVar2 = FUN_01b9b884((char *)((int)piVar24 + 5),(char *)((int)piVar24 + (5 - (int)local_38)),
                           pcVar7);
      pcVar17 = (char *)(iVar2 + 4);
      piVar22 = (int *)((int)piVar24 + 1);
      puVar14 = (undefined1 *)0x1;
LAB_01bb16c8:
      uVar6 = (int)piVar22 - (int)param_4;
      if (piVar19 < piVar22) {
        FUN_01b9b730(param_2[3],param_4,piVar22,piVar19);
      }
      else {
        FUN_01b9b650(param_2[3],param_4);
        if (0x10 < uVar6) {
          iVar2 = param_2[3];
          FUN_01b9b650(iVar2 + 0x10,param_4 + 4);
          if (0x10 < (int)(uVar6 - 0x10)) {
            uVar18 = iVar2 + 0x20;
            do {
              FUN_01b9b650(uVar18,param_4 + 8);
              FUN_01b9b650(uVar18 + 0x10,param_4 + 0xc);
              uVar18 = uVar18 + 0x20;
              param_4 = param_4 + 8;
            } while (uVar18 < iVar2 + uVar6);
          }
        }
      }
      param_2[3] = param_2[3] + uVar6;
      puVar21 = (undefined4 *)param_2[1];
      if (0xffff < uVar6) {
        param_2[9] = 1;
        param_2[10] = (int)puVar21 - *param_2 >> 3;
      }
      pcVar4 = pcVar17 + -3;
      *(short *)(puVar21 + 1) = (short)uVar6;
      *puVar21 = puVar14;
      if ((char *)0xffff < pcVar4) {
        param_2[9] = 2;
        param_2[10] = (int)puVar21 - *param_2 >> 3;
      }
      *(short *)((int)puVar21 + 6) = (short)pcVar4;
      param_2[1] = (int)(puVar21 + 2);
      piVar24 = (int *)((int)piVar22 + (int)pcVar17);
      if (*(int *)(param_1 + 0xdc) != 0) {
        pcVar17 = *(char **)(param_1 + 0x1c);
        piVar22 = (int *)(pcVar17 + iVar9);
        iVar16 = *(int *)(param_1 + 0x5c);
        bVar28 = piVar22 <= piVar8;
        iVar2 = *(int *)(param_1 + 0x28);
        if (bVar28) {
          piVar22 = (int *)((int)piVar8 - (int)piVar22);
        }
        pcVar4 = *(char **)(param_1 + 0x24);
        if (bVar28) {
          pcVar23 = (char *)((int)piVar22 + 1);
        }
        else {
          pcVar23 = (char *)0x0;
        }
        if (pcVar23 < &DAT_00000009) {
          pcVar23 = pcVar17 + (int)pcVar23;
        }
        else {
          pcVar23 = pcVar17 + 8;
        }
        for (; pcVar17 < pcVar23; pcVar17 = pcVar17 + 1) {
          puVar3 = (uint *)(pcVar17 + iVar9);
          if (uVar11 == 5) {
            uVar27 = puVar3[1];
            uVar6 = 0xbb000000;
            uVar18 = *(uint *)(pcVar17 + iVar9);
LAB_01bb1a88:
            uVar27 = uVar6 * uVar27 + uVar18 * -0x30e44324 +
                     (int)((ulonglong)uVar6 * (ulonglong)uVar18 >> 0x20) ^ *(uint *)(param_1 + 0x54)
            ;
            uVar6 = ((uint)((ulonglong)uVar6 * (ulonglong)uVar18) ^ *(uint *)(param_1 + 0x50)) >>
                    (0x38U - (int)pcVar4 & 0xff) | uVar27 << ((uint)(pcVar4 + -0x18) & 0xff) |
                    uVar27 >> (0x18U - (int)pcVar4 & 0xff);
          }
          else {
            if (5 < uVar11) {
              uVar18 = *puVar3;
              uVar27 = puVar3[1];
              uVar6 = 0xbf9b0000;
              goto LAB_01bb1a88;
            }
            uVar6 = (*(uint *)(param_1 + 0x50) ^ *(int *)(pcVar17 + iVar9) * -0x61c8864f) >>
                    (0x18U - (int)pcVar4 & 0xff);
          }
          iVar1 = (uVar6 >> 8) << (uVar13 & 0xff);
          HintPreloadData(iVar16 + iVar1 * 4);
          if (4 < uVar12) {
            HintPreloadData(iVar16 + iVar1 * 4 + 0x40);
          }
          HintPreloadData(iVar2 + iVar1);
          if (5 < uVar12) {
            HintPreloadData(iVar2 + iVar1 + 0x20);
          }
          *(uint *)(param_1 + ((uint)pcVar17 & 7) * 4 + 0x2c) = uVar6;
        }
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      for (; (puVar14 = local_38, local_3c != (undefined1 *)0x0 && piVar24 <= piVar8 &&
             (*piVar24 == *(int *)((int)piVar24 - (int)local_3c)));
          piVar24 = (int *)((int)piVar24 + iVar2 + 4)) {
        iVar2 = FUN_01b9b884(piVar24 + 1,(char *)((int)piVar24 + (4 - (int)local_3c)),pcVar7);
        if (piVar19 < piVar24) {
          FUN_01b9b730(param_2[3],piVar24,piVar24,piVar19);
          pcVar4 = extraout_r1_00;
        }
        else {
          FUN_01b9b650(param_2[3],piVar24);
          pcVar4 = extraout_r1;
        }
        puVar21 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar21 + 1) = 0;
        *puVar21 = 1;
        if (0xffff < iVar2 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar21 - *param_2 >> 3;
        }
        *(short *)((int)puVar21 + 6) = (short)(iVar2 + 1U);
        param_2[1] = (int)(puVar21 + 2);
        local_38 = local_3c;
        local_3c = puVar14;
      }
      param_4 = piVar24;
    }
    local_30 = &DAT_3b9ac9ff;
    if (uVar11 == 5) {
      if (uVar12 == 5) {
        uVar29 = FUN_01bad09c(param_1,piVar24,pcVar7,&local_30);
      }
      else if (uVar12 < 6) {
        uVar29 = FUN_01bad708();
      }
      else {
        uVar29 = FUN_01bac9c8();
      }
    }
    else if (uVar11 < 6) {
      if (uVar12 == 5) {
        uVar29 = FUN_01bae2fc(param_1,piVar24,pcVar7,&local_30);
      }
      else if (uVar12 < 6) {
        uVar29 = FUN_01bae82c();
      }
      else {
        uVar29 = FUN_01badd60(param_1,piVar24,pcVar7);
      }
    }
    else if (uVar12 == 5) {
      uVar29 = FUN_01babd0c(param_1,piVar24,pcVar7,&local_30);
    }
    else if (uVar12 < 6) {
      uVar29 = FUN_01bac370();
    }
    else {
      uVar29 = FUN_01bab640(param_1,piVar24,pcVar7,&local_30);
    }
    pcVar4 = (char *)((ulonglong)uVar29 >> 0x20);
    pcVar17 = (char *)uVar29;
    if ((pcVar17 != (char *)0x0) && ((char *)0x3 < pcVar17)) {
      piVar22 = piVar24;
      puVar14 = local_30;
      if ((undefined1 *)0x3 < local_30) {
        piVar5 = (int *)((int)piVar24 + (3 - (int)local_30));
        for (; (param_4 < piVar22 && piVar10 < piVar5 &&
               (piVar5 = (int *)((int)piVar5 + -1), *(char *)((int)piVar22 + -1) == *(char *)piVar5)
               ); piVar22 = (int *)((int)piVar22 + -1)) {
        }
        pcVar17 = (char *)((int)piVar24 + ((int)pcVar17 - (int)piVar22));
        local_3c = local_38;
        local_38 = local_30 + -3;
      }
      goto LAB_01bb16c8;
    }
    uVar6 = ((uint)((int)piVar24 - (int)param_4) >> 8) + 1;
    piVar24 = (int *)((int)piVar24 + uVar6);
    *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar6);
  } while( true );
}

