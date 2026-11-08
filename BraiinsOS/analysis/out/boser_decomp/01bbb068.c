// FUN_01bbb068 @ 01bbb068 size=2148 calls_out=14 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01bbb068(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *extraout_r1;
  char *extraout_r1_00;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  undefined4 *puVar22;
  int *piVar23;
  char *pcVar24;
  int *piVar25;
  uint uVar26;
  char *pcVar27;
  int *piVar28;
  int iVar29;
  int iVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined1 *local_54;
  char *local_44;
  char *local_40;
  undefined1 *local_30;
  uint local_2c;
  
  iVar30 = *(int *)(param_1 + 4);
  local_2c = DAT_01d53560;
  pcVar8 = (char *)((int)param_4 + param_5);
  piVar9 = (int *)(pcVar8 + -0x10);
  pcVar10 = *(char **)(param_1 + 0xc);
  piVar11 = (int *)(pcVar10 + iVar30);
  iVar12 = *(int *)(param_1 + 8);
  iVar13 = *(int *)(param_1 + 0x10);
  uVar14 = *(undefined4 *)(param_1 + 0xb8);
  uVar15 = *(uint *)(param_1 + 200);
  uVar16 = *(uint *)(param_1 + 0xc4);
  uVar17 = uVar16;
  if (5 < uVar16) {
    uVar17 = 6;
  }
  if (uVar17 < 4) {
    uVar17 = 4;
  }
  local_40 = (char *)*param_3;
  local_44 = (char *)param_3[1];
  pcVar18 = (char *)0x0;
  iVar4 = *(int *)(param_1 + 0x5c);
  piVar28 = param_4;
  if (param_4 == piVar11) {
    piVar28 = (int *)((int)param_4 + 1);
  }
  uVar7 = *(uint *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  pcVar6 = *(char **)(param_1 + 0x24);
  if ((int *)(uVar7 + iVar30) <= piVar9) {
    pcVar18 = (char *)((int)piVar9 + (1 - (int)(uVar7 + iVar30)));
  }
  if (pcVar18 < (char *)0x9) {
    uVar19 = uVar7 + (int)pcVar18;
  }
  else {
    uVar19 = uVar7 + 8;
  }
  for (; uVar7 < uVar19; uVar7 = uVar7 + 1) {
    puVar3 = (uint *)(uVar7 + iVar30);
    if (uVar15 == 5) {
      uVar2 = puVar3[1];
      uVar21 = *(uint *)(uVar7 + iVar30);
      uVar26 = 0xbb000000;
LAB_01bbb2ac:
      uVar2 = uVar26 * uVar2 + uVar21 * -0x30e44324 +
              (int)((ulonglong)uVar26 * (ulonglong)uVar21 >> 0x20) ^ *(uint *)(param_1 + 0x54);
      uVar26 = ((uint)((ulonglong)uVar26 * (ulonglong)uVar21) ^ *(uint *)(param_1 + 0x50)) >>
               (0x38U - (int)pcVar6 & 0xff) | uVar2 << ((uint)(pcVar6 + -0x18) & 0xff) |
               uVar2 >> (0x18U - (int)pcVar6 & 0xff);
    }
    else {
      if (5 < uVar15) {
        uVar21 = *puVar3;
        uVar2 = puVar3[1];
        uVar26 = 0xbf9b0000;
        goto LAB_01bbb2ac;
      }
      uVar26 = (*(uint *)(param_1 + 0x50) ^ *(int *)(uVar7 + iVar30) * -0x61c8864f) >>
               (0x18U - (int)pcVar6 & 0xff);
    }
    iVar29 = (uVar26 >> 8) << (uVar17 & 0xff);
    HintPreloadData(iVar4 + iVar29 * 4);
    if (4 < uVar16) {
      HintPreloadData(iVar4 + iVar29 * 4 + 0x40);
    }
    HintPreloadData(iVar5 + iVar29);
    if (5 < uVar16) {
      HintPreloadData(iVar5 + iVar29 + 0x20);
    }
    *(uint *)(param_1 + (uVar7 & 7) * 4 + 0x2c) = uVar26;
  }
  piVar20 = (int *)(pcVar8 + -0x20);
  do {
    while( true ) {
      if (piVar9 <= piVar28) {
        *param_3 = local_40;
        param_3[1] = local_44;
        if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4((int)pcVar8 - (int)param_4,pcVar6,local_2c ^ DAT_01d53560,0);
        }
        return;
      }
      pcVar6 = (char *)((int)piVar28 + (1 - iVar30));
      iVar5 = FUN_01b9b7d4(param_1,pcVar6,uVar14);
      pcVar18 = (char *)((int)piVar28 + ((1 - (int)local_40) - iVar30));
      iVar4 = iVar12;
      if (pcVar10 <= pcVar18) {
        iVar4 = iVar30;
      }
      if ((pcVar6 + -iVar5 < local_40 || (uint)((int)(pcVar10 + -1) - (int)pcVar18) < 3) ||
         (*(int *)((int)piVar28 + 1) != *(int *)(pcVar18 + iVar4))) break;
      if (pcVar18 < pcVar10) {
        pcVar6 = pcVar10 + iVar12;
      }
      else {
        pcVar6 = pcVar8;
      }
      iVar4 = FUN_01b9b970((char *)((int)piVar28 + 5),pcVar18 + iVar4 + 4,pcVar8,pcVar6,piVar11);
      pcVar18 = (char *)(iVar4 + 4);
      local_54 = (undefined1 *)0x1;
      piVar23 = (int *)((int)piVar28 + 1);
LAB_01bbb3ac:
      uVar7 = (int)piVar23 - (int)param_4;
      if (piVar20 < piVar23) {
        FUN_01b9b730(param_2[3],param_4,piVar23,piVar20);
      }
      else {
        FUN_01b9b650(param_2[3],param_4);
        if (0x10 < uVar7) {
          iVar4 = param_2[3];
          FUN_01b9b650(iVar4 + 0x10,param_4 + 4);
          if (0x10 < (int)(uVar7 - 0x10)) {
            uVar19 = iVar4 + 0x20;
            do {
              FUN_01b9b650(uVar19,param_4 + 8);
              FUN_01b9b650(uVar19 + 0x10,param_4 + 0xc);
              uVar19 = uVar19 + 0x20;
              param_4 = param_4 + 8;
            } while (uVar19 < iVar4 + uVar7);
          }
        }
      }
      param_2[3] = param_2[3] + uVar7;
      puVar22 = (undefined4 *)param_2[1];
      if (0xffff < uVar7) {
        param_2[9] = 1;
        param_2[10] = (int)puVar22 - *param_2 >> 3;
      }
      pcVar6 = pcVar18 + -3;
      *(short *)(puVar22 + 1) = (short)uVar7;
      *puVar22 = local_54;
      if ((char *)0xffff < pcVar6) {
        param_2[9] = 2;
        param_2[10] = (int)puVar22 - *param_2 >> 3;
      }
      *(short *)((int)puVar22 + 6) = (short)pcVar6;
      param_2[1] = (int)(puVar22 + 2);
      piVar28 = (int *)((int)piVar23 + (int)pcVar18);
      if (*(int *)(param_1 + 0xdc) != 0) {
        pcVar18 = *(char **)(param_1 + 0x1c);
        iVar4 = *(int *)(param_1 + 0x5c);
        piVar23 = (int *)(pcVar18 + iVar30);
        bVar31 = piVar23 <= piVar9;
        iVar5 = *(int *)(param_1 + 0x28);
        if (bVar31) {
          piVar23 = (int *)((int)piVar9 - (int)piVar23);
        }
        pcVar6 = *(char **)(param_1 + 0x24);
        if (bVar31) {
          pcVar24 = (char *)((int)piVar23 + 1);
        }
        else {
          pcVar24 = (char *)0x0;
        }
        if (pcVar24 < &DAT_00000009) {
          pcVar24 = pcVar18 + (int)pcVar24;
        }
        else {
          pcVar24 = pcVar18 + 8;
        }
        for (; pcVar18 < pcVar24; pcVar18 = pcVar18 + 1) {
          puVar3 = (uint *)(pcVar18 + iVar30);
          if (uVar15 == 5) {
            uVar19 = puVar3[1];
            uVar26 = *(uint *)(pcVar18 + iVar30);
            uVar7 = 0xbb000000;
LAB_01bbb73c:
            uVar19 = uVar7 * uVar19 + uVar26 * -0x30e44324 +
                     (int)((ulonglong)uVar7 * (ulonglong)uVar26 >> 0x20) ^ *(uint *)(param_1 + 0x54)
            ;
            uVar7 = ((uint)((ulonglong)uVar7 * (ulonglong)uVar26) ^ *(uint *)(param_1 + 0x50)) >>
                    (0x38U - (int)pcVar6 & 0xff) | uVar19 << ((uint)(pcVar6 + -0x18) & 0xff) |
                    uVar19 >> (0x18U - (int)pcVar6 & 0xff);
          }
          else {
            if (5 < uVar15) {
              uVar26 = *puVar3;
              uVar19 = puVar3[1];
              uVar7 = 0xbf9b0000;
              goto LAB_01bbb73c;
            }
            uVar7 = (*(uint *)(param_1 + 0x50) ^ *(int *)(pcVar18 + iVar30) * -0x61c8864f) >>
                    (0x18U - (int)pcVar6 & 0xff);
          }
          iVar29 = (uVar7 >> 8) << (uVar17 & 0xff);
          HintPreloadData(iVar4 + iVar29 * 4);
          if (4 < uVar16) {
            HintPreloadData(iVar4 + iVar29 * 4 + 0x40);
          }
          HintPreloadData(iVar5 + iVar29);
          if (5 < uVar16) {
            HintPreloadData(iVar5 + iVar29 + 0x20);
          }
          *(uint *)(param_1 + ((uint)pcVar18 & 7) * 4 + 0x2c) = uVar7;
        }
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      for (; pcVar18 = local_40, piVar28 <= piVar9; piVar28 = (int *)((int)piVar28 + iVar4 + 4)) {
        iVar29 = (int)piVar28 - iVar30;
        iVar5 = FUN_01b9b7d4(param_1,iVar29,uVar14);
        pcVar24 = (char *)(iVar29 - (int)local_44);
        iVar4 = iVar12;
        if (pcVar10 <= pcVar24) {
          iVar4 = iVar30;
        }
        pcVar6 = local_44;
        if (((char *)(iVar29 - iVar5) < local_44 ||
             (uint)((int)(local_44 + (int)(pcVar10 + -1)) - iVar29) < 3) ||
           (pcVar6 = pcVar24 + iVar4, *piVar28 != *(int *)(pcVar24 + iVar4))) break;
        pcVar27 = pcVar8;
        if (pcVar24 < pcVar10) {
          pcVar27 = pcVar10 + iVar12;
        }
        iVar4 = FUN_01b9b970(piVar28 + 1,pcVar6 + 4,pcVar8,pcVar27,piVar11);
        if (piVar20 < piVar28) {
          FUN_01b9b730(param_2[3],piVar28,piVar28,piVar20);
          pcVar6 = extraout_r1_00;
        }
        else {
          FUN_01b9b650(param_2[3],piVar28);
          pcVar6 = extraout_r1;
        }
        puVar22 = (undefined4 *)param_2[1];
        *(undefined2 *)(puVar22 + 1) = 0;
        *puVar22 = 1;
        if (0xffff < iVar4 + 1U) {
          param_2[9] = 2;
          param_2[10] = (int)puVar22 - *param_2 >> 3;
        }
        *(short *)((int)puVar22 + 6) = (short)(iVar4 + 1U);
        param_2[1] = (int)(puVar22 + 2);
        local_40 = local_44;
        local_44 = pcVar18;
      }
      param_4 = piVar28;
    }
    local_30 = &DAT_3b9ac9ff;
    if (uVar15 == 5) {
      if (uVar16 == 5) {
        uVar32 = FUN_01ba96bc(param_1,piVar28,pcVar8,&local_30);
      }
      else if (uVar16 < 6) {
        uVar32 = FUN_01ba9db8();
      }
      else {
        uVar32 = FUN_01ba8f5c();
      }
    }
    else if (uVar15 < 6) {
      if (uVar16 == 5) {
        uVar32 = FUN_01baaacc(param_1,piVar28,pcVar8);
      }
      else if (uVar16 < 6) {
        uVar32 = FUN_01bab08c();
      }
      else {
        uVar32 = FUN_01baa49c();
      }
    }
    else if (uVar16 == 5) {
      uVar32 = FUN_01ba8180(param_1,piVar28,pcVar8);
    }
    else if (uVar16 < 6) {
      uVar32 = FUN_01ba8878();
    }
    else {
      uVar32 = FUN_01ba7a28();
    }
    pcVar6 = (char *)((ulonglong)uVar32 >> 0x20);
    pcVar18 = (char *)uVar32;
    if ((pcVar18 != (char *)0x0) && (local_54 = local_30, (char *)0x3 < pcVar18)) {
      piVar23 = piVar28;
      if ((undefined1 *)0x3 < local_30) {
        pcVar6 = (char *)((int)piVar28 + ((3 - (int)local_30) - iVar30));
        piVar1 = (int *)(iVar12 + iVar13);
        iVar4 = iVar12;
        if (pcVar10 <= pcVar6) {
          piVar1 = piVar11;
          iVar4 = iVar30;
        }
        piVar25 = (int *)(pcVar6 + iVar4);
        for (; (param_4 < piVar23 && piVar1 < piVar25 &&
               (piVar25 = (int *)((int)piVar25 + -1),
               *(char *)((int)piVar23 + -1) == *(char *)piVar25));
            piVar23 = (int *)((int)piVar23 + -1)) {
        }
        local_44 = local_40;
        pcVar18 = (char *)((int)piVar28 + ((int)pcVar18 - (int)piVar23));
        local_40 = local_30 + -3;
      }
      goto LAB_01bbb3ac;
    }
    uVar7 = (uint)((int)piVar28 - (int)param_4) >> 8;
    piVar28 = (int *)((int)piVar28 + uVar7 + 1);
    *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar7);
  } while( true );
}

