// FUN_01bb7784 @ 01bb7784 size=2896 calls_out=14 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01bb7784(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  int *extraout_r1;
  int *extraout_r1_00;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  char *pcVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  int *piVar20;
  undefined1 *puVar21;
  int iVar22;
  char *pcVar23;
  uint uVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined1 *local_60;
  undefined1 *local_54;
  undefined1 *local_48;
  int *local_44;
  int *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  pcVar23 = (char *)((int)param_4 + param_5);
  piVar8 = (int *)(pcVar23 + -0x10);
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
  piVar20 = param_4;
  if (param_4 == piVar10) {
    piVar20 = (int *)((int)param_4 + 1);
  }
  puVar14 = (undefined1 *)*param_3;
  puVar15 = (undefined1 *)param_3[1];
  iVar2 = FUN_01b9b818(param_1,(int)piVar20 - iVar9,*(undefined4 *)(param_1 + 0xb8));
  puVar21 = (undefined1 *)(((int)piVar20 - iVar9) - iVar2);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (puVar21 < puVar15) {
    local_48 = (undefined1 *)0x0;
    local_60 = puVar15;
  }
  else {
    local_60 = (undefined1 *)0x0;
    local_48 = puVar15;
  }
  iVar22 = *(int *)(param_1 + 0x28);
  if (puVar21 < puVar14) {
    local_38 = (undefined1 *)0x0;
    local_54 = puVar14;
  }
  else {
    local_54 = (undefined1 *)0x0;
    local_38 = puVar14;
  }
  uVar7 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  piVar6 = *(int **)(param_1 + 0x24);
  if (pcVar23 + -0x10 < (char *)(uVar7 + iVar9)) {
    pcVar16 = (char *)0x0;
  }
  else {
    pcVar16 = pcVar23 + -0x10 + (1 - (int)(uVar7 + iVar9));
  }
  if (pcVar16 < (char *)0x9) {
    uVar17 = uVar7 + (int)pcVar16;
  }
  else {
    uVar17 = uVar7 + 8;
  }
  do {
    if (uVar17 <= uVar7) {
      local_44 = param_4;
      do {
        while( true ) {
          bVar25 = local_38 != (undefined1 *)0x0;
          if (piVar8 <= piVar20) {
            if (local_54 != (undefined1 *)0x0 && bVar25) {
              local_60 = local_54;
            }
            else if (local_38 == (undefined1 *)0x0) {
              local_38 = local_54;
            }
            *param_3 = local_38;
            if (local_48 == (undefined1 *)0x0) {
              local_48 = local_60;
            }
            param_3[1] = local_48;
            if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01be31f4((int)pcVar23 - (int)local_44,piVar6,local_2c ^ DAT_01d53560,0);
            }
            return;
          }
          pcVar16 = (char *)0x0;
          if (*(int *)((int)piVar20 + (1 - (int)local_38)) == *(int *)((int)piVar20 + 1) && bVar25)
          {
            iVar2 = FUN_01b9b884((char *)((int)piVar20 + 5),
                                 (char *)((int)piVar20 + (5 - (int)local_38)),pcVar23);
            pcVar16 = (char *)(iVar2 + 4);
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar11 == 5) {
            if (uVar12 == 5) {
              uVar26 = FUN_01bad09c(param_1,piVar20,pcVar23,&local_30);
            }
            else if (uVar12 < 6) {
              uVar26 = FUN_01bad708();
            }
            else {
              uVar26 = FUN_01bac9c8();
            }
          }
          else if (uVar11 < 6) {
            if (uVar12 == 5) {
              uVar26 = FUN_01bae2fc(param_1,piVar20,pcVar23,&local_30);
            }
            else if (uVar12 < 6) {
              uVar26 = FUN_01bae82c();
            }
            else {
              uVar26 = FUN_01badd60();
            }
          }
          else if (uVar12 == 5) {
            uVar26 = FUN_01babd0c(param_1,piVar20,pcVar23,&local_30);
          }
          else if (uVar12 < 6) {
            uVar26 = FUN_01bac370();
          }
          else {
            uVar26 = FUN_01bab640();
          }
          piVar6 = (int *)((ulonglong)uVar26 >> 0x20);
          pcVar3 = (char *)uVar26;
          if (pcVar16 < pcVar3) {
            puVar14 = local_30;
            local_40 = piVar20;
          }
          else {
            puVar14 = (undefined1 *)0x1;
            pcVar3 = pcVar16;
            local_40 = (int *)((int)piVar20 + 1);
          }
          if ((char *)0x3 < pcVar3) break;
          uVar7 = ((uint)((int)piVar20 - (int)local_44) >> 8) + 1;
          piVar20 = (int *)((int)piVar20 + uVar7);
          *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar7);
        }
        do {
          piVar6 = (int *)((int)piVar20 + 1);
          pcVar16 = pcVar3;
          if ((puVar14 != (undefined1 *)0x0) &&
             (*(int *)((int)piVar6 - (int)local_38) == *(int *)((int)piVar20 + 1) && bVar25)) {
            uVar7 = FUN_01b9b884((char *)((int)piVar20 + 5),
                                 (char *)((int)piVar6 + (4 - (int)local_38)),pcVar23);
            if (uVar7 < 0xfffffffc &&
                (int)(pcVar3 + -10) * 3 + LZCOUNT(puVar14) < (int)(uVar7 + 4) * 3) {
              puVar14 = (undefined1 *)0x1;
              pcVar16 = (char *)(uVar7 + 4);
              local_40 = piVar6;
            }
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar11 == 5) {
            if (uVar12 == 5) {
              pcVar3 = (char *)FUN_01bad09c(param_1,piVar6,pcVar23,&local_30);
            }
            else if (uVar12 < 6) {
              pcVar3 = (char *)FUN_01bad708();
            }
            else {
              pcVar3 = (char *)FUN_01bac9c8();
            }
          }
          else if (uVar11 < 6) {
            if (uVar12 == 5) {
              pcVar3 = (char *)FUN_01bae2fc(param_1,piVar6,pcVar23,&local_30);
            }
            else if (uVar12 < 6) {
              pcVar3 = (char *)FUN_01bae82c();
            }
            else {
              pcVar3 = (char *)FUN_01badd60();
            }
          }
          else if (uVar12 == 5) {
            pcVar3 = (char *)FUN_01babd0c(param_1,piVar6,pcVar23,&local_30);
          }
          else if (uVar12 < 6) {
            pcVar3 = (char *)FUN_01bac370();
          }
          else {
            pcVar3 = (char *)FUN_01bab640();
          }
          iVar2 = LZCOUNT(puVar14) + (int)pcVar16 * 4;
          if (pcVar3 < (char *)0x4 || LZCOUNT(local_30) + (int)pcVar3 * 4 + -0x1f <= iVar2 + -0x1b)
          {
            if (piVar8 <= piVar6) break;
            piVar6 = (int *)((int)piVar20 + 2);
            if (puVar14 != (undefined1 *)0x0) {
              if (*(int *)((int)piVar6 - (int)local_38) == *(int *)((int)piVar20 + 2) && bVar25) {
                uVar17 = FUN_01b9b884((char *)((int)piVar20 + 6),
                                      (char *)((int)piVar6 + (4 - (int)local_38)),pcVar23);
                uVar7 = uVar17;
                if (0xfffffffb < uVar17) {
                  uVar7 = 0;
                }
                if (uVar17 < 0xfffffffc) {
                  uVar7 = 1;
                }
                if ((int)(uVar17 + 4) * 4 <= iVar2 + -0x1e) {
                  uVar7 = 0;
                }
                if (uVar7 != 0) {
                  puVar14 = (undefined1 *)0x1;
                  pcVar16 = (char *)(uVar17 + 4);
                  local_40 = piVar6;
                }
              }
            }
            local_30 = &DAT_3b9ac9ff;
            if (uVar11 == 5) {
              if (uVar12 == 5) {
                pcVar3 = (char *)FUN_01bad09c(param_1,piVar6,pcVar23,&local_30);
              }
              else if (uVar12 < 6) {
                pcVar3 = (char *)FUN_01bad708();
              }
              else {
                pcVar3 = (char *)FUN_01bac9c8();
              }
            }
            else if (uVar11 < 6) {
              if (uVar12 == 5) {
                pcVar3 = (char *)FUN_01bae2fc(param_1,piVar6,pcVar23,&local_30);
              }
              else if (uVar12 < 6) {
                pcVar3 = (char *)FUN_01bae82c();
              }
              else {
                pcVar3 = (char *)FUN_01badd60();
              }
            }
            else if (uVar12 == 5) {
              pcVar3 = (char *)FUN_01babd0c(param_1,piVar6,pcVar23,&local_30);
            }
            else if (uVar12 < 6) {
              pcVar3 = (char *)FUN_01bac370();
            }
            else {
              pcVar3 = (char *)FUN_01bab640();
            }
            if (pcVar3 < (char *)0x4 ||
                LZCOUNT(local_30) + (int)pcVar3 * 4 + -0x1f <=
                LZCOUNT(puVar14) + (int)(pcVar16 + -6) * 4) break;
          }
          piVar20 = piVar6;
          pcVar16 = pcVar3;
          puVar14 = local_30;
          local_40 = piVar20;
        } while (piVar20 < piVar8);
        if ((undefined1 *)0x3 < puVar14) {
          piVar6 = (int *)((int)local_40 + (3 - (int)puVar14));
          for (piVar20 = local_40;
              (local_44 < piVar20 && piVar10 < piVar6 &&
              (piVar6 = (int *)((int)piVar6 + -1), *(char *)((int)piVar20 + -1) == *(char *)piVar6))
              ; piVar20 = (int *)((int)piVar20 + -1)) {
          }
          pcVar16 = (char *)((int)local_40 + ((int)pcVar16 - (int)piVar20));
          local_48 = local_38;
          local_38 = puVar14 + -3;
          local_40 = piVar20;
        }
        uVar7 = (int)local_40 - (int)local_44;
        if (pcVar23 + -0x20 < local_40) {
          FUN_01b9b730(param_2[3],local_44,local_40,pcVar23 + -0x20);
        }
        else {
          FUN_01b9b650(param_2[3],local_44);
          if (0x10 < uVar7) {
            iVar2 = param_2[3];
            FUN_01b9b650(iVar2 + 0x10,local_44 + 4);
            if (0x10 < (int)(uVar7 - 0x10)) {
              uVar17 = iVar2 + 0x20;
              do {
                FUN_01b9b650(uVar17,local_44 + 8);
                iVar22 = uVar17 + 0x10;
                uVar17 = uVar17 + 0x20;
                FUN_01b9b650(iVar22,local_44 + 0xc);
                local_44 = local_44 + 8;
              } while (uVar17 < iVar2 + uVar7);
            }
          }
        }
        param_2[3] = param_2[3] + uVar7;
        puVar18 = (undefined4 *)param_2[1];
        if (0xffff < uVar7) {
          param_2[9] = 1;
          param_2[10] = (int)puVar18 - *param_2 >> 3;
        }
        piVar6 = (int *)(pcVar16 + -3);
        *(short *)(puVar18 + 1) = (short)uVar7;
        *puVar18 = puVar14;
        if ((int *)0xffff < piVar6) {
          param_2[9] = 2;
          param_2[10] = (int)puVar18 - *param_2 >> 3;
        }
        *(short *)((int)puVar18 + 6) = (short)piVar6;
        param_2[1] = (int)(puVar18 + 2);
        piVar20 = (int *)((int)local_40 + (int)pcVar16);
        if (*(int *)(param_1 + 0xdc) != 0) {
          iVar2 = *(int *)(param_1 + 0x5c);
          uVar7 = *(uint *)(param_1 + 0x1c);
          iVar22 = *(int *)(param_1 + 0x28);
          piVar6 = *(int **)(param_1 + 0x24);
          if (piVar8 < (int *)(uVar7 + iVar9)) {
            pcVar16 = (char *)0x0;
          }
          else {
            pcVar16 = (char *)((int)piVar8 + (1 - (int)(uVar7 + iVar9)));
          }
          if (pcVar16 < (char *)0x9) {
            uVar17 = uVar7 + (int)pcVar16;
          }
          else {
            uVar17 = uVar7 + 8;
          }
          for (; uVar7 < uVar17; uVar7 = uVar7 + 1) {
            puVar4 = (uint *)(uVar7 + iVar9);
            if (uVar11 == 5) {
              uVar24 = puVar4[1];
              uVar5 = 0xbb000000;
              uVar19 = *(uint *)(uVar7 + iVar9);
LAB_01bb81bc:
              uVar24 = uVar5 * uVar24 + uVar19 * -0x30e44324 +
                       (int)((ulonglong)uVar5 * (ulonglong)uVar19 >> 0x20) ^
                       *(uint *)(param_1 + 0x54);
              uVar5 = ((uint)((ulonglong)uVar5 * (ulonglong)uVar19) ^ *(uint *)(param_1 + 0x50)) >>
                      (0x38U - (int)piVar6 & 0xff) | uVar24 << ((uint)(piVar6 + -6) & 0xff) |
                      uVar24 >> (0x18U - (int)piVar6 & 0xff);
            }
            else {
              if (5 < uVar11) {
                uVar19 = *puVar4;
                uVar24 = puVar4[1];
                uVar5 = 0xbf9b0000;
                goto LAB_01bb81bc;
              }
              uVar5 = (*(uint *)(param_1 + 0x50) ^ *(int *)(uVar7 + iVar9) * -0x61c8864f) >>
                      (0x18U - (int)piVar6 & 0xff);
            }
            iVar1 = (uVar5 >> 8) << (uVar13 & 0xff);
            HintPreloadData(iVar2 + iVar1 * 4);
            if (4 < uVar12) {
              HintPreloadData(iVar2 + iVar1 * 4 + 0x40);
            }
            HintPreloadData(iVar22 + iVar1);
            if (5 < uVar12) {
              HintPreloadData(iVar22 + iVar1 + 0x20);
            }
            *(uint *)(param_1 + (uVar7 & 7) * 4 + 0x2c) = uVar5;
          }
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        for (; (puVar14 = local_38, local_48 != (undefined1 *)0x0 && piVar20 <= piVar8 &&
               (*piVar20 == *(int *)((int)piVar20 - (int)local_48)));
            piVar20 = (int *)((int)piVar20 + iVar2 + 4)) {
          iVar2 = FUN_01b9b884(piVar20 + 1,(char *)((int)piVar20 + (4 - (int)local_48)),pcVar23);
          if (pcVar23 + -0x20 < piVar20) {
            FUN_01b9b730(param_2[3],piVar20,piVar20,pcVar23 + -0x20);
            piVar6 = extraout_r1_00;
          }
          else {
            FUN_01b9b650(param_2[3],piVar20);
            piVar6 = extraout_r1;
          }
          puVar18 = (undefined4 *)param_2[1];
          *(undefined2 *)(puVar18 + 1) = 0;
          *puVar18 = 1;
          if (0xffff < iVar2 + 1U) {
            param_2[9] = 2;
            param_2[10] = (int)puVar18 - *param_2 >> 3;
            piVar6 = param_2;
          }
          *(short *)((int)puVar18 + 6) = (short)(iVar2 + 1U);
          param_2[1] = (int)(puVar18 + 2);
          local_38 = local_48;
          local_48 = puVar14;
        }
        local_44 = piVar20;
      } while( true );
    }
    puVar4 = (uint *)(uVar7 + iVar9);
    if (uVar11 == 5) {
      uVar24 = puVar4[1];
      uVar5 = 0xbb000000;
      uVar19 = *(uint *)(uVar7 + iVar9);
LAB_01bb7a2c:
      uVar24 = uVar5 * uVar24 + uVar19 * -0x30e44324 +
               (int)((ulonglong)uVar5 * (ulonglong)uVar19 >> 0x20) ^ *(uint *)(param_1 + 0x54);
      uVar5 = ((uint)((ulonglong)uVar5 * (ulonglong)uVar19) ^ *(uint *)(param_1 + 0x50)) >>
              (0x38U - (int)piVar6 & 0xff) | uVar24 << ((uint)(piVar6 + -6) & 0xff) |
              uVar24 >> (0x18U - (int)piVar6 & 0xff);
    }
    else {
      if (5 < uVar11) {
        uVar19 = *puVar4;
        uVar24 = puVar4[1];
        uVar5 = 0xbf9b0000;
        goto LAB_01bb7a2c;
      }
      uVar5 = (*(uint *)(param_1 + 0x50) ^ *(int *)(uVar7 + iVar9) * -0x61c8864f) >>
              (0x18U - (int)piVar6 & 0xff);
    }
    iVar1 = (uVar5 >> 8) << (uVar13 & 0xff);
    HintPreloadData(iVar2 + iVar1 * 4);
    if (4 < uVar12) {
      HintPreloadData(iVar2 + iVar1 * 4 + 0x40);
    }
    HintPreloadData(iVar22 + iVar1);
    if (5 < uVar12) {
      HintPreloadData(iVar22 + iVar1 + 0x20);
    }
    *(uint *)(param_1 + (uVar7 & 7) * 4 + 0x2c) = uVar5;
    uVar7 = uVar7 + 1;
  } while( true );
}

