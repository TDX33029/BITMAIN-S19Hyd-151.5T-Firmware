// FUN_01bbc010 @ 01bbc010 size=2708 calls_out=14 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01bbc010(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  uint *puVar1;
  int *piVar2;
  int *extraout_r1;
  int *extraout_r1_00;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  int *piVar19;
  undefined4 *puVar20;
  int *piVar21;
  int iVar22;
  char *pcVar23;
  int iVar24;
  char *pcVar25;
  uint uVar26;
  char *pcVar27;
  undefined1 *puVar28;
  uint uVar29;
  char *pcVar30;
  int iVar31;
  bool bVar32;
  undefined8 uVar33;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_40;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  pcVar30 = (char *)((int)param_4 + param_5);
  piVar4 = (int *)(pcVar30 + -0x10);
  iVar5 = *(int *)(param_1 + 4);
  pcVar6 = *(char **)(param_1 + 0xc);
  piVar7 = (int *)(pcVar6 + iVar5);
  iVar8 = *(int *)(param_1 + 8);
  pcVar9 = pcVar6 + iVar8;
  iVar10 = *(int *)(param_1 + 0x10);
  uVar11 = *(undefined4 *)(param_1 + 0xb8);
  uVar12 = *(uint *)(param_1 + 200);
  uVar13 = *(uint *)(param_1 + 0xc4);
  uVar14 = uVar13;
  if (5 < uVar13) {
    uVar14 = 6;
  }
  if (uVar14 < 4) {
    uVar14 = 4;
  }
  local_50 = (int *)*param_3;
  local_54 = (int *)param_3[1];
  uVar3 = *(uint *)(param_1 + 0x1c);
  piVar21 = param_4;
  if (param_4 == piVar7) {
    piVar21 = (int *)((int)param_4 + 1);
  }
  iVar31 = *(int *)(param_1 + 0x5c);
  iVar22 = *(int *)(param_1 + 0x28);
  piVar2 = *(int **)(param_1 + 0x24);
  pcVar15 = (char *)0x0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if ((char *)(uVar3 + iVar5) <= pcVar30 + -0x10) {
    pcVar15 = pcVar30 + -0x10 + (1 - (int)(uVar3 + iVar5));
  }
  if (pcVar15 < (char *)0x9) {
    uVar16 = uVar3 + (int)pcVar15;
  }
  else {
    uVar16 = uVar3 + 8;
  }
  do {
    if (uVar16 <= uVar3) {
      local_40 = param_4;
      do {
        while( true ) {
          if (piVar4 <= piVar21) {
            *param_3 = local_50;
            param_3[1] = local_54;
            if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01be31f4((int)pcVar30 - (int)local_40,piVar2,local_2c ^ DAT_01d53560,0);
            }
            return;
          }
          pcVar27 = (char *)((int)piVar21 + (1 - iVar5));
          iVar31 = FUN_01b9b7d4(param_1,pcVar27,uVar11);
          pcVar15 = (char *)((int)piVar21 + ((1 - (int)local_50) - iVar5));
          iVar22 = iVar8;
          if (pcVar6 <= pcVar15) {
            iVar22 = iVar5;
          }
          pcVar25 = (char *)0x0;
          if (local_50 <= pcVar27 + -iVar31 && (char *)0x2 < pcVar6 + (-1 - (int)pcVar15)) {
            if (*(int *)((int)piVar21 + 1) == *(int *)(pcVar15 + iVar22)) {
              pcVar27 = pcVar9;
              if (pcVar6 <= pcVar15) {
                pcVar27 = pcVar30;
              }
              iVar22 = FUN_01b9b970((char *)((int)piVar21 + 5),pcVar15 + iVar22 + 4,pcVar30,pcVar27,
                                    piVar7);
              pcVar25 = (char *)(iVar22 + 4);
            }
            else {
              pcVar25 = (char *)0x0;
            }
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar12 == 5) {
            if (uVar13 == 5) {
              uVar33 = FUN_01ba96bc(param_1,piVar21,pcVar30,&local_30);
            }
            else if (uVar13 < 6) {
              uVar33 = FUN_01ba9db8();
            }
            else {
              uVar33 = FUN_01ba8f5c();
            }
          }
          else if (uVar12 < 6) {
            if (uVar13 == 5) {
              uVar33 = FUN_01baaacc(param_1,piVar21,pcVar30,&local_30);
            }
            else if (uVar13 < 6) {
              uVar33 = FUN_01bab08c();
            }
            else {
              uVar33 = FUN_01baa49c();
            }
          }
          else if (uVar13 == 5) {
            uVar33 = FUN_01ba8180(param_1,piVar21,pcVar30,&local_30);
          }
          else if (uVar13 < 6) {
            uVar33 = FUN_01ba8878();
          }
          else {
            uVar33 = FUN_01ba7a28();
          }
          piVar2 = (int *)((ulonglong)uVar33 >> 0x20);
          pcVar27 = (char *)uVar33;
          if (pcVar25 < pcVar27) {
            puVar28 = local_30;
            local_4c = piVar21;
          }
          else {
            puVar28 = (undefined1 *)0x1;
            pcVar27 = pcVar25;
            local_4c = (int *)((int)piVar21 + 1);
          }
          if ((char *)0x3 < pcVar27) break;
          uVar3 = (uint)((int)piVar21 - (int)local_40) >> 8;
          piVar21 = (int *)((int)piVar21 + uVar3 + 1);
          *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar3);
        }
        for (pcVar25 = (char *)((int)piVar21 + 5); pcVar23 = pcVar27, pcVar30 + -0xb != pcVar25;
            pcVar25 = pcVar25 + 1) {
          piVar21 = (int *)(pcVar25 + -4);
          if (puVar28 != (undefined1 *)0x0) {
            iVar31 = FUN_01b9b7d4(param_1,(char *)((int)local_50 + (int)pcVar15),uVar11);
            iVar22 = iVar5;
            if (pcVar15 < pcVar6) {
              iVar22 = iVar8;
            }
            if ((local_50 <= (char *)((int)local_50 + (int)pcVar15) + -iVar31 &&
                 (char *)0x2 < pcVar6 + (-1 - (int)pcVar15)) &&
               (*(int *)(pcVar25 + -4) == *(int *)(pcVar15 + iVar22))) {
              pcVar18 = pcVar9;
              if (pcVar6 <= pcVar15) {
                pcVar18 = pcVar30;
              }
              uVar3 = FUN_01b9b970(pcVar25,pcVar15 + iVar22 + 4,pcVar30,pcVar18,piVar7);
              if (uVar3 < 0xfffffffc &&
                  (int)(pcVar27 + -10) * 3 + LZCOUNT(puVar28) < (int)(uVar3 + 4) * 3) {
                puVar28 = (undefined1 *)0x1;
                pcVar23 = (char *)(uVar3 + 4);
                local_4c = piVar21;
              }
            }
          }
          local_30 = &DAT_3b9ac9ff;
          if (uVar12 == 5) {
            if (uVar13 == 5) {
              pcVar27 = (char *)FUN_01ba96bc(param_1,piVar21,pcVar30,&local_30);
            }
            else if (uVar13 < 6) {
              pcVar27 = (char *)FUN_01ba9db8();
            }
            else {
              pcVar27 = (char *)FUN_01ba8f5c();
            }
          }
          else if (uVar12 < 6) {
            if (uVar13 == 5) {
              pcVar27 = (char *)FUN_01baaacc(param_1,piVar21,pcVar30,&local_30);
            }
            else if (uVar13 < 6) {
              pcVar27 = (char *)FUN_01bab08c();
            }
            else {
              pcVar27 = (char *)FUN_01baa49c();
            }
          }
          else if (uVar13 == 5) {
            pcVar27 = (char *)FUN_01ba8180(param_1,piVar21,pcVar30,&local_30);
          }
          else if (uVar13 < 6) {
            pcVar27 = (char *)FUN_01ba8878();
          }
          else {
            pcVar27 = (char *)FUN_01ba7a28();
          }
          if (pcVar27 < (char *)0x4 ||
              LZCOUNT(local_30) + (int)pcVar27 * 4 + -0x1f <=
              LZCOUNT(puVar28) + (int)pcVar23 * 4 + -0x1b) break;
          pcVar15 = pcVar15 + 1;
          puVar28 = local_30;
          local_4c = piVar21;
        }
        if ((undefined1 *)0x3 < puVar28) {
          pcVar15 = (char *)((int)local_4c + ((3 - (int)puVar28) - iVar5));
          piVar21 = (int *)(iVar8 + iVar10);
          iVar22 = iVar8;
          if (pcVar6 <= pcVar15) {
            piVar21 = piVar7;
            iVar22 = iVar5;
          }
          piVar19 = (int *)(pcVar15 + iVar22);
          for (piVar2 = local_4c;
              (local_40 < piVar2 && piVar21 < piVar19 &&
              (piVar19 = (int *)((int)piVar19 + -1), *(char *)((int)piVar2 + -1) == *(char *)piVar19
              )); piVar2 = (int *)((int)piVar2 + -1)) {
          }
          pcVar23 = (char *)((int)local_4c + ((int)pcVar23 - (int)piVar2));
          local_54 = local_50;
          local_50 = (int *)(puVar28 + -3);
          local_4c = piVar2;
        }
        uVar3 = (int)local_4c - (int)local_40;
        if (pcVar30 + -0x20 < local_4c) {
          FUN_01b9b730(param_2[3],local_40,local_4c,pcVar30 + -0x20);
        }
        else {
          FUN_01b9b650(param_2[3],local_40);
          if (0x10 < uVar3) {
            iVar22 = param_2[3];
            FUN_01b9b650(iVar22 + 0x10,local_40 + 4);
            if (0x10 < (int)(uVar3 - 0x10)) {
              uVar16 = iVar22 + 0x20;
              do {
                FUN_01b9b650(uVar16,local_40 + 8);
                FUN_01b9b650(uVar16 + 0x10,local_40 + 0xc);
                uVar16 = uVar16 + 0x20;
                local_40 = local_40 + 8;
              } while (uVar16 < iVar22 + uVar3);
            }
          }
        }
        param_2[3] = param_2[3] + uVar3;
        puVar20 = (undefined4 *)param_2[1];
        if (0xffff < uVar3) {
          param_2[9] = 1;
          param_2[10] = (int)puVar20 - *param_2 >> 3;
        }
        piVar2 = (int *)(pcVar23 + -3);
        *(short *)(puVar20 + 1) = (short)uVar3;
        *puVar20 = puVar28;
        if ((int *)0xffff < piVar2) {
          param_2[9] = 2;
          param_2[10] = (int)puVar20 - *param_2 >> 3;
        }
        *(short *)((int)puVar20 + 6) = (short)piVar2;
        param_2[1] = (int)(puVar20 + 2);
        piVar21 = (int *)((int)local_4c + (int)pcVar23);
        if (*(int *)(param_1 + 0xdc) != 0) {
          pcVar15 = *(char **)(param_1 + 0x1c);
          piVar19 = (int *)(pcVar15 + iVar5);
          iVar31 = *(int *)(param_1 + 0x5c);
          bVar32 = piVar19 <= piVar4;
          iVar22 = *(int *)(param_1 + 0x28);
          if (bVar32) {
            piVar19 = (int *)((int)piVar4 - (int)piVar19);
          }
          piVar2 = *(int **)(param_1 + 0x24);
          if (bVar32) {
            pcVar27 = (char *)((int)piVar19 + 1);
          }
          else {
            pcVar27 = (char *)0x0;
          }
          if (pcVar27 < &DAT_00000009) {
            pcVar27 = pcVar15 + (int)pcVar27;
          }
          else {
            pcVar27 = pcVar15 + 8;
          }
          for (; pcVar15 < pcVar27; pcVar15 = pcVar15 + 1) {
            puVar1 = (uint *)(pcVar15 + iVar5);
            if (uVar12 == 5) {
              uVar29 = puVar1[1];
              uVar3 = 0xbb000000;
              uVar16 = *(uint *)(pcVar15 + iVar5);
LAB_01bbc904:
              uVar29 = uVar3 * uVar29 + uVar16 * -0x30e44324 +
                       (int)((ulonglong)uVar3 * (ulonglong)uVar16 >> 0x20) ^
                       *(uint *)(param_1 + 0x54);
              uVar3 = ((uint)((ulonglong)uVar3 * (ulonglong)uVar16) ^ *(uint *)(param_1 + 0x50)) >>
                      (0x38U - (int)piVar2 & 0xff) | uVar29 << ((uint)(piVar2 + -6) & 0xff) |
                      uVar29 >> (0x18U - (int)piVar2 & 0xff);
            }
            else {
              if (5 < uVar12) {
                uVar16 = *puVar1;
                uVar29 = puVar1[1];
                uVar3 = 0xbf9b0000;
                goto LAB_01bbc904;
              }
              uVar3 = (*(uint *)(param_1 + 0x50) ^ *(int *)(pcVar15 + iVar5) * -0x61c8864f) >>
                      (0x18U - (int)piVar2 & 0xff);
            }
            iVar24 = (uVar3 >> 8) << (uVar14 & 0xff);
            HintPreloadData(iVar31 + iVar24 * 4);
            if (4 < uVar13) {
              HintPreloadData(iVar31 + iVar24 * 4 + 0x40);
            }
            HintPreloadData(iVar22 + iVar24);
            if (5 < uVar13) {
              HintPreloadData(iVar22 + iVar24 + 0x20);
            }
            *(uint *)(param_1 + ((uint)pcVar15 & 7) * 4 + 0x2c) = uVar3;
          }
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        for (; piVar19 = local_50, piVar21 <= piVar4; piVar21 = (int *)((int)piVar21 + iVar22 + 4))
        {
          iVar24 = (int)piVar21 - iVar5;
          iVar31 = FUN_01b9b7d4(param_1,iVar24,uVar11);
          pcVar15 = (char *)(iVar24 - (int)local_54);
          iVar22 = iVar8;
          if (pcVar6 <= pcVar15) {
            iVar22 = iVar5;
          }
          piVar2 = local_54;
          if (((int *)(iVar24 - iVar31) < local_54 ||
               (char *)((int)local_54 + (int)(pcVar6 + (-1 - iVar24))) < &DAT_00000003) ||
             (piVar2 = (int *)(pcVar15 + iVar22), *piVar21 != *(int *)(pcVar15 + iVar22))) break;
          pcVar27 = pcVar9;
          if (pcVar6 <= pcVar15) {
            pcVar27 = pcVar30;
          }
          iVar22 = FUN_01b9b970(piVar21 + 1,piVar2 + 1,pcVar30,pcVar27,piVar7);
          if (pcVar30 + -0x20 < piVar21) {
            FUN_01b9b730(param_2[3],piVar21,piVar21,pcVar30 + -0x20);
            piVar2 = extraout_r1_00;
          }
          else {
            FUN_01b9b650(param_2[3],piVar21);
            piVar2 = extraout_r1;
          }
          puVar20 = (undefined4 *)param_2[1];
          *(undefined2 *)(puVar20 + 1) = 0;
          *puVar20 = 1;
          if (0xffff < iVar22 + 1U) {
            param_2[9] = 2;
            param_2[10] = (int)puVar20 - *param_2 >> 3;
            piVar2 = param_2;
          }
          *(short *)((int)puVar20 + 6) = (short)(iVar22 + 1U);
          param_2[1] = (int)(puVar20 + 2);
          local_50 = local_54;
          local_54 = piVar19;
        }
        local_40 = piVar21;
      } while( true );
    }
    puVar1 = (uint *)(uVar3 + iVar5);
    if (uVar12 == 5) {
      uVar26 = puVar1[1];
      uVar29 = 0xbb000000;
      uVar17 = *(uint *)(uVar3 + iVar5);
LAB_01bbc240:
      uVar26 = uVar29 * uVar26 + uVar17 * -0x30e44324 +
               (int)((ulonglong)uVar29 * (ulonglong)uVar17 >> 0x20) ^ *(uint *)(param_1 + 0x54);
      uVar29 = ((uint)((ulonglong)uVar29 * (ulonglong)uVar17) ^ *(uint *)(param_1 + 0x50)) >>
               (0x38U - (int)piVar2 & 0xff) | uVar26 << ((uint)(piVar2 + -6) & 0xff) |
               uVar26 >> (0x18U - (int)piVar2 & 0xff);
    }
    else {
      if (5 < uVar12) {
        uVar17 = *puVar1;
        uVar26 = puVar1[1];
        uVar29 = 0xbf9b0000;
        goto LAB_01bbc240;
      }
      uVar29 = (*(uint *)(param_1 + 0x50) ^ *(int *)(uVar3 + iVar5) * -0x61c8864f) >>
               (0x18U - (int)piVar2 & 0xff);
    }
    iVar24 = (uVar29 >> 8) << (uVar14 & 0xff);
    HintPreloadData(iVar31 + iVar24 * 4);
    if (4 < uVar13) {
      HintPreloadData(iVar31 + iVar24 * 4 + 0x40);
    }
    HintPreloadData(iVar22 + iVar24);
    if (5 < uVar13) {
      HintPreloadData(iVar22 + iVar24 + 0x20);
    }
    uVar17 = uVar3 & 7;
    uVar3 = uVar3 + 1;
    *(uint *)(param_1 + uVar17 * 4 + 0x2c) = uVar29;
  } while( true );
}

