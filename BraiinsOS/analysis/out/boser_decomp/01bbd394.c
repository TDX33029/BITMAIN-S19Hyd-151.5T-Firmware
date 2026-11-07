// FUN_01bbd394 @ 01bbd394 size=3252 calls_out=14 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01bbd394(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *extraout_r1;
  char *extraout_r1_00;
  uint uVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  uint uVar22;
  int *piVar23;
  undefined4 *puVar24;
  uint uVar25;
  char *pcVar26;
  char *pcVar27;
  int iVar28;
  int *piVar29;
  int *piVar30;
  undefined1 *puVar31;
  undefined8 uVar32;
  char *local_58;
  int local_50;
  char *local_48;
  int *local_44;
  int *local_40;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  pcVar27 = (char *)((int)param_4 + param_5);
  piVar10 = (int *)(pcVar27 + -0x10);
  iVar11 = *(int *)(param_1 + 4);
  pcVar12 = *(char **)(param_1 + 0xc);
  piVar13 = (int *)(pcVar12 + iVar11);
  iVar14 = *(int *)(param_1 + 8);
  pcVar15 = pcVar12 + iVar14;
  iVar16 = *(int *)(param_1 + 0x10);
  uVar17 = *(undefined4 *)(param_1 + 0xb8);
  uVar18 = *(uint *)(param_1 + 200);
  uVar19 = *(uint *)(param_1 + 0xc4);
  uVar20 = uVar19;
  if (5 < uVar19) {
    uVar20 = 6;
  }
  if (uVar20 < 4) {
    uVar20 = 4;
  }
  local_48 = (char *)*param_3;
  local_58 = (char *)param_3[1];
  piVar29 = param_4;
  if (param_4 == piVar13) {
    piVar29 = (int *)((int)param_4 + 1);
  }
  iVar6 = *(int *)(param_1 + 0x5c);
  uVar9 = *(uint *)(param_1 + 0x1c);
  iVar28 = *(int *)(param_1 + 0x28);
  pcVar21 = (char *)0x0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  pcVar7 = *(char **)(param_1 + 0x24);
  if ((char *)(uVar9 + iVar11) <= pcVar27 + -0x10) {
    pcVar21 = pcVar27 + -0x10 + (1 - (int)(uVar9 + iVar11));
  }
  if (pcVar21 < (char *)0x9) {
    uVar22 = uVar9 + (int)pcVar21;
  }
  else {
    uVar22 = uVar9 + 8;
  }
  do {
    if (uVar22 <= uVar9) {
      local_44 = param_4;
      do {
        while( true ) {
          if (piVar10 <= piVar29) {
            *param_3 = local_48;
            param_3[1] = local_58;
            if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01be31f4((int)pcVar27 - (int)local_44,pcVar7,local_2c ^ DAT_01d53560,0);
            }
            return;
          }
          local_50 = (int)piVar29 - iVar11;
          iVar28 = FUN_01b9b7d4(param_1,local_50 + 1,uVar17);
          pcVar7 = (char *)((1 - (int)local_48) + local_50);
          iVar6 = iVar14;
          if (pcVar12 <= pcVar7) {
            iVar6 = iVar11;
          }
          pcVar8 = pcVar12 + -1;
          pcVar21 = (char *)0x0;
          if (local_48 <= (char *)((local_50 + 1) - iVar28) && 2 < (uint)((int)pcVar8 - (int)pcVar7)
             ) {
            if (*(int *)((int)piVar29 + 1) == *(int *)(pcVar7 + iVar6)) {
              if (pcVar7 < pcVar12) {
                pcVar21 = pcVar15;
              }
              else {
                pcVar21 = pcVar27;
              }
              iVar6 = FUN_01b9b970((char *)((int)piVar29 + 5),pcVar7 + iVar6 + 4,pcVar27,pcVar21,
                                   piVar13);
              pcVar21 = (char *)(iVar6 + 4);
            }
            else {
              pcVar21 = (char *)0x0;
            }
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar18 == 5) {
            if (uVar19 == 5) {
              uVar32 = FUN_01ba96bc(param_1,piVar29,pcVar27,&local_30);
            }
            else if (uVar19 < 6) {
              uVar32 = FUN_01ba9db8();
            }
            else {
              uVar32 = FUN_01ba8f5c();
            }
          }
          else if (uVar18 < 6) {
            if (uVar19 == 5) {
              uVar32 = FUN_01baaacc(param_1,piVar29,pcVar27,&local_30);
            }
            else if (uVar19 < 6) {
              uVar32 = FUN_01bab08c();
            }
            else {
              uVar32 = FUN_01baa49c();
            }
          }
          else if (uVar19 == 5) {
            uVar32 = FUN_01ba8180(param_1,piVar29,pcVar27,&local_30);
          }
          else if (uVar19 < 6) {
            uVar32 = FUN_01ba8878();
          }
          else {
            uVar32 = FUN_01ba7a28();
          }
          pcVar7 = (char *)((ulonglong)uVar32 >> 0x20);
          pcVar2 = (char *)uVar32;
          if (pcVar21 < pcVar2) {
            puVar31 = local_30;
            local_40 = piVar29;
          }
          else {
            puVar31 = (undefined1 *)0x1;
            pcVar2 = pcVar21;
            local_40 = (int *)((int)piVar29 + 1);
          }
          if ((char *)0x3 < pcVar2) break;
          uVar9 = (uint)((int)piVar29 - (int)local_44) >> 8;
          piVar29 = (int *)((int)piVar29 + uVar9 + 1);
          *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar9);
        }
        do {
          piVar30 = (int *)((int)piVar29 + 1);
          iVar6 = local_50 + 1;
          pcVar21 = pcVar2;
          if (puVar31 != (undefined1 *)0x0) {
            iVar1 = FUN_01b9b7d4(param_1,iVar6,uVar17);
            pcVar7 = (char *)(iVar6 - (int)local_48);
            iVar28 = iVar11;
            if (pcVar7 < pcVar12) {
              iVar28 = iVar14;
            }
            if ((local_48 <= (char *)(iVar6 - iVar1) &&
                 2 < (uint)((int)(local_48 + (int)pcVar8) - iVar6)) &&
               (*(int *)((int)piVar29 + 1) == *(int *)(pcVar7 + iVar28))) {
              pcVar26 = pcVar15;
              if (pcVar12 <= pcVar7) {
                pcVar26 = pcVar27;
              }
              uVar9 = FUN_01b9b970((char *)((int)piVar29 + 5),pcVar7 + iVar28 + 4,pcVar27,pcVar26,
                                   piVar13);
              if (uVar9 < 0xfffffffc &&
                  (int)(pcVar2 + -10) * 3 + LZCOUNT(puVar31) < (int)(uVar9 + 4) * 3) {
                puVar31 = (undefined1 *)0x1;
                pcVar21 = (char *)(uVar9 + 4);
                local_40 = piVar30;
              }
            }
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar18 == 5) {
            if (uVar19 == 5) {
              pcVar2 = (char *)FUN_01ba96bc(param_1,piVar30,pcVar27,&local_30);
            }
            else if (uVar19 < 6) {
              pcVar2 = (char *)FUN_01ba9db8();
            }
            else {
              pcVar2 = (char *)FUN_01ba8f5c();
            }
          }
          else if (uVar18 < 6) {
            if (uVar19 == 5) {
              pcVar2 = (char *)FUN_01baaacc(param_1,piVar30,pcVar27,&local_30);
            }
            else if (uVar19 < 6) {
              pcVar2 = (char *)FUN_01bab08c();
            }
            else {
              pcVar2 = (char *)FUN_01baa49c();
            }
          }
          else if (uVar19 == 5) {
            pcVar2 = (char *)FUN_01ba8180(param_1,piVar30,pcVar27,&local_30);
          }
          else if (uVar19 < 6) {
            pcVar2 = (char *)FUN_01ba8878();
          }
          else {
            pcVar2 = (char *)FUN_01ba7a28();
          }
          iVar28 = LZCOUNT(puVar31) + (int)pcVar21 * 4;
          if (&DAT_00000003 < pcVar2 && iVar28 + -0x1b < LZCOUNT(local_30) + (int)pcVar2 * 4 + -0x1f
             ) {
            piVar29 = piVar30;
            local_50 = iVar6;
          }
          else {
            if (piVar10 <= piVar30) break;
            piVar30 = (int *)((int)piVar29 + 2);
            local_50 = local_50 + 2;
            if (puVar31 != (undefined1 *)0x0) {
              iVar1 = FUN_01b9b7d4(param_1,local_50,uVar17);
              pcVar7 = (char *)(local_50 - (int)local_48);
              iVar6 = iVar11;
              if (pcVar7 < pcVar12) {
                iVar6 = iVar14;
              }
              if (local_48 <= (char *)(local_50 - iVar1) &&
                  2 < (uint)((int)(local_48 + (int)pcVar8) - local_50)) {
                if (*(int *)((int)piVar29 + 2) == *(int *)(pcVar7 + iVar6)) {
                  pcVar2 = pcVar15;
                  if (pcVar12 <= pcVar7) {
                    pcVar2 = pcVar27;
                  }
                  uVar22 = FUN_01b9b970((char *)((int)piVar29 + 6),pcVar7 + iVar6 + 4,pcVar27,pcVar2
                                        ,piVar13);
                  uVar9 = uVar22;
                  if (0xfffffffb < uVar22) {
                    uVar9 = 0;
                  }
                  if (uVar22 < 0xfffffffc) {
                    uVar9 = 1;
                  }
                  if ((int)(uVar22 + 4) * 4 <= iVar28 + -0x1e) {
                    uVar9 = 0;
                  }
                  if (uVar9 != 0) {
                    puVar31 = (undefined1 *)0x1;
                    pcVar21 = (char *)(uVar22 + 4);
                    local_40 = piVar30;
                  }
                }
              }
            }
            local_30 = &DAT_3b9ac9ff;
            if (uVar18 == 5) {
              if (uVar19 == 5) {
                pcVar2 = (char *)FUN_01ba96bc(param_1,piVar30,pcVar27,&local_30);
              }
              else if (uVar19 < 6) {
                pcVar2 = (char *)FUN_01ba9db8();
              }
              else {
                pcVar2 = (char *)FUN_01ba8f5c();
              }
            }
            else if (uVar18 < 6) {
              if (uVar19 == 5) {
                pcVar2 = (char *)FUN_01baaacc(param_1,piVar30,pcVar27,&local_30);
              }
              else if (uVar19 < 6) {
                pcVar2 = (char *)FUN_01bab08c();
              }
              else {
                pcVar2 = (char *)FUN_01baa49c();
              }
            }
            else if (uVar19 == 5) {
              pcVar2 = (char *)FUN_01ba8180(param_1,piVar30,pcVar27,&local_30);
            }
            else if (uVar19 < 6) {
              pcVar2 = (char *)FUN_01ba8878();
            }
            else {
              pcVar2 = (char *)FUN_01ba7a28();
            }
            if (pcVar2 < (char *)0x4 ||
                LZCOUNT(local_30) + (int)pcVar2 * 4 + -0x1f <=
                LZCOUNT(puVar31) + (int)(pcVar21 + -6) * 4) break;
            piVar29 = piVar30;
          }
          pcVar21 = pcVar2;
          puVar31 = local_30;
          local_40 = piVar29;
        } while (piVar29 < piVar10);
        if ((undefined1 *)0x3 < puVar31) {
          pcVar7 = (char *)((int)local_40 + ((3 - (int)puVar31) - iVar11));
          piVar29 = (int *)(iVar14 + iVar16);
          iVar6 = iVar14;
          if (pcVar12 <= pcVar7) {
            piVar29 = piVar13;
            iVar6 = iVar11;
          }
          piVar23 = (int *)(pcVar7 + iVar6);
          for (piVar30 = local_40;
              (local_44 < piVar30 && piVar29 < piVar23 &&
              (piVar23 = (int *)((int)piVar23 + -1),
              *(char *)((int)piVar30 + -1) == *(char *)piVar23));
              piVar30 = (int *)((int)piVar30 + -1)) {
          }
          pcVar21 = (char *)((int)local_40 + ((int)pcVar21 - (int)piVar30));
          local_58 = local_48;
          local_48 = puVar31 + -3;
          local_40 = piVar30;
        }
        uVar9 = (int)local_40 - (int)local_44;
        if (pcVar27 + -0x20 < local_40) {
          FUN_01b9b730(param_2[3],local_44,local_40,pcVar27 + -0x20);
        }
        else {
          FUN_01b9b650(param_2[3],local_44);
          if (0x10 < uVar9) {
            iVar6 = param_2[3];
            FUN_01b9b650(iVar6 + 0x10,local_44 + 4);
            if (0x10 < (int)(uVar9 - 0x10)) {
              uVar22 = iVar6 + 0x20;
              do {
                FUN_01b9b650(uVar22,local_44 + 8);
                iVar28 = uVar22 + 0x10;
                uVar22 = uVar22 + 0x20;
                FUN_01b9b650(iVar28,local_44 + 0xc);
                local_44 = local_44 + 8;
              } while (uVar22 < iVar6 + uVar9);
            }
          }
        }
        param_2[3] = param_2[3] + uVar9;
        puVar24 = (undefined4 *)param_2[1];
        if (0xffff < uVar9) {
          param_2[9] = 1;
          param_2[10] = (int)puVar24 - *param_2 >> 3;
        }
        pcVar7 = pcVar21 + -3;
        *(short *)(puVar24 + 1) = (short)uVar9;
        *puVar24 = puVar31;
        if ((char *)0xffff < pcVar7) {
          param_2[9] = 2;
          param_2[10] = (int)puVar24 - *param_2 >> 3;
        }
        *(short *)((int)puVar24 + 6) = (short)pcVar7;
        param_2[1] = (int)(puVar24 + 2);
        piVar29 = (int *)((int)local_40 + (int)pcVar21);
        if (*(int *)(param_1 + 0xdc) != 0) {
          iVar6 = *(int *)(param_1 + 0x5c);
          uVar9 = *(uint *)(param_1 + 0x1c);
          iVar28 = *(int *)(param_1 + 0x28);
          pcVar7 = *(char **)(param_1 + 0x24);
          if (piVar10 < (int *)(uVar9 + iVar11)) {
            pcVar21 = (char *)0x0;
          }
          else {
            pcVar21 = (char *)((int)piVar10 + (1 - (int)(uVar9 + iVar11)));
          }
          if (pcVar21 < (char *)0x9) {
            uVar22 = uVar9 + (int)pcVar21;
          }
          else {
            uVar22 = uVar9 + 8;
          }
          for (; uVar9 < uVar22; uVar9 = uVar9 + 1) {
            puVar3 = (uint *)(uVar9 + iVar11);
            if (uVar18 == 5) {
              uVar4 = puVar3[1];
              uVar25 = *(uint *)(uVar9 + iVar11);
              uVar5 = 0xbb000000;
LAB_01bbdeb0:
              uVar4 = uVar5 * uVar4 + uVar25 * -0x30e44324 +
                      (int)((ulonglong)uVar5 * (ulonglong)uVar25 >> 0x20) ^
                      *(uint *)(param_1 + 0x54);
              uVar5 = ((uint)((ulonglong)uVar5 * (ulonglong)uVar25) ^ *(uint *)(param_1 + 0x50)) >>
                      (0x38U - (int)pcVar7 & 0xff) | uVar4 << ((uint)(pcVar7 + -0x18) & 0xff) |
                      uVar4 >> (0x18U - (int)pcVar7 & 0xff);
            }
            else {
              if (5 < uVar18) {
                uVar25 = *puVar3;
                uVar4 = puVar3[1];
                uVar5 = 0xbf9b0000;
                goto LAB_01bbdeb0;
              }
              uVar5 = (*(uint *)(param_1 + 0x50) ^ *(int *)(uVar9 + iVar11) * -0x61c8864f) >>
                      (0x18U - (int)pcVar7 & 0xff);
            }
            iVar1 = (uVar5 >> 8) << (uVar20 & 0xff);
            HintPreloadData(iVar6 + iVar1 * 4);
            if (4 < uVar19) {
              HintPreloadData(iVar6 + iVar1 * 4 + 0x40);
            }
            HintPreloadData(iVar28 + iVar1);
            if (5 < uVar19) {
              HintPreloadData(iVar28 + iVar1 + 0x20);
            }
            *(uint *)(param_1 + (uVar9 & 7) * 4 + 0x2c) = uVar5;
          }
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        while( true ) {
          pcVar21 = local_58;
          if (piVar10 < piVar29) break;
          iVar1 = (int)piVar29 - iVar11;
          iVar28 = FUN_01b9b7d4(param_1,iVar1,uVar17);
          pcVar2 = (char *)(iVar1 - (int)local_58);
          iVar6 = iVar14;
          if (pcVar12 <= pcVar2) {
            iVar6 = iVar11;
          }
          pcVar7 = local_58;
          if (((char *)(iVar1 - iVar28) < local_58 ||
               (uint)((int)(local_58 + (int)pcVar8) - iVar1) < 3) ||
             (pcVar7 = pcVar2 + iVar6, *piVar29 != *(int *)(pcVar2 + iVar6))) break;
          pcVar26 = pcVar15;
          if (pcVar12 <= pcVar2) {
            pcVar26 = pcVar27;
          }
          iVar6 = FUN_01b9b970(piVar29 + 1,pcVar7 + 4,pcVar27,pcVar26,piVar13);
          if (pcVar27 + -0x20 < piVar29) {
            FUN_01b9b730(param_2[3],piVar29,piVar29,pcVar27 + -0x20);
            pcVar7 = extraout_r1_00;
          }
          else {
            FUN_01b9b650(param_2[3],piVar29);
            pcVar7 = extraout_r1;
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
          local_58 = local_48;
          local_48 = pcVar21;
          piVar29 = (int *)((int)piVar29 + iVar6 + 4);
        }
        local_44 = piVar29;
      } while( true );
    }
    puVar3 = (uint *)(uVar9 + iVar11);
    if (uVar18 == 5) {
      uVar4 = puVar3[1];
      uVar25 = *(uint *)(uVar9 + iVar11);
      uVar5 = 0xbb000000;
LAB_01bbd5d4:
      uVar4 = uVar5 * uVar4 + uVar25 * -0x30e44324 +
              (int)((ulonglong)uVar5 * (ulonglong)uVar25 >> 0x20) ^ *(uint *)(param_1 + 0x54);
      uVar5 = ((uint)((ulonglong)uVar5 * (ulonglong)uVar25) ^ *(uint *)(param_1 + 0x50)) >>
              (0x38U - (int)pcVar7 & 0xff) | uVar4 << ((uint)(pcVar7 + -0x18) & 0xff) |
              uVar4 >> (0x18U - (int)pcVar7 & 0xff);
    }
    else {
      if (5 < uVar18) {
        uVar25 = *puVar3;
        uVar4 = puVar3[1];
        uVar5 = 0xbf9b0000;
        goto LAB_01bbd5d4;
      }
      uVar5 = (*(uint *)(param_1 + 0x50) ^ *(int *)(uVar9 + iVar11) * -0x61c8864f) >>
              (0x18U - (int)pcVar7 & 0xff);
    }
    iVar1 = (uVar5 >> 8) << (uVar20 & 0xff);
    HintPreloadData(iVar6 + iVar1 * 4);
    if (4 < uVar19) {
      HintPreloadData(iVar6 + iVar1 * 4 + 0x40);
    }
    HintPreloadData(iVar28 + iVar1);
    if (5 < uVar19) {
      HintPreloadData(iVar28 + iVar1 + 0x20);
    }
    *(uint *)(param_1 + (uVar9 & 7) * 4 + 0x2c) = uVar5;
    uVar9 = uVar9 + 1;
  } while( true );
}

