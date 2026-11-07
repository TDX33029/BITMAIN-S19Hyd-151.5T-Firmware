// FUN_01bb6028 @ 01bb6028 size=1812 calls_out=8 calls_in=0
// strings: 

void FUN_01bb6028(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *extraout_r1;
  char *extraout_r1_00;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar13;
  char *pcVar14;
  int *piVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  int *local_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  pcVar3 = (char *)((int)param_4 + param_5);
  piVar4 = (int *)(pcVar3 + -8);
  piVar5 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
  uVar6 = *(uint *)(param_1 + 200);
  puVar7 = (undefined1 *)*param_3;
  puVar8 = (undefined1 *)param_3[1];
  piVar11 = param_4;
  if (param_4 == piVar5) {
    piVar11 = (int *)((int)param_4 + 1);
  }
  iVar12 = (int)piVar11 - *(int *)(param_1 + 4);
  uVar18 = FUN_01b9b818(param_1,iVar12,*(undefined4 *)(param_1 + 0xb8));
  pcVar2 = (char *)((ulonglong)uVar18 >> 0x20);
  puVar13 = (undefined1 *)(iVar12 - (int)uVar18);
  if (puVar13 < puVar8) {
    local_40 = (undefined1 *)0x0;
    local_4c = puVar8;
  }
  else {
    local_4c = (undefined1 *)0x0;
    local_40 = puVar8;
  }
  if (puVar13 < puVar7) {
    local_38 = (undefined1 *)0x0;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  local_48 = puVar7;
  if (puVar7 <= puVar13) {
    local_48 = (undefined1 *)0x0;
    local_38 = puVar7;
  }
  do {
    while( true ) {
      bVar17 = local_38 != (undefined1 *)0x0;
      if (piVar4 <= piVar11) {
        if (local_48 != (undefined1 *)0x0 && bVar17) {
          local_4c = local_48;
        }
        else if (local_38 == (undefined1 *)0x0) {
          local_38 = local_48;
        }
        *param_3 = local_38;
        if (local_40 == (undefined1 *)0x0) {
          local_40 = local_4c;
        }
        param_3[1] = local_40;
        if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4((int)pcVar3 - (int)param_4,pcVar2,local_2c ^ DAT_01d53560,0);
        }
        return;
      }
      pcVar14 = (char *)0x0;
      if (*(int *)((int)piVar11 + (1 - (int)local_38)) == *(int *)((int)piVar11 + 1) && bVar17) {
        iVar12 = FUN_01b9b884((char *)((int)piVar11 + 5),
                              (char *)((int)piVar11 + (5 - (int)local_38)),pcVar3);
        pcVar14 = (char *)(iVar12 + 4);
      }
      local_30 = &DAT_3b9ac9ff;
      if (uVar6 == 5) {
        uVar18 = FUN_01b9daf8(param_1,piVar11,pcVar3,&local_30);
      }
      else if (uVar6 < 6) {
        uVar18 = FUN_01b9dd10();
      }
      else {
        uVar18 = FUN_01b9d8e0();
      }
      pcVar2 = (char *)((ulonglong)uVar18 >> 0x20);
      pcVar1 = (char *)uVar18;
      if (pcVar14 < pcVar1) {
        puVar7 = local_30;
        local_3c = piVar11;
      }
      else {
        puVar7 = (undefined1 *)0x1;
        pcVar1 = pcVar14;
        local_3c = (int *)((int)piVar11 + 1);
      }
      if ((char *)0x3 < pcVar1) break;
      uVar9 = ((uint)((int)piVar11 - (int)param_4) >> 8) + 1;
      piVar11 = (int *)((int)piVar11 + uVar9);
      *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar9);
    }
    do {
      piVar15 = (int *)((int)piVar11 + 1);
      pcVar14 = pcVar1;
      if ((puVar7 != (undefined1 *)0x0) &&
         (*(int *)((int)piVar15 - (int)local_38) == *(int *)((int)piVar11 + 1) && bVar17)) {
        uVar9 = FUN_01b9b884((char *)((int)piVar11 + 5),(char *)((int)piVar15 + (4 - (int)local_38))
                             ,pcVar3);
        if (uVar9 < 0xfffffffc && (int)(pcVar1 + -10) * 3 + LZCOUNT(puVar7) < (int)(uVar9 + 4) * 3)
        {
          puVar7 = (undefined1 *)0x1;
          pcVar14 = (char *)(uVar9 + 4);
          local_3c = piVar15;
        }
      }
      local_30 = &DAT_3b9ac9ff;
      if (uVar6 == 5) {
        pcVar1 = (char *)FUN_01b9daf8(param_1,piVar15,pcVar3,&local_30);
      }
      else if (uVar6 < 6) {
        pcVar1 = (char *)FUN_01b9dd10();
      }
      else {
        pcVar1 = (char *)FUN_01b9d8e0();
      }
      iVar12 = LZCOUNT(puVar7) + (int)pcVar14 * 4;
      if (pcVar1 < (char *)0x4 || LZCOUNT(local_30) + (int)pcVar1 * 4 + -0x1f <= iVar12 + -0x1b) {
        if (piVar4 <= piVar15) break;
        piVar15 = (int *)((int)piVar11 + 2);
        if (puVar7 != (undefined1 *)0x0) {
          if (*(int *)((int)piVar15 - (int)local_38) == *(int *)((int)piVar11 + 2) && bVar17) {
            uVar16 = FUN_01b9b884((char *)((int)piVar11 + 6),
                                  (char *)((int)piVar15 + (4 - (int)local_38)),pcVar3);
            uVar9 = uVar16;
            if (0xfffffffb < uVar16) {
              uVar9 = 0;
            }
            if (uVar16 < 0xfffffffc) {
              uVar9 = 1;
            }
            if ((int)(uVar16 + 4) * 4 <= iVar12 + -0x1e) {
              uVar9 = 0;
            }
            if (uVar9 != 0) {
              puVar7 = (undefined1 *)0x1;
              pcVar14 = (char *)(uVar16 + 4);
              local_3c = piVar15;
            }
          }
        }
        local_30 = &DAT_3b9ac9ff;
        if (uVar6 == 5) {
          pcVar1 = (char *)FUN_01b9daf8(param_1,piVar15,pcVar3,&local_30);
        }
        else if (uVar6 < 6) {
          pcVar1 = (char *)FUN_01b9dd10();
        }
        else {
          pcVar1 = (char *)FUN_01b9d8e0();
        }
        if (pcVar1 < (char *)0x4 ||
            LZCOUNT(local_30) + (int)pcVar1 * 4 + -0x1f <= LZCOUNT(puVar7) + (int)(pcVar14 + -6) * 4
           ) break;
      }
      piVar11 = piVar15;
      pcVar14 = pcVar1;
      puVar7 = local_30;
      local_3c = piVar11;
    } while (piVar11 < piVar4);
    if ((undefined1 *)0x3 < puVar7) {
      piVar15 = (int *)((int)local_3c + (3 - (int)puVar7));
      for (piVar11 = local_3c;
          (param_4 < piVar11 && piVar5 < piVar15 &&
          (piVar15 = (int *)((int)piVar15 + -1), *(char *)((int)piVar11 + -1) == *(char *)piVar15));
          piVar11 = (int *)((int)piVar11 + -1)) {
      }
      pcVar14 = (char *)((int)local_3c + ((int)pcVar14 - (int)piVar11));
      local_40 = local_38;
      local_38 = puVar7 + -3;
      local_3c = piVar11;
    }
    uVar9 = (int)local_3c - (int)param_4;
    piVar15 = (int *)(pcVar3 + -0x20);
    if (piVar15 < local_3c) {
      FUN_01b9b730(param_2[3],param_4,local_3c,piVar15);
    }
    else {
      FUN_01b9b650(param_2[3],param_4);
      if (0x10 < uVar9) {
        iVar12 = param_2[3];
        FUN_01b9b650(iVar12 + 0x10,param_4 + 4);
        if (0x10 < (int)(uVar9 - 0x10)) {
          uVar16 = iVar12 + 0x20;
          do {
            FUN_01b9b650(uVar16,param_4 + 8);
            FUN_01b9b650(uVar16 + 0x10,param_4 + 0xc);
            uVar16 = uVar16 + 0x20;
            param_4 = param_4 + 8;
          } while (uVar16 < iVar12 + uVar9);
        }
      }
    }
    param_2[3] = param_2[3] + uVar9;
    puVar10 = (undefined4 *)param_2[1];
    if (0xffff < uVar9) {
      param_2[9] = 1;
      param_2[10] = (int)puVar10 - *param_2 >> 3;
    }
    pcVar2 = pcVar14 + -3;
    *(short *)(puVar10 + 1) = (short)uVar9;
    *puVar10 = puVar7;
    if ((char *)0xffff < pcVar2) {
      param_2[9] = 2;
      param_2[10] = (int)puVar10 - *param_2 >> 3;
    }
    *(short *)((int)puVar10 + 6) = (short)pcVar2;
    param_2[1] = (int)(puVar10 + 2);
    piVar11 = (int *)((int)local_3c + (int)pcVar14);
    if (*(int *)(param_1 + 0xdc) != 0) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    for (; (puVar7 = local_40, local_40 != (undefined1 *)0x0 && piVar11 <= piVar4 &&
           (*piVar11 == *(int *)((int)piVar11 - (int)local_40)));
        piVar11 = (int *)((int)piVar11 + iVar12 + 4)) {
      iVar12 = FUN_01b9b884(piVar11 + 1,(char *)((int)piVar11 + (4 - (int)local_40)),pcVar3);
      if (piVar15 < piVar11) {
        FUN_01b9b730(param_2[3],piVar11,piVar11,piVar15);
        pcVar2 = extraout_r1_00;
      }
      else {
        FUN_01b9b650(param_2[3],piVar11);
        pcVar2 = extraout_r1;
      }
      puVar10 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar10 + 1) = 0;
      *puVar10 = 1;
      if (0xffff < iVar12 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)puVar10 - *param_2 >> 3;
      }
      *(short *)((int)puVar10 + 6) = (short)(iVar12 + 1U);
      param_2[1] = (int)(puVar10 + 2);
      local_40 = local_38;
      local_38 = puVar7;
    }
    param_4 = piVar11;
  } while( true );
}

