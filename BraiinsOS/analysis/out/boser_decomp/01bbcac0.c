// FUN_01bbcac0 @ 01bbcac0 size=2244 calls_out=8 calls_in=0
// strings: 

void FUN_01bbcac0(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *extraout_r1;
  int *extraout_r1_00;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  char *pcVar15;
  int *piVar16;
  char *pcVar17;
  int *piVar18;
  uint uVar19;
  undefined4 *puVar20;
  int *piVar21;
  char *pcVar22;
  undefined1 *puVar23;
  char *pcVar24;
  undefined8 uVar25;
  int *local_4c;
  int local_40;
  int *local_38;
  int *local_34;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  pcVar24 = (char *)((int)param_4 + param_5);
  piVar6 = (int *)(pcVar24 + -8);
  iVar7 = *(int *)(param_1 + 4);
  pcVar8 = *(char **)(param_1 + 0xc);
  piVar9 = (int *)(pcVar8 + iVar7);
  iVar10 = *(int *)(param_1 + 8);
  pcVar11 = pcVar8 + iVar10;
  iVar12 = *(int *)(param_1 + 0x10);
  uVar13 = *(undefined4 *)(param_1 + 0xb8);
  uVar14 = *(uint *)(param_1 + 200);
  local_38 = (int *)*param_3;
  local_4c = (int *)param_3[1];
  *(undefined4 *)(param_1 + 0xdc) = 0;
  piVar21 = param_4;
  if (param_4 == piVar9) {
    piVar21 = (int *)((int)param_4 + 1);
  }
  piVar16 = param_2;
LAB_01bbcba0:
  while( true ) {
    if (piVar6 <= piVar21) {
      *param_3 = local_38;
      param_3[1] = local_4c;
      if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4((int)pcVar24 - (int)param_4,piVar16,local_2c ^ DAT_01d53560,0);
      }
      return;
    }
    local_40 = (int)piVar21 - iVar7;
    iVar1 = FUN_01b9b7d4(param_1,local_40 + 1,uVar13);
    pcVar15 = (char *)((1 - (int)local_38) + local_40);
    iVar2 = iVar10;
    if (pcVar8 <= pcVar15) {
      iVar2 = iVar7;
    }
    pcVar22 = (char *)0x0;
    if (local_38 <= (int *)((local_40 + 1) - iVar1) && (char *)0x2 < pcVar8 + (-1 - (int)pcVar15)) {
      if (*(int *)((int)piVar21 + 1) == *(int *)(pcVar15 + iVar2)) {
        if (pcVar15 < pcVar8) {
          pcVar22 = pcVar11;
        }
        else {
          pcVar22 = pcVar24;
        }
        iVar2 = FUN_01b9b970((char *)((int)piVar21 + 5),pcVar15 + iVar2 + 4,pcVar24,pcVar22,piVar9);
        pcVar22 = (char *)(iVar2 + 4);
      }
      else {
        pcVar22 = (char *)0x0;
      }
    }
    local_30 = &DAT_3b9ac9ff;
    if (uVar14 == 5) {
      uVar25 = FUN_01b9d424(param_1,piVar21,pcVar24,&local_30);
    }
    else if (uVar14 < 6) {
      uVar25 = FUN_01b9d6b8();
    }
    else {
      uVar25 = FUN_01b9d190();
    }
    piVar16 = (int *)((ulonglong)uVar25 >> 0x20);
    pcVar15 = (char *)uVar25;
    if (pcVar22 < pcVar15) {
      puVar23 = local_30;
      local_34 = piVar21;
    }
    else {
      puVar23 = (undefined1 *)0x1;
      pcVar15 = pcVar22;
      local_34 = (int *)((int)piVar21 + 1);
    }
    if ((char *)0x3 < pcVar15) break;
    uVar4 = (uint)((int)piVar21 - (int)param_4) >> 8;
    piVar21 = (int *)((int)piVar21 + uVar4 + 1);
    *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar4);
  }
  do {
    piVar16 = (int *)((int)piVar21 + 1);
    iVar2 = local_40 + 1;
    pcVar22 = pcVar15;
    if (puVar23 != (undefined1 *)0x0) {
      iVar3 = FUN_01b9b7d4(param_1,iVar2,uVar13);
      pcVar5 = (char *)(iVar2 - (int)local_38);
      iVar1 = iVar7;
      if (pcVar5 < pcVar8) {
        iVar1 = iVar10;
      }
      if ((local_38 <= (int *)(iVar2 - iVar3) &&
           (char *)0x2 < (char *)((int)local_38 + (int)(pcVar8 + (-1 - iVar2)))) &&
         (*(int *)((int)piVar21 + 1) == *(int *)(pcVar5 + iVar1))) {
        pcVar17 = pcVar11;
        if (pcVar8 <= pcVar5) {
          pcVar17 = pcVar24;
        }
        uVar4 = FUN_01b9b970((char *)((int)piVar21 + 5),pcVar5 + iVar1 + 4,pcVar24,pcVar17,piVar9);
        if (uVar4 < 0xfffffffc && (int)(pcVar15 + -10) * 3 + LZCOUNT(puVar23) < (int)(uVar4 + 4) * 3
           ) {
          puVar23 = (undefined1 *)0x1;
          local_34 = (int *)((int)piVar21 + 1);
          pcVar22 = (char *)(uVar4 + 4);
        }
      }
    }
    local_30 = &DAT_3b9ac9ff;
    if (uVar14 == 5) {
      pcVar15 = (char *)FUN_01b9d424(param_1,(char *)((int)piVar21 + 1),pcVar24,&local_30);
    }
    else if (uVar14 < 6) {
      pcVar15 = (char *)FUN_01b9d6b8();
    }
    else {
      pcVar15 = (char *)FUN_01b9d190();
    }
    iVar1 = LZCOUNT(puVar23) + (int)pcVar22 * 4;
    if (pcVar15 < (char *)0x4 || LZCOUNT(local_30) + (int)pcVar15 * 4 + -0x1f <= iVar1 + -0x1b) {
      if (piVar6 <= (int *)((int)piVar21 + 1)) break;
      piVar16 = (int *)((int)piVar21 + 2);
      local_40 = local_40 + 2;
      if (puVar23 != (undefined1 *)0x0) {
        iVar3 = FUN_01b9b7d4(param_1,local_40,uVar13);
        pcVar15 = (char *)(local_40 - (int)local_38);
        iVar2 = iVar7;
        if (pcVar15 < pcVar8) {
          iVar2 = iVar10;
        }
        if (local_38 <= (int *)(local_40 - iVar3) &&
            (char *)0x2 < (char *)((int)local_38 + (int)(pcVar8 + (-1 - local_40)))) {
          if (*(int *)((int)piVar21 + 2) == *(int *)(pcVar15 + iVar2)) {
            pcVar5 = pcVar11;
            if (pcVar8 <= pcVar15) {
              pcVar5 = pcVar24;
            }
            uVar19 = FUN_01b9b970((char *)((int)piVar21 + 6),pcVar15 + iVar2 + 4,pcVar24,pcVar5,
                                  piVar9);
            uVar4 = uVar19;
            if (0xfffffffb < uVar19) {
              uVar4 = 0;
            }
            if (uVar19 < 0xfffffffc) {
              uVar4 = 1;
            }
            if ((int)(uVar19 + 4) * 4 <= iVar1 + -0x1e) {
              uVar4 = 0;
            }
            if (uVar4 != 0) {
              puVar23 = (undefined1 *)0x1;
              pcVar22 = (char *)(uVar19 + 4);
              local_34 = piVar16;
            }
          }
        }
      }
      local_30 = &DAT_3b9ac9ff;
      if (uVar14 == 5) {
        pcVar15 = (char *)FUN_01b9d424(param_1,piVar16,pcVar24,&local_30);
      }
      else if (uVar14 < 6) {
        pcVar15 = (char *)FUN_01b9d6b8();
      }
      else {
        pcVar15 = (char *)FUN_01b9d190();
      }
      if (pcVar15 < (char *)0x4 ||
          LZCOUNT(local_30) + (int)pcVar15 * 4 + -0x1f <= LZCOUNT(puVar23) + (int)(pcVar22 + -6) * 4
         ) break;
    }
    else {
      local_40 = iVar2;
    }
    pcVar22 = pcVar15;
    puVar23 = local_30;
    local_34 = piVar16;
    if (piVar6 <= piVar16) break;
    piVar21 = piVar16;
  } while( true );
  if ((undefined1 *)0x3 < puVar23) {
    pcVar15 = (char *)((int)local_34 + ((3 - (int)puVar23) - iVar7));
    piVar21 = (int *)(iVar10 + iVar12);
    iVar2 = iVar10;
    if (pcVar8 <= pcVar15) {
      piVar21 = piVar9;
      iVar2 = iVar7;
    }
    piVar18 = (int *)(pcVar15 + iVar2);
    for (piVar16 = local_34;
        (param_4 < piVar16 && piVar21 < piVar18 &&
        (piVar18 = (int *)((int)piVar18 + -1), *(char *)((int)piVar16 + -1) == *(char *)piVar18));
        piVar16 = (int *)((int)piVar16 + -1)) {
    }
    pcVar22 = (char *)((int)local_34 + ((int)pcVar22 - (int)piVar16));
    local_4c = local_38;
    local_38 = (int *)(puVar23 + -3);
    local_34 = piVar16;
  }
  uVar4 = (int)local_34 - (int)param_4;
  if (pcVar24 + -0x20 < local_34) {
    FUN_01b9b730(param_2[3],param_4,local_34,pcVar24 + -0x20);
  }
  else {
    FUN_01b9b650(param_2[3],param_4);
    if (0x10 < uVar4) {
      iVar2 = param_2[3];
      FUN_01b9b650(iVar2 + 0x10,param_4 + 4);
      if (0x10 < (int)(uVar4 - 0x10)) {
        uVar19 = iVar2 + 0x20;
        do {
          FUN_01b9b650(uVar19,param_4 + 8);
          FUN_01b9b650(uVar19 + 0x10,param_4 + 0xc);
          uVar19 = uVar19 + 0x20;
          param_4 = param_4 + 8;
        } while (uVar19 < iVar2 + uVar4);
      }
    }
  }
  param_2[3] = param_2[3] + uVar4;
  puVar20 = (undefined4 *)param_2[1];
  if (0xffff < uVar4) {
    param_2[9] = 1;
    param_2[10] = (int)puVar20 - *param_2 >> 3;
  }
  piVar16 = (int *)(pcVar22 + -3);
  *(short *)(puVar20 + 1) = (short)uVar4;
  *puVar20 = puVar23;
  if ((int *)0xffff < piVar16) {
    param_2[9] = 2;
    param_2[10] = (int)puVar20 - *param_2 >> 3;
  }
  *(short *)((int)puVar20 + 6) = (short)piVar16;
  param_2[1] = (int)(puVar20 + 2);
  piVar21 = (int *)((int)local_34 + (int)pcVar22);
  if (*(int *)(param_1 + 0xdc) != 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  while( true ) {
    piVar18 = local_4c;
    if (piVar6 < piVar21) break;
    iVar3 = (int)piVar21 - iVar7;
    iVar1 = FUN_01b9b7d4(param_1,iVar3,uVar13);
    pcVar15 = (char *)(iVar3 - (int)local_4c);
    iVar2 = iVar10;
    if (pcVar8 <= pcVar15) {
      iVar2 = iVar7;
    }
    piVar16 = local_4c;
    if (((int *)(iVar3 - iVar1) < local_4c ||
         (char *)((int)local_4c + (int)(pcVar8 + (-1 - iVar3))) < &DAT_00000003) ||
       (piVar16 = (int *)(pcVar15 + iVar2), *piVar21 != *(int *)(pcVar15 + iVar2))) break;
    pcVar22 = pcVar11;
    if (pcVar8 <= pcVar15) {
      pcVar22 = pcVar24;
    }
    iVar2 = FUN_01b9b970(piVar21 + 1,piVar16 + 1,pcVar24,pcVar22,piVar9);
    if (pcVar24 + -0x20 < piVar21) {
      FUN_01b9b730(param_2[3],piVar21,piVar21,pcVar24 + -0x20);
      piVar16 = extraout_r1_00;
    }
    else {
      FUN_01b9b650(param_2[3],piVar21);
      piVar16 = extraout_r1;
    }
    puVar20 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar20 + 1) = 0;
    *puVar20 = 1;
    if (0xffff < iVar2 + 1U) {
      param_2[9] = 2;
      param_2[10] = (int)puVar20 - *param_2 >> 3;
    }
    *(short *)((int)puVar20 + 6) = (short)(iVar2 + 1U);
    param_2[1] = (int)(puVar20 + 2);
    local_4c = local_38;
    local_38 = piVar18;
    piVar21 = (int *)((int)piVar21 + iVar2 + 4);
  }
  param_4 = piVar21;
  goto LAB_01bbcba0;
}

