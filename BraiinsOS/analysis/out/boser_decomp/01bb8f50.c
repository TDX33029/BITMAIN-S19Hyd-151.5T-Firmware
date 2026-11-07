// FUN_01bb8f50 @ 01bb8f50 size=3140 calls_out=13 calls_in=0
// strings: 

void FUN_01bb8f50(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *extraout_r1;
  int *extraout_r1_00;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  char *pcVar22;
  undefined4 *puVar23;
  int *piVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  undefined8 uVar31;
  undefined1 *local_60;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_30;
  uint local_2c;
  
  param_5 = (int)param_4 + param_5;
  local_2c = DAT_01d53560;
  piVar11 = (int *)(param_5 - 0x10);
  iVar12 = *(int *)(param_1 + 4);
  uVar13 = *(uint *)(param_1 + 0xc);
  pcVar14 = (char *)(iVar12 + uVar13);
  uVar15 = *(uint *)(param_1 + 200);
  uVar16 = *(uint *)(param_1 + 0xc4);
  uVar17 = uVar16;
  if (5 < uVar16) {
    uVar17 = 6;
  }
  if (uVar17 < 4) {
    uVar17 = 4;
  }
  local_4c = (undefined1 *)*param_3;
  local_60 = (undefined1 *)param_3[1];
  piVar18 = *(int **)(param_1 + 0xb4);
  iVar8 = piVar18[1];
  iVar9 = piVar18[3];
  iVar19 = *piVar18;
  iVar20 = iVar19 - iVar8;
  iVar5 = *(int *)(param_1 + 0x5c);
  iVar26 = *(int *)(param_1 + 0x28);
  piVar18 = param_4;
  if ((iVar8 + iVar9) - iVar19 == (int)param_4 - (int)pcVar14) {
    piVar18 = (int *)((int)param_4 + 1);
  }
  uVar10 = *(uint *)(param_1 + 0x1c);
  uVar21 = 0;
  piVar6 = *(int **)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (iVar12 + uVar10 <= param_5 - 0x10U) {
    uVar21 = ((param_5 - 0x10U) - (iVar12 + uVar10)) + 1;
  }
  if (uVar21 < 9) {
    uVar21 = uVar10 + uVar21;
  }
  else {
    uVar21 = uVar10 + 8;
  }
  do {
    if (uVar21 <= uVar10) {
      do {
        while( true ) {
          if (piVar11 <= piVar18) {
            *param_3 = local_4c;
            param_3[1] = local_60;
            if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01be31f4(param_5 - (int)param_4,piVar6,local_2c ^ DAT_01d53560,0);
            }
            return;
          }
          uVar10 = (int)piVar18 + ((1 - (int)local_4c) - iVar12);
          if (uVar10 < uVar13) {
            piVar6 = (int *)(iVar8 + (iVar20 - uVar13) + uVar10);
          }
          else {
            piVar6 = (int *)(iVar12 + uVar10);
          }
          iVar5 = uVar13 - 1;
          if ((iVar5 - uVar10 < 3) || (*piVar6 != *(int *)((int)piVar18 + 1))) {
            uVar10 = 0;
          }
          else {
            if (uVar10 < uVar13) {
              iVar26 = iVar19;
            }
            else {
              iVar26 = param_5;
            }
            iVar26 = FUN_01b9b970((int)piVar18 + 5,piVar6 + 1,param_5,iVar26,pcVar14);
            uVar10 = iVar26 + 4;
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar15 == 5) {
            if (uVar16 == 5) {
              uVar31 = FUN_01ba03a8(param_1,piVar18,param_5,&local_30);
            }
            else if (uVar16 < 6) {
              uVar31 = FUN_01ba0cb4();
            }
            else {
              uVar31 = FUN_01b9fa30();
            }
          }
          else if (uVar15 < 6) {
            if (uVar16 == 5) {
              uVar31 = FUN_01ba1de4(param_1,piVar18,param_5,&local_30);
            }
            else if (uVar16 < 6) {
              uVar31 = FUN_01ba25b4();
            }
            else {
              uVar31 = FUN_01ba15b4();
            }
          }
          else if (uVar16 == 5) {
            uVar31 = FUN_01b9e830(param_1,piVar18,param_5,&local_30);
          }
          else if (uVar16 < 6) {
            uVar31 = FUN_01b9f138();
          }
          else {
            uVar31 = FUN_01b9debc();
          }
          piVar6 = (int *)((ulonglong)uVar31 >> 0x20);
          uVar21 = (uint)uVar31;
          if (uVar10 < uVar21) {
            local_48 = local_30;
            piVar24 = piVar18;
          }
          else {
            local_48 = (undefined1 *)0x1;
            piVar24 = (int *)((int)piVar18 + 1);
            uVar21 = uVar10;
          }
          if (3 < uVar21) break;
          uVar10 = ((uint)((int)piVar18 - (int)param_4) >> 8) + 1;
          piVar18 = (int *)((int)piVar18 + uVar10);
          *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar10);
        }
        do {
          piVar6 = (int *)((int)piVar18 + 1);
          uVar10 = ((int)piVar6 - iVar12) - (int)local_4c;
          if (uVar10 < uVar13) {
            piVar7 = (int *)(iVar8 + (iVar20 - uVar13) + uVar10);
          }
          else {
            piVar7 = (int *)(iVar12 + uVar10);
          }
          uVar27 = uVar21;
          if (((undefined1 *)0x2 < local_4c + (iVar5 - ((int)piVar6 - iVar12))) &&
             (*piVar7 == *(int *)((int)piVar18 + 1))) {
            iVar26 = iVar19;
            if (uVar13 <= uVar10) {
              iVar26 = param_5;
            }
            uVar10 = FUN_01b9b970((int)piVar18 + 5,piVar7 + 1,param_5,iVar26,pcVar14);
            if (uVar10 < 0xfffffffc &&
                (int)((uVar21 - 10) * 3 + LZCOUNT(local_48)) < (int)((uVar10 + 4) * 3)) {
              local_48 = (undefined1 *)0x1;
              uVar27 = uVar10 + 4;
              piVar24 = piVar6;
            }
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar15 == 5) {
            if (uVar16 == 5) {
              uVar21 = FUN_01ba03a8(param_1,piVar6,param_5,&local_30);
            }
            else if (uVar16 < 6) {
              uVar21 = FUN_01ba0cb4();
            }
            else {
              uVar21 = FUN_01b9fa30();
            }
          }
          else if (uVar15 < 6) {
            if (uVar16 == 5) {
              uVar21 = FUN_01ba1de4(param_1,piVar6,param_5,&local_30);
            }
            else if (uVar16 < 6) {
              uVar21 = FUN_01ba25b4();
            }
            else {
              uVar21 = FUN_01ba15b4();
            }
          }
          else if (uVar16 == 5) {
            uVar21 = FUN_01b9e830(param_1,piVar6,param_5,&local_30);
          }
          else if (uVar16 < 6) {
            uVar21 = FUN_01b9f138();
          }
          else {
            uVar21 = FUN_01b9debc();
          }
          iVar26 = LZCOUNT(local_48) + uVar27 * 4;
          if (uVar21 < 4 || (int)(LZCOUNT(local_30) + uVar21 * 4 + -0x1f) <= iVar26 + -0x1b) {
            if (piVar11 <= piVar6) break;
            piVar6 = (int *)((int)piVar18 + 2);
            uVar10 = ((int)piVar6 - iVar12) - (int)local_4c;
            if (uVar10 < uVar13) {
              piVar7 = (int *)(iVar8 + (iVar20 - uVar13) + uVar10);
            }
            else {
              piVar7 = (int *)(iVar12 + uVar10);
            }
            if ((undefined1 *)0x2 < local_4c + (iVar5 - ((int)piVar6 - iVar12))) {
              if (*piVar7 == *(int *)((int)piVar18 + 2)) {
                iVar29 = iVar19;
                if (uVar13 <= uVar10) {
                  iVar29 = param_5;
                }
                uVar21 = FUN_01b9b970((int)piVar18 + 6,piVar7 + 1,param_5,iVar29,pcVar14);
                uVar10 = uVar21;
                if (0xfffffffb < uVar21) {
                  uVar10 = 0;
                }
                if (uVar21 < 0xfffffffc) {
                  uVar10 = 1;
                }
                if ((int)((uVar21 + 4) * 4) <= iVar26 + -0x1e) {
                  uVar10 = 0;
                }
                if (uVar10 != 0) {
                  local_48 = (undefined1 *)0x1;
                  uVar27 = uVar21 + 4;
                  piVar24 = piVar6;
                }
              }
            }
            local_30 = &DAT_3b9ac9ff;
            if (uVar15 == 5) {
              if (uVar16 == 5) {
                uVar21 = FUN_01ba03a8(param_1,piVar6,param_5,&local_30);
              }
              else if (uVar16 < 6) {
                uVar21 = FUN_01ba0cb4();
              }
              else {
                uVar21 = FUN_01b9fa30();
              }
            }
            else if (uVar15 < 6) {
              if (uVar16 == 5) {
                uVar21 = FUN_01ba1de4(param_1,piVar6,param_5,&local_30);
              }
              else if (uVar16 < 6) {
                uVar21 = FUN_01ba25b4();
              }
              else {
                uVar21 = FUN_01ba15b4();
              }
            }
            else if (uVar16 == 5) {
              uVar21 = FUN_01b9e830(param_1,piVar6,param_5,&local_30);
            }
            else if (uVar16 < 6) {
              uVar21 = FUN_01b9f138();
            }
            else {
              uVar21 = FUN_01b9debc();
            }
            if (uVar21 < 4 ||
                (int)(LZCOUNT(local_30) + uVar21 * 4 + -0x1f) <=
                (int)(LZCOUNT(local_48) + (uVar27 - 6) * 4)) break;
          }
          piVar18 = piVar6;
          uVar27 = uVar21;
          piVar24 = piVar18;
          local_48 = local_30;
        } while (piVar18 < piVar11);
        piVar18 = piVar24;
        if ((undefined1 *)0x3 < local_48) {
          uVar10 = (int)piVar24 + ((3 - (int)local_48) - iVar12);
          if (uVar10 < uVar13) {
            pcVar22 = (char *)(iVar8 + (iVar20 - uVar13) + uVar10);
            pcVar3 = (char *)(iVar8 + iVar9);
          }
          else {
            pcVar22 = (char *)(iVar12 + uVar10);
            pcVar3 = pcVar14;
          }
          for (; (param_4 < piVar18 && pcVar3 < pcVar22 &&
                 (pcVar22 = pcVar22 + -1, *(char *)((int)piVar18 - 1) == *pcVar22));
              piVar18 = (int *)((int)piVar18 - 1)) {
          }
          uVar27 = (int)piVar24 + (uVar27 - (int)piVar18);
          local_60 = local_4c;
          local_4c = local_48 + -3;
        }
        uVar10 = (int)piVar18 - (int)param_4;
        if ((int *)(param_5 - 0x20U) < piVar18) {
          FUN_01b9b730(param_2[3],param_4,piVar18,param_5 + -0x20);
        }
        else {
          FUN_01b9b650(param_2[3],param_4);
          if (0x10 < uVar10) {
            iVar26 = param_2[3];
            FUN_01b9b650(iVar26 + 0x10,param_4 + 4);
            if (0x10 < (int)(uVar10 - 0x10)) {
              uVar21 = iVar26 + 0x20;
              do {
                FUN_01b9b650(uVar21,param_4 + 8);
                FUN_01b9b650(uVar21 + 0x10,param_4 + 0xc);
                uVar21 = uVar21 + 0x20;
                param_4 = param_4 + 8;
              } while (uVar21 < iVar26 + uVar10);
            }
          }
        }
        param_2[3] = param_2[3] + uVar10;
        puVar23 = (undefined4 *)param_2[1];
        if (0xffff < uVar10) {
          param_2[9] = 1;
          param_2[10] = (int)puVar23 - *param_2 >> 3;
        }
        piVar6 = (int *)(uVar27 - 3);
        *(short *)(puVar23 + 1) = (short)uVar10;
        *puVar23 = local_48;
        if ((int *)0xffff < piVar6) {
          param_2[9] = 2;
          param_2[10] = (int)puVar23 - *param_2 >> 3;
        }
        *(short *)((int)puVar23 + 6) = (short)piVar6;
        piVar18 = (int *)((int)piVar18 + uVar27);
        param_2[1] = (int)(puVar23 + 2);
        if (*(int *)(param_1 + 0xdc) != 0) {
          uVar10 = *(uint *)(param_1 + 0x1c);
          piVar24 = (int *)(iVar12 + uVar10);
          iVar29 = *(int *)(param_1 + 0x5c);
          bVar30 = piVar24 <= piVar11;
          iVar26 = *(int *)(param_1 + 0x28);
          if (bVar30) {
            piVar24 = (int *)((int)piVar11 - (int)piVar24);
          }
          piVar6 = *(int **)(param_1 + 0x24);
          if (bVar30) {
            uVar21 = (int)piVar24 + 1;
          }
          else {
            uVar21 = 0;
          }
          if (uVar21 < 9) {
            uVar21 = uVar10 + uVar21;
          }
          else {
            uVar21 = uVar10 + 8;
          }
          for (; uVar10 < uVar21; uVar10 = uVar10 + 1) {
            puVar4 = (uint *)(iVar12 + uVar10);
            if (uVar15 == 5) {
              uVar28 = puVar4[1];
              uVar27 = 0xbb000000;
              uVar25 = *(uint *)(iVar12 + uVar10);
LAB_01bb9a0c:
              uVar28 = uVar27 * uVar28 + uVar25 * -0x30e44324 +
                       (int)((ulonglong)uVar27 * (ulonglong)uVar25 >> 0x20) ^
                       *(uint *)(param_1 + 0x54);
              uVar27 = ((uint)((ulonglong)uVar27 * (ulonglong)uVar25) ^ *(uint *)(param_1 + 0x50))
                       >> (0x38U - (int)piVar6 & 0xff) | uVar28 << ((uint)(piVar6 + -6) & 0xff) |
                       uVar28 >> (0x18U - (int)piVar6 & 0xff);
            }
            else {
              if (5 < uVar15) {
                uVar25 = *puVar4;
                uVar28 = puVar4[1];
                uVar27 = 0xbf9b0000;
                goto LAB_01bb9a0c;
              }
              uVar27 = (*(uint *)(param_1 + 0x50) ^ *(int *)(iVar12 + uVar10) * -0x61c8864f) >>
                       (0x18U - (int)piVar6 & 0xff);
            }
            iVar1 = (uVar27 >> 8) << (uVar17 & 0xff);
            HintPreloadData(iVar29 + iVar1 * 4);
            if (4 < uVar16) {
              HintPreloadData(iVar29 + iVar1 * 4 + 0x40);
            }
            HintPreloadData(iVar26 + iVar1);
            if (5 < uVar16) {
              HintPreloadData(iVar26 + iVar1 + 0x20);
            }
            *(uint *)(param_1 + (uVar10 & 7) * 4 + 0x2c) = uVar27;
          }
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        for (; puVar2 = local_4c, piVar18 <= piVar11; piVar18 = (int *)((int)piVar18 + iVar26 + 4))
        {
          uVar10 = ((int)piVar18 - iVar12) - (int)local_60;
          if (uVar10 < uVar13) {
            piVar6 = (int *)(iVar8 + (iVar20 - uVar13) + uVar10);
          }
          else {
            piVar6 = (int *)(iVar12 + uVar10);
          }
          if ((local_60 + (iVar5 - ((int)piVar18 - iVar12)) < (undefined1 *)0x3) ||
             (*piVar6 != *piVar18)) break;
          iVar26 = iVar19;
          if (uVar13 <= uVar10) {
            iVar26 = param_5;
          }
          iVar26 = FUN_01b9b970(piVar18 + 1,piVar6 + 1,param_5,iVar26,pcVar14);
          if ((int *)(param_5 - 0x20U) < piVar18) {
            FUN_01b9b730(param_2[3],piVar18,piVar18,(int *)(param_5 - 0x20U));
            piVar6 = extraout_r1_00;
          }
          else {
            FUN_01b9b650(param_2[3],piVar18);
            piVar6 = extraout_r1;
          }
          puVar23 = (undefined4 *)param_2[1];
          *(undefined2 *)(puVar23 + 1) = 0;
          *puVar23 = 1;
          if (0xffff < iVar26 + 1U) {
            param_2[9] = 2;
            param_2[10] = (int)puVar23 - *param_2 >> 3;
            piVar6 = param_2;
          }
          *(short *)((int)puVar23 + 6) = (short)(iVar26 + 1U);
          param_2[1] = (int)(puVar23 + 2);
          local_4c = local_60;
          local_60 = puVar2;
        }
        param_4 = piVar18;
      } while( true );
    }
    puVar4 = (uint *)(iVar12 + uVar10);
    if (uVar15 == 5) {
      uVar25 = puVar4[1];
      uVar28 = *(uint *)(iVar12 + uVar10);
      uVar27 = 0xbb000000;
LAB_01bb919c:
      uVar25 = uVar27 * uVar25 + uVar28 * -0x30e44324 +
               (int)((ulonglong)uVar27 * (ulonglong)uVar28 >> 0x20) ^ *(uint *)(param_1 + 0x54);
      uVar27 = ((uint)((ulonglong)uVar27 * (ulonglong)uVar28) ^ *(uint *)(param_1 + 0x50)) >>
               (0x38U - (int)piVar6 & 0xff) | uVar25 << ((uint)(piVar6 + -6) & 0xff) |
               uVar25 >> (0x18U - (int)piVar6 & 0xff);
    }
    else {
      if (5 < uVar15) {
        uVar28 = *puVar4;
        uVar25 = puVar4[1];
        uVar27 = 0xbf9b0000;
        goto LAB_01bb919c;
      }
      uVar27 = (*(uint *)(param_1 + 0x50) ^ *(int *)(iVar12 + uVar10) * -0x61c8864f) >>
               (0x18U - (int)piVar6 & 0xff);
    }
    iVar29 = (uVar27 >> 8) << (uVar17 & 0xff);
    HintPreloadData(iVar5 + iVar29 * 4);
    if (4 < uVar16) {
      HintPreloadData(iVar5 + iVar29 * 4 + 0x40);
    }
    HintPreloadData(iVar26 + iVar29);
    if (5 < uVar16) {
      HintPreloadData(iVar26 + iVar29 + 0x20);
    }
    *(uint *)(param_1 + (uVar10 & 7) * 4 + 0x2c) = uVar27;
    uVar10 = uVar10 + 1;
  } while( true );
}

