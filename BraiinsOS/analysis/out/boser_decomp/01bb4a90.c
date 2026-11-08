// FUN_01bb4a90 @ 01bb4a90 size=2736 calls_out=13 calls_in=0
// strings: 

void FUN_01bb4a90(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *extraout_r1;
  int *extraout_r1_00;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  char *pcVar23;
  undefined4 *puVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  undefined8 uVar28;
  undefined1 *local_54;
  undefined1 *local_4c;
  undefined1 *local_48;
  int *local_44;
  int *local_38;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  param_5 = (int)param_4 + param_5;
  piVar12 = (int *)(param_5 - 0x10);
  iVar13 = *(int *)(param_1 + 4);
  uVar14 = *(uint *)(param_1 + 0xc);
  pcVar15 = (char *)(iVar13 + uVar14);
  uVar16 = *(uint *)(param_1 + 200);
  uVar17 = *(uint *)(param_1 + 0xc4);
  uVar18 = uVar17;
  if (5 < uVar17) {
    uVar18 = 6;
  }
  if (uVar18 < 4) {
    uVar18 = 4;
  }
  local_4c = (undefined1 *)*param_3;
  local_54 = (undefined1 *)param_3[1];
  piVar19 = *(int **)(param_1 + 0xb4);
  iVar9 = piVar19[1];
  iVar10 = piVar19[3];
  iVar20 = *piVar19;
  iVar21 = iVar20 - iVar9;
  iVar7 = *(int *)(param_1 + 0x5c);
  piVar19 = param_4;
  if ((iVar9 + iVar10) - iVar20 == (int)param_4 - (int)pcVar15) {
    piVar19 = (int *)((int)param_4 + 1);
  }
  iVar27 = *(int *)(param_1 + 0x28);
  uVar11 = *(uint *)(param_1 + 0x1c);
  uVar22 = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  piVar8 = *(int **)(param_1 + 0x24);
  if (iVar13 + uVar11 <= param_5 - 0x10U) {
    uVar22 = ((param_5 - 0x10U) - (iVar13 + uVar11)) + 1;
  }
  if (uVar22 < 9) {
    uVar22 = uVar11 + uVar22;
  }
  else {
    uVar22 = uVar11 + 8;
  }
  do {
    if (uVar22 <= uVar11) {
      local_38 = param_4;
      do {
        while( true ) {
          if (piVar12 <= piVar19) {
            *param_3 = local_4c;
            param_3[1] = local_54;
            if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01be31f4(param_5 - (int)local_38,piVar8,local_2c ^ DAT_01d53560,0);
            }
            return;
          }
          uVar11 = (int)piVar19 + ((1 - (int)local_4c) - iVar13);
          if (uVar11 < uVar14) {
            piVar8 = (int *)(iVar9 + (iVar21 - uVar14) + uVar11);
          }
          else {
            piVar8 = (int *)(iVar13 + uVar11);
          }
          iVar7 = uVar14 - 1;
          if ((iVar7 - uVar11 < 3) || (*piVar8 != *(int *)((int)piVar19 + 1))) {
            uVar11 = 0;
          }
          else {
            if (uVar11 < uVar14) {
              iVar27 = iVar20;
            }
            else {
              iVar27 = param_5;
            }
            iVar27 = FUN_01b9b970((int)piVar19 + 5,piVar8 + 1,param_5,iVar27,pcVar15);
            uVar11 = iVar27 + 4;
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar16 == 5) {
            if (uVar17 == 5) {
              uVar28 = FUN_01ba51a8(param_1,piVar19,param_5,&local_30);
            }
            else if (uVar17 < 6) {
              uVar28 = FUN_01ba5a60();
            }
            else {
              uVar28 = FUN_01ba4840();
            }
          }
          else if (uVar16 < 6) {
            if (uVar17 == 5) {
              uVar28 = FUN_01ba6b38(param_1,piVar19,param_5,&local_30);
            }
            else if (uVar17 < 6) {
              uVar28 = FUN_01ba72ac();
            }
            else {
              uVar28 = FUN_01ba6314();
            }
          }
          else if (uVar17 == 5) {
            uVar28 = FUN_01ba36e4(param_1,piVar19,param_5,&local_30);
          }
          else if (uVar17 < 6) {
            uVar28 = FUN_01ba3f90();
          }
          else {
            uVar28 = FUN_01ba2d84();
          }
          piVar8 = (int *)((ulonglong)uVar28 >> 0x20);
          if (uVar11 < (uint)uVar28) {
            local_48 = local_30;
            uVar11 = (uint)uVar28;
            local_44 = piVar19;
          }
          else {
            local_44 = (int *)((int)piVar19 + 1);
            local_48 = (undefined1 *)0x1;
          }
          if (3 < uVar11) break;
          uVar11 = ((uint)((int)piVar19 - (int)local_38) >> 8) + 1;
          piVar19 = (int *)((int)piVar19 + uVar11);
          *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar11);
        }
        for (iVar27 = (int)piVar19 + 5; uVar22 = uVar11, param_5 + -0xb != iVar27;
            iVar27 = iVar27 + 1) {
          piVar19 = (int *)(iVar27 - 4);
          uVar26 = ((int)piVar19 - iVar13) - (int)local_4c;
          if (uVar26 < uVar14) {
            piVar8 = (int *)(iVar9 + (iVar21 - uVar14) + uVar26);
          }
          else {
            piVar8 = (int *)(iVar13 + uVar26);
          }
          if (((undefined1 *)0x2 < local_4c + (iVar7 - ((int)piVar19 - iVar13))) &&
             (*piVar8 == *piVar19)) {
            iVar4 = iVar20;
            if (uVar14 <= uVar26) {
              iVar4 = param_5;
            }
            uVar26 = FUN_01b9b970(iVar27,piVar8 + 1,param_5,iVar4,pcVar15);
            if (uVar26 < 0xfffffffc &&
                (int)((uVar11 - 10) * 3 + LZCOUNT(local_48)) < (int)((uVar26 + 4) * 3)) {
              local_48 = (undefined1 *)0x1;
              uVar22 = uVar26 + 4;
              local_44 = piVar19;
            }
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar16 == 5) {
            if (uVar17 == 5) {
              uVar11 = FUN_01ba51a8(param_1,piVar19,param_5,&local_30);
            }
            else if (uVar17 < 6) {
              uVar11 = FUN_01ba5a60();
            }
            else {
              uVar11 = FUN_01ba4840();
            }
          }
          else if (uVar16 < 6) {
            if (uVar17 == 5) {
              uVar11 = FUN_01ba6b38(param_1,piVar19,param_5,&local_30);
            }
            else if (uVar17 < 6) {
              uVar11 = FUN_01ba72ac();
            }
            else {
              uVar11 = FUN_01ba6314();
            }
          }
          else if (uVar17 == 5) {
            uVar11 = FUN_01ba36e4(param_1,piVar19,param_5,&local_30);
          }
          else if (uVar17 < 6) {
            uVar11 = FUN_01ba3f90();
          }
          else {
            uVar11 = FUN_01ba2d84();
          }
          if (uVar11 < 4 ||
              (int)(LZCOUNT(local_30) + uVar11 * 4 + -0x1f) <=
              (int)(LZCOUNT(local_48) + uVar22 * 4 + -0x1b)) break;
          local_48 = local_30;
          local_44 = piVar19;
        }
        if ((undefined1 *)0x3 < local_48) {
          uVar11 = (int)local_44 + ((3 - (int)local_48) - iVar13);
          if (uVar11 < uVar14) {
            pcVar23 = (char *)(iVar9 + (iVar21 - uVar14) + uVar11);
            pcVar3 = (char *)(iVar9 + iVar10);
          }
          else {
            pcVar23 = (char *)(iVar13 + uVar11);
            pcVar3 = pcVar15;
          }
          for (piVar19 = local_44;
              (local_38 < piVar19 && pcVar3 < pcVar23 &&
              (pcVar23 = pcVar23 + -1, *(char *)((int)piVar19 - 1) == *pcVar23));
              piVar19 = (int *)((int)piVar19 - 1)) {
          }
          uVar22 = (int)local_44 + (uVar22 - (int)piVar19);
          local_54 = local_4c;
          local_4c = local_48 + -3;
          local_44 = piVar19;
        }
        uVar11 = (int)local_44 - (int)local_38;
        if ((int *)(param_5 - 0x20U) < local_44) {
          FUN_01b9b730(param_2[3],local_38,local_44,param_5 + -0x20);
        }
        else {
          FUN_01b9b650(param_2[3],local_38);
          if (0x10 < uVar11) {
            iVar27 = param_2[3];
            FUN_01b9b650(iVar27 + 0x10,local_38 + 4);
            if (0x10 < (int)(uVar11 - 0x10)) {
              uVar26 = iVar27 + 0x20;
              do {
                FUN_01b9b650(uVar26,local_38 + 8);
                iVar4 = uVar26 + 0x10;
                uVar26 = uVar26 + 0x20;
                FUN_01b9b650(iVar4,local_38 + 0xc);
                local_38 = local_38 + 8;
              } while (uVar26 < iVar27 + uVar11);
            }
          }
        }
        param_2[3] = param_2[3] + uVar11;
        puVar24 = (undefined4 *)param_2[1];
        if (0xffff < uVar11) {
          param_2[9] = 1;
          param_2[10] = (int)puVar24 - *param_2 >> 3;
        }
        piVar8 = (int *)(uVar22 - 3);
        *(short *)(puVar24 + 1) = (short)uVar11;
        *puVar24 = local_48;
        if ((int *)0xffff < piVar8) {
          param_2[9] = 2;
          param_2[10] = (int)puVar24 - *param_2 >> 3;
        }
        *(short *)((int)puVar24 + 6) = (short)piVar8;
        param_2[1] = (int)(puVar24 + 2);
        piVar19 = (int *)((int)local_44 + uVar22);
        if (*(int *)(param_1 + 0xdc) != 0) {
          iVar27 = *(int *)(param_1 + 0x5c);
          iVar4 = *(int *)(param_1 + 0x28);
          uVar11 = *(uint *)(param_1 + 0x1c);
          piVar8 = *(int **)(param_1 + 0x24);
          if (piVar12 < (int *)(iVar13 + uVar11)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (int)piVar12 + (1 - (int)(iVar13 + uVar11));
          }
          if (uVar22 < 9) {
            uVar22 = uVar11 + uVar22;
          }
          else {
            uVar22 = uVar11 + 8;
          }
          for (; uVar11 < uVar22; uVar11 = uVar11 + 1) {
            puVar5 = (uint *)(iVar13 + uVar11);
            if (uVar16 == 5) {
              uVar6 = puVar5[1];
              uVar25 = *(uint *)(iVar13 + uVar11);
              uVar26 = 0xbb000000;
LAB_01bb53c4:
              uVar6 = uVar26 * uVar6 + uVar25 * -0x30e44324 +
                      (int)((ulonglong)uVar26 * (ulonglong)uVar25 >> 0x20) ^
                      *(uint *)(param_1 + 0x54);
              uVar26 = ((uint)((ulonglong)uVar26 * (ulonglong)uVar25) ^ *(uint *)(param_1 + 0x50))
                       >> (0x38U - (int)piVar8 & 0xff) | uVar6 << ((uint)(piVar8 + -6) & 0xff) |
                       uVar6 >> (0x18U - (int)piVar8 & 0xff);
            }
            else {
              if (5 < uVar16) {
                uVar25 = *puVar5;
                uVar6 = puVar5[1];
                uVar26 = 0xbf9b0000;
                goto LAB_01bb53c4;
              }
              uVar26 = (*(uint *)(param_1 + 0x50) ^ *(int *)(iVar13 + uVar11) * -0x61c8864f) >>
                       (0x18U - (int)piVar8 & 0xff);
            }
            iVar1 = (uVar26 >> 8) << (uVar18 & 0xff);
            HintPreloadData(iVar27 + iVar1 * 4);
            if (4 < uVar17) {
              HintPreloadData(iVar27 + iVar1 * 4 + 0x40);
            }
            HintPreloadData(iVar4 + iVar1);
            if (5 < uVar17) {
              HintPreloadData(iVar4 + iVar1 + 0x20);
            }
            *(uint *)(param_1 + (uVar11 & 7) * 4 + 0x2c) = uVar26;
          }
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        for (; puVar2 = local_54, piVar19 <= piVar12; piVar19 = (int *)((int)piVar19 + iVar27 + 4))
        {
          uVar11 = ((int)piVar19 - iVar13) - (int)local_54;
          if (uVar11 < uVar14) {
            piVar8 = (int *)(iVar9 + (iVar21 - uVar14) + uVar11);
          }
          else {
            piVar8 = (int *)(iVar13 + uVar11);
          }
          if ((local_54 + (iVar7 - ((int)piVar19 - iVar13)) < (undefined1 *)0x3) ||
             (*piVar8 != *piVar19)) break;
          iVar27 = iVar20;
          if (uVar14 <= uVar11) {
            iVar27 = param_5;
          }
          iVar27 = FUN_01b9b970(piVar19 + 1,piVar8 + 1,param_5,iVar27,pcVar15);
          if ((int *)(param_5 - 0x20U) < piVar19) {
            FUN_01b9b730(param_2[3],piVar19,piVar19,(int *)(param_5 - 0x20U));
            piVar8 = extraout_r1_00;
          }
          else {
            FUN_01b9b650(param_2[3],piVar19);
            piVar8 = extraout_r1;
          }
          puVar24 = (undefined4 *)param_2[1];
          *(undefined2 *)(puVar24 + 1) = 0;
          *puVar24 = 1;
          if (0xffff < iVar27 + 1U) {
            param_2[9] = 2;
            param_2[10] = (int)puVar24 - *param_2 >> 3;
          }
          *(short *)((int)puVar24 + 6) = (short)(iVar27 + 1U);
          param_2[1] = (int)(puVar24 + 2);
          local_54 = local_4c;
          local_4c = puVar2;
        }
        local_38 = piVar19;
      } while( true );
    }
    puVar5 = (uint *)(iVar13 + uVar11);
    if (uVar16 == 5) {
      uVar25 = puVar5[1];
      uVar26 = 0xbb000000;
      uVar6 = *(uint *)(iVar13 + uVar11);
LAB_01bb4ce0:
      uVar25 = uVar26 * uVar25 + uVar6 * -0x30e44324 +
               (int)((ulonglong)uVar26 * (ulonglong)uVar6 >> 0x20) ^ *(uint *)(param_1 + 0x54);
      uVar26 = ((uint)((ulonglong)uVar26 * (ulonglong)uVar6) ^ *(uint *)(param_1 + 0x50)) >>
               (0x38U - (int)piVar8 & 0xff) | uVar25 << ((uint)(piVar8 + -6) & 0xff) |
               uVar25 >> (0x18U - (int)piVar8 & 0xff);
    }
    else {
      if (5 < uVar16) {
        uVar6 = *puVar5;
        uVar25 = puVar5[1];
        uVar26 = 0xbf9b0000;
        goto LAB_01bb4ce0;
      }
      uVar26 = (*(uint *)(param_1 + 0x50) ^ *(int *)(iVar13 + uVar11) * -0x61c8864f) >>
               (0x18U - (int)piVar8 & 0xff);
    }
    iVar4 = (uVar26 >> 8) << (uVar18 & 0xff);
    HintPreloadData(iVar7 + iVar4 * 4);
    if (4 < uVar17) {
      HintPreloadData(iVar7 + iVar4 * 4 + 0x40);
    }
    HintPreloadData(iVar27 + iVar4);
    if (5 < uVar17) {
      HintPreloadData(iVar27 + iVar4 + 0x20);
    }
    uVar6 = uVar11 & 7;
    uVar11 = uVar11 + 1;
    *(uint *)(param_1 + uVar6 * 4 + 0x2c) = uVar26;
  } while( true );
}

