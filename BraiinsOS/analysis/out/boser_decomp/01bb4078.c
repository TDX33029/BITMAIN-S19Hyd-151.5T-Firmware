// FUN_01bb4078 @ 01bb4078 size=2556 calls_out=14 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01bb4078(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  char *extraout_r1;
  char *extraout_r1_00;
  undefined1 *extraout_r2;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  char *pcVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  int *piVar21;
  undefined1 *puVar22;
  char *pcVar23;
  char *pcVar24;
  int iVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined1 *local_58;
  undefined1 *local_50;
  int *local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  int *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  pcVar24 = (char *)((int)param_4 + param_5);
  piVar9 = (int *)(pcVar24 + -0x10);
  iVar10 = *(int *)(param_1 + 4);
  piVar11 = (int *)(iVar10 + *(int *)(param_1 + 0xc));
  uVar12 = *(uint *)(param_1 + 200);
  uVar13 = *(uint *)(param_1 + 0xc4);
  uVar14 = uVar13;
  if (5 < uVar13) {
    uVar14 = 6;
  }
  if (uVar14 < 4) {
    uVar14 = 4;
  }
  piVar21 = param_4;
  if (param_4 == piVar11) {
    piVar21 = (int *)((int)param_4 + 1);
  }
  puVar15 = (undefined1 *)*param_3;
  puVar16 = (undefined1 *)param_3[1];
  iVar2 = FUN_01b9b818(param_1,(int)piVar21 - iVar10,*(undefined4 *)(param_1 + 0xb8));
  puVar22 = (undefined1 *)(((int)piVar21 - iVar10) - iVar2);
  if (puVar22 < puVar16) {
    local_40 = (undefined1 *)0x0;
    local_58 = puVar16;
  }
  else {
    local_58 = (undefined1 *)0x0;
    local_40 = puVar16;
  }
  if (puVar22 < puVar15) {
    local_34 = (undefined1 *)0x0;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  puVar16 = extraout_r2;
  local_50 = puVar15;
  if (puVar15 <= puVar22) {
    local_50 = (undefined1 *)0x0;
    puVar16 = puVar15;
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  if (puVar15 <= puVar22) {
    local_34 = puVar16;
  }
  uVar8 = *(uint *)(param_1 + 0x1c);
  iVar25 = *(int *)(param_1 + 0x28);
  pcVar6 = *(char **)(param_1 + 0x24);
  if (pcVar24 + -0x10 < (char *)(uVar8 + iVar10)) {
    pcVar17 = (char *)0x0;
  }
  else {
    pcVar17 = pcVar24 + -0x10 + (1 - (int)(uVar8 + iVar10));
  }
  if (pcVar17 < (char *)0x9) {
    uVar18 = uVar8 + (int)pcVar17;
  }
  else {
    uVar18 = uVar8 + 8;
  }
  do {
    if (uVar18 <= uVar8) {
      local_38 = param_4;
      do {
        while( true ) {
          bVar26 = local_34 != (undefined1 *)0x0;
          if (piVar9 <= piVar21) {
            if (local_50 != (undefined1 *)0x0 && bVar26) {
              local_58 = local_50;
            }
            else if (local_34 == (undefined1 *)0x0) {
              local_34 = local_50;
            }
            *param_3 = local_34;
            if (local_40 == (undefined1 *)0x0) {
              local_40 = local_58;
            }
            param_3[1] = local_40;
            if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01be31f4((int)pcVar24 - (int)local_38,pcVar6,local_2c ^ DAT_01d53560,0);
            }
            return;
          }
          pcVar17 = (char *)0x0;
          if (*(int *)((int)piVar21 + (1 - (int)local_34)) == *(int *)((int)piVar21 + 1) && bVar26)
          {
            iVar2 = FUN_01b9b884((char *)((int)piVar21 + 5),
                                 (char *)((int)piVar21 + (5 - (int)local_34)),pcVar24);
            pcVar17 = (char *)(iVar2 + 4);
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar12 == 5) {
            if (uVar13 == 5) {
              uVar27 = FUN_01bad09c(param_1,piVar21,pcVar24,&local_30);
            }
            else if (uVar13 < 6) {
              uVar27 = FUN_01bad708();
            }
            else {
              uVar27 = FUN_01bac9c8();
            }
          }
          else if (uVar12 < 6) {
            if (uVar13 == 5) {
              uVar27 = FUN_01bae2fc(param_1,piVar21,pcVar24,&local_30);
            }
            else if (uVar13 < 6) {
              uVar27 = FUN_01bae82c();
            }
            else {
              uVar27 = FUN_01badd60();
            }
          }
          else if (uVar13 == 5) {
            uVar27 = FUN_01babd0c(param_1,piVar21,pcVar24,&local_30);
          }
          else if (uVar13 < 6) {
            uVar27 = FUN_01bac370();
          }
          else {
            uVar27 = FUN_01bab640();
          }
          pcVar6 = (char *)((ulonglong)uVar27 >> 0x20);
          if (pcVar17 < (char *)uVar27) {
            local_48 = local_30;
            pcVar17 = (char *)uVar27;
            local_4c = piVar21;
          }
          else {
            local_4c = (int *)((int)piVar21 + 1);
            local_48 = (undefined1 *)0x1;
          }
          if ((char *)0x3 < pcVar17) break;
          uVar8 = ((uint)((int)piVar21 - (int)local_38) >> 8) + 1;
          piVar21 = (int *)((int)piVar21 + uVar8);
          *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar8);
        }
        for (pcVar6 = (char *)((int)piVar21 + 5); pcVar23 = pcVar17, pcVar24 + -0xb != pcVar6;
            pcVar6 = pcVar6 + 1) {
          piVar21 = (int *)(pcVar6 + -4);
          if ((local_48 != (undefined1 *)0x0) &&
             (*(int *)(pcVar6 + (-4 - (int)local_34)) == *(int *)(pcVar6 + -4) && bVar26)) {
            uVar8 = FUN_01b9b884(pcVar6,(int)pcVar6 - (int)local_34,pcVar24);
            if (uVar8 < 0xfffffffc &&
                (int)(pcVar17 + -10) * 3 + LZCOUNT(local_48) < (int)(uVar8 + 4) * 3) {
              local_48 = (undefined1 *)0x1;
              pcVar23 = (char *)(uVar8 + 4);
              local_4c = piVar21;
            }
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar12 == 5) {
            if (uVar13 == 5) {
              pcVar17 = (char *)FUN_01bad09c(param_1,piVar21,pcVar24,&local_30);
            }
            else if (uVar13 < 6) {
              pcVar17 = (char *)FUN_01bad708();
            }
            else {
              pcVar17 = (char *)FUN_01bac9c8();
            }
          }
          else if (uVar12 < 6) {
            if (uVar13 == 5) {
              pcVar17 = (char *)FUN_01bae2fc(param_1,piVar21,pcVar24,&local_30);
            }
            else if (uVar13 < 6) {
              pcVar17 = (char *)FUN_01bae82c();
            }
            else {
              pcVar17 = (char *)FUN_01badd60();
            }
          }
          else if (uVar13 == 5) {
            pcVar17 = (char *)FUN_01babd0c(param_1,piVar21,pcVar24,&local_30);
          }
          else if (uVar13 < 6) {
            pcVar17 = (char *)FUN_01bac370();
          }
          else {
            pcVar17 = (char *)FUN_01bab640();
          }
          if (pcVar17 < (char *)0x4 ||
              LZCOUNT(local_30) + (int)pcVar17 * 4 + -0x1f <=
              LZCOUNT(local_48) + (int)pcVar23 * 4 + -0x1b) break;
          local_48 = local_30;
          local_4c = piVar21;
        }
        if ((undefined1 *)0x3 < local_48) {
          piVar7 = (int *)((int)local_4c + (3 - (int)local_48));
          for (piVar21 = local_4c;
              (local_38 < piVar21 && piVar11 < piVar7 &&
              (piVar7 = (int *)((int)piVar7 + -1), *(char *)((int)piVar21 + -1) == *(char *)piVar7))
              ; piVar21 = (int *)((int)piVar21 + -1)) {
          }
          pcVar23 = (char *)((int)local_4c + ((int)pcVar23 - (int)piVar21));
          local_40 = local_34;
          local_34 = local_48 + -3;
          local_4c = piVar21;
        }
        uVar8 = (int)local_4c - (int)local_38;
        if (pcVar24 + -0x20 < local_4c) {
          FUN_01b9b730(param_2[3],local_38,local_4c,pcVar24 + -0x20);
        }
        else {
          FUN_01b9b650(param_2[3],local_38);
          if (0x10 < uVar8) {
            iVar2 = param_2[3];
            FUN_01b9b650(iVar2 + 0x10,local_38 + 4);
            if (0x10 < (int)(uVar8 - 0x10)) {
              uVar18 = iVar2 + 0x20;
              do {
                FUN_01b9b650(uVar18,local_38 + 8);
                iVar25 = uVar18 + 0x10;
                uVar18 = uVar18 + 0x20;
                FUN_01b9b650(iVar25,local_38 + 0xc);
                local_38 = local_38 + 8;
              } while (uVar18 < iVar2 + uVar8);
            }
          }
        }
        param_2[3] = param_2[3] + uVar8;
        puVar19 = (undefined4 *)param_2[1];
        if (0xffff < uVar8) {
          param_2[9] = 1;
          param_2[10] = (int)puVar19 - *param_2 >> 3;
        }
        pcVar6 = pcVar23 + -3;
        *(short *)(puVar19 + 1) = (short)uVar8;
        *puVar19 = local_48;
        if ((char *)0xffff < pcVar6) {
          param_2[9] = 2;
          param_2[10] = (int)puVar19 - *param_2 >> 3;
        }
        *(short *)((int)puVar19 + 6) = (short)pcVar6;
        param_2[1] = (int)(puVar19 + 2);
        piVar21 = (int *)((int)local_4c + (int)pcVar23);
        if (*(int *)(param_1 + 0xdc) != 0) {
          iVar2 = *(int *)(param_1 + 0x5c);
          iVar25 = *(int *)(param_1 + 0x28);
          uVar8 = *(uint *)(param_1 + 0x1c);
          pcVar6 = *(char **)(param_1 + 0x24);
          if (piVar9 < (int *)(uVar8 + iVar10)) {
            pcVar17 = (char *)0x0;
          }
          else {
            pcVar17 = (char *)((int)piVar9 + (1 - (int)(uVar8 + iVar10)));
          }
          if (pcVar17 < (char *)0x9) {
            uVar18 = uVar8 + (int)pcVar17;
          }
          else {
            uVar18 = uVar8 + 8;
          }
          for (; uVar8 < uVar18; uVar8 = uVar8 + 1) {
            puVar3 = (uint *)(uVar8 + iVar10);
            if (uVar12 == 5) {
              uVar4 = puVar3[1];
              uVar20 = *(uint *)(uVar8 + iVar10);
              uVar5 = 0xbb000000;
LAB_01bb4968:
              uVar4 = uVar5 * uVar4 + uVar20 * -0x30e44324 +
                      (int)((ulonglong)uVar5 * (ulonglong)uVar20 >> 0x20) ^
                      *(uint *)(param_1 + 0x54);
              uVar5 = ((uint)((ulonglong)uVar5 * (ulonglong)uVar20) ^ *(uint *)(param_1 + 0x50)) >>
                      (0x38U - (int)pcVar6 & 0xff) | uVar4 << ((uint)(pcVar6 + -0x18) & 0xff) |
                      uVar4 >> (0x18U - (int)pcVar6 & 0xff);
            }
            else {
              if (5 < uVar12) {
                uVar20 = *puVar3;
                uVar4 = puVar3[1];
                uVar5 = 0xbf9b0000;
                goto LAB_01bb4968;
              }
              uVar5 = (*(uint *)(param_1 + 0x50) ^ *(int *)(uVar8 + iVar10) * -0x61c8864f) >>
                      (0x18U - (int)pcVar6 & 0xff);
            }
            iVar1 = (uVar5 >> 8) << (uVar14 & 0xff);
            HintPreloadData(iVar2 + iVar1 * 4);
            if (4 < uVar13) {
              HintPreloadData(iVar2 + iVar1 * 4 + 0x40);
            }
            HintPreloadData(iVar25 + iVar1);
            if (5 < uVar13) {
              HintPreloadData(iVar25 + iVar1 + 0x20);
            }
            *(uint *)(param_1 + (uVar8 & 7) * 4 + 0x2c) = uVar5;
          }
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        for (; (puVar15 = local_40, local_40 != (undefined1 *)0x0 && piVar21 <= piVar9 &&
               (*piVar21 == *(int *)((int)piVar21 - (int)local_40)));
            piVar21 = (int *)((int)piVar21 + iVar2 + 4)) {
          iVar2 = FUN_01b9b884(piVar21 + 1,(char *)((int)piVar21 + (4 - (int)local_40)),pcVar24);
          if (pcVar24 + -0x20 < piVar21) {
            FUN_01b9b730(param_2[3],piVar21,piVar21,pcVar24 + -0x20);
            pcVar6 = extraout_r1_00;
          }
          else {
            FUN_01b9b650(param_2[3],piVar21);
            pcVar6 = extraout_r1;
          }
          puVar19 = (undefined4 *)param_2[1];
          *(undefined2 *)(puVar19 + 1) = 0;
          *puVar19 = 1;
          if (0xffff < iVar2 + 1U) {
            param_2[9] = 2;
            param_2[10] = (int)puVar19 - *param_2 >> 3;
          }
          *(short *)((int)puVar19 + 6) = (short)(iVar2 + 1U);
          param_2[1] = (int)(puVar19 + 2);
          local_40 = local_34;
          local_34 = puVar15;
        }
        local_38 = piVar21;
      } while( true );
    }
    puVar3 = (uint *)(uVar8 + iVar10);
    if (uVar12 == 5) {
      uVar20 = puVar3[1];
      uVar5 = 0xbb000000;
      uVar4 = *(uint *)(uVar8 + iVar10);
LAB_01bb432c:
      uVar20 = uVar5 * uVar20 + uVar4 * -0x30e44324 +
               (int)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20) ^ *(uint *)(param_1 + 0x54);
      uVar5 = ((uint)((ulonglong)uVar5 * (ulonglong)uVar4) ^ *(uint *)(param_1 + 0x50)) >>
              (0x38U - (int)pcVar6 & 0xff) | uVar20 << ((uint)(pcVar6 + -0x18) & 0xff) |
              uVar20 >> (0x18U - (int)pcVar6 & 0xff);
    }
    else {
      if (5 < uVar12) {
        uVar4 = *puVar3;
        uVar20 = puVar3[1];
        uVar5 = 0xbf9b0000;
        goto LAB_01bb432c;
      }
      uVar5 = (*(uint *)(param_1 + 0x50) ^ *(int *)(uVar8 + iVar10) * -0x61c8864f) >>
              (0x18U - (int)pcVar6 & 0xff);
    }
    iVar1 = (uVar5 >> 8) << (uVar14 & 0xff);
    HintPreloadData(iVar2 + iVar1 * 4);
    if (4 < uVar13) {
      HintPreloadData(iVar2 + iVar1 * 4 + 0x40);
    }
    HintPreloadData(iVar25 + iVar1);
    if (5 < uVar13) {
      HintPreloadData(iVar25 + iVar1 + 0x20);
    }
    uVar4 = uVar8 & 7;
    uVar8 = uVar8 + 1;
    *(uint *)(param_1 + uVar4 * 4 + 0x2c) = uVar5;
  } while( true );
}

