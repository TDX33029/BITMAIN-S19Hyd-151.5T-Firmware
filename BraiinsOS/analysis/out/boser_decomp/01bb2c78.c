// FUN_01bb2c78 @ 01bb2c78 size=1568 calls_out=8 calls_in=0
// strings: 

void FUN_01bb2c78(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  char *pcVar1;
  int *piVar2;
  char *extraout_r1;
  char *extraout_r1_00;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar13;
  char *pcVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined1 *local_4c;
  undefined1 *local_44;
  int *local_40;
  undefined1 *local_3c;
  undefined1 *local_34;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  pcVar3 = (char *)((int)param_4 + param_5);
  piVar4 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
  uVar5 = *(uint *)(param_1 + 200);
  puVar6 = (undefined1 *)*param_3;
  puVar7 = (undefined1 *)param_3[1];
  piVar11 = param_4;
  if (param_4 == piVar4) {
    piVar11 = (int *)((int)param_4 + 1);
  }
  iVar12 = (int)piVar11 - *(int *)(param_1 + 4);
  uVar17 = FUN_01b9b818(param_1,iVar12,*(undefined4 *)(param_1 + 0xb8));
  pcVar9 = (char *)((ulonglong)uVar17 >> 0x20);
  puVar13 = (undefined1 *)(iVar12 - (int)uVar17);
  if (puVar13 < puVar7) {
    local_3c = (undefined1 *)0x0;
    local_4c = puVar7;
  }
  else {
    local_4c = (undefined1 *)0x0;
    local_3c = puVar7;
  }
  if (puVar13 < puVar6) {
    local_34 = (undefined1 *)0x0;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  local_44 = puVar6;
  if (puVar6 <= puVar13) {
    local_44 = (undefined1 *)0x0;
    local_34 = puVar6;
  }
  do {
    while( true ) {
      bVar16 = local_34 != (undefined1 *)0x0;
      if (pcVar3 + -8 <= piVar11) {
        if (local_44 != (undefined1 *)0x0 && bVar16) {
          local_4c = local_44;
        }
        else if (local_34 == (undefined1 *)0x0) {
          local_34 = local_44;
        }
        *param_3 = local_34;
        if (local_3c == (undefined1 *)0x0) {
          local_3c = local_4c;
        }
        param_3[1] = local_3c;
        if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4((int)pcVar3 - (int)param_4,pcVar9,local_2c ^ DAT_01d53560,0);
        }
        return;
      }
      pcVar14 = (char *)0x0;
      if (*(int *)((int)piVar11 + (1 - (int)local_34)) == *(int *)((int)piVar11 + 1) && bVar16) {
        iVar12 = FUN_01b9b884((char *)((int)piVar11 + 5),
                              (char *)((int)piVar11 + (5 - (int)local_34)),pcVar3);
        pcVar14 = (char *)(iVar12 + 4);
      }
      local_30 = &DAT_3b9ac9ff;
      if (uVar5 == 5) {
        uVar17 = FUN_01b9daf8(param_1,piVar11,pcVar3,&local_30);
      }
      else if (uVar5 < 6) {
        uVar17 = FUN_01b9dd10();
      }
      else {
        uVar17 = FUN_01b9d8e0();
      }
      pcVar9 = (char *)((ulonglong)uVar17 >> 0x20);
      pcVar1 = (char *)uVar17;
      if (pcVar14 < pcVar1) {
        puVar6 = local_30;
        local_40 = piVar11;
      }
      else {
        puVar6 = (undefined1 *)0x1;
        pcVar1 = pcVar14;
        local_40 = (int *)((int)piVar11 + 1);
      }
      if ((char *)0x3 < pcVar1) break;
      uVar10 = ((uint)((int)piVar11 - (int)param_4) >> 8) + 1;
      piVar11 = (int *)((int)piVar11 + uVar10);
      *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar10);
    }
    for (pcVar9 = (char *)((int)piVar11 + 5); pcVar14 = pcVar1, pcVar3 + -3 != pcVar9;
        pcVar9 = pcVar9 + 1) {
      piVar11 = (int *)(pcVar9 + -4);
      if ((puVar6 != (undefined1 *)0x0) &&
         (*(int *)(pcVar9 + (-4 - (int)local_34)) == *(int *)(pcVar9 + -4) && bVar16)) {
        uVar10 = FUN_01b9b884(pcVar9,(int)pcVar9 - (int)local_34,pcVar3);
        if (uVar10 < 0xfffffffc && (int)(pcVar1 + -10) * 3 + LZCOUNT(puVar6) < (int)(uVar10 + 4) * 3
           ) {
          puVar6 = (undefined1 *)0x1;
          pcVar14 = (char *)(uVar10 + 4);
          local_40 = piVar11;
        }
      }
      local_30 = &DAT_3b9ac9ff;
      if (uVar5 == 5) {
        pcVar1 = (char *)FUN_01b9daf8(param_1,piVar11,pcVar3,&local_30);
      }
      else if (uVar5 < 6) {
        pcVar1 = (char *)FUN_01b9dd10();
      }
      else {
        pcVar1 = (char *)FUN_01b9d8e0();
      }
      if (pcVar1 < (char *)0x4 ||
          LZCOUNT(local_30) + (int)pcVar1 * 4 + -0x1f <= LZCOUNT(puVar6) + (int)pcVar14 * 4 + -0x1b)
      break;
      puVar6 = local_30;
      local_40 = piVar11;
    }
    if ((undefined1 *)0x3 < puVar6) {
      piVar2 = (int *)((int)local_40 + (3 - (int)puVar6));
      for (piVar11 = local_40;
          (param_4 < piVar11 && piVar4 < piVar2 &&
          (piVar2 = (int *)((int)piVar2 + -1), *(char *)((int)piVar11 + -1) == *(char *)piVar2));
          piVar11 = (int *)((int)piVar11 + -1)) {
      }
      pcVar14 = (char *)((int)local_40 + ((int)pcVar14 - (int)piVar11));
      local_3c = local_34;
      local_34 = puVar6 + -3;
      local_40 = piVar11;
    }
    uVar10 = (int)local_40 - (int)param_4;
    piVar2 = (int *)(pcVar3 + -0x20);
    if (piVar2 < local_40) {
      FUN_01b9b730(param_2[3],param_4,local_40,piVar2);
    }
    else {
      FUN_01b9b650(param_2[3],param_4);
      if (0x10 < uVar10) {
        iVar12 = param_2[3];
        FUN_01b9b650(iVar12 + 0x10,param_4 + 4);
        if (0x10 < (int)(uVar10 - 0x10)) {
          uVar15 = iVar12 + 0x20;
          do {
            FUN_01b9b650(uVar15,param_4 + 8);
            FUN_01b9b650(uVar15 + 0x10,param_4 + 0xc);
            uVar15 = uVar15 + 0x20;
            param_4 = param_4 + 8;
          } while (uVar15 < iVar12 + uVar10);
        }
      }
    }
    param_2[3] = param_2[3] + uVar10;
    puVar8 = (undefined4 *)param_2[1];
    if (0xffff < uVar10) {
      param_2[9] = 1;
      param_2[10] = (int)puVar8 - *param_2 >> 3;
    }
    pcVar9 = pcVar14 + -3;
    *(short *)(puVar8 + 1) = (short)uVar10;
    *puVar8 = puVar6;
    if ((char *)0xffff < pcVar9) {
      param_2[9] = 2;
      param_2[10] = (int)puVar8 - *param_2 >> 3;
    }
    *(short *)((int)puVar8 + 6) = (short)pcVar9;
    param_2[1] = (int)(puVar8 + 2);
    piVar11 = (int *)((int)local_40 + (int)pcVar14);
    if (*(int *)(param_1 + 0xdc) != 0) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    for (; (puVar6 = local_3c, local_3c != (undefined1 *)0x0 && piVar11 <= pcVar3 + -8 &&
           (*piVar11 == *(int *)((int)piVar11 - (int)local_3c)));
        piVar11 = (int *)((int)piVar11 + iVar12 + 4)) {
      iVar12 = FUN_01b9b884(piVar11 + 1,(char *)((int)piVar11 + (4 - (int)local_3c)),pcVar3);
      if (piVar2 < piVar11) {
        FUN_01b9b730(param_2[3],piVar11,piVar11,piVar2);
        pcVar9 = extraout_r1_00;
      }
      else {
        FUN_01b9b650(param_2[3],piVar11);
        pcVar9 = extraout_r1;
      }
      puVar8 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar8 + 1) = 0;
      *puVar8 = 1;
      if (0xffff < iVar12 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)puVar8 - *param_2 >> 3;
      }
      *(short *)((int)puVar8 + 6) = (short)(iVar12 + 1U);
      param_2[1] = (int)(puVar8 + 2);
      local_3c = local_34;
      local_34 = puVar6;
    }
    param_4 = piVar11;
  } while( true );
}

