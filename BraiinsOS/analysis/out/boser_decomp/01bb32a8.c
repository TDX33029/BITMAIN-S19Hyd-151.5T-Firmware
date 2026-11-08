// FUN_01bb32a8 @ 01bb32a8 size=1752 calls_out=7 calls_in=0
// strings: 

void FUN_01bb32a8(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  int *extraout_r1;
  int *extraout_r1_00;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 *puVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined1 *local_4c;
  undefined1 *local_44;
  undefined1 *local_40;
  int *local_38;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  param_5 = (int)param_4 + param_5;
  iVar6 = *(int *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 0xc);
  pcVar8 = (char *)(iVar6 + uVar7);
  uVar9 = *(uint *)(param_1 + 200);
  local_44 = (undefined1 *)*param_3;
  local_4c = (undefined1 *)param_3[1];
  piVar10 = *(int **)(param_1 + 0xb4);
  iVar4 = piVar10[1];
  iVar5 = piVar10[3];
  iVar11 = *piVar10;
  piVar10 = (int *)((char *)(iVar4 + iVar5) + -iVar11);
  piVar18 = param_4;
  if (piVar10 == (int *)((int)param_4 - (int)pcVar8)) {
    piVar18 = (int *)((int)param_4 + 1);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  iVar12 = (iVar11 - iVar4) - uVar7;
  iVar13 = uVar7 - 1;
  do {
    while( true ) {
      if ((int *)(param_5 + -8) <= piVar18) {
        *param_3 = local_44;
        param_3[1] = local_4c;
        if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4(param_5 - (int)param_4,piVar10,local_2c ^ DAT_01d53560,0);
        }
        return;
      }
      uVar14 = (int)piVar18 + ((1 - (int)local_44) - iVar6);
      if (uVar14 < uVar7) {
        piVar10 = (int *)(iVar4 + iVar12 + uVar14);
      }
      else {
        piVar10 = (int *)(iVar6 + uVar14);
      }
      if ((iVar13 - uVar14 < 3) || (*piVar10 != *(int *)((int)piVar18 + 1))) {
        uVar14 = 0;
      }
      else {
        if (uVar14 < uVar7) {
          iVar3 = iVar11;
        }
        else {
          iVar3 = param_5;
        }
        iVar3 = FUN_01b9b970((int)piVar18 + 5,piVar10 + 1,param_5,iVar3,pcVar8);
        uVar14 = iVar3 + 4;
      }
      local_30 = &DAT_3b9ac9ff;
      if (uVar9 == 5) {
        uVar21 = FUN_01b9cb24(param_1,piVar18,param_5,&local_30);
      }
      else if (uVar9 < 6) {
        uVar21 = FUN_01b9cea0();
      }
      else {
        uVar21 = FUN_01b9c7a8();
      }
      piVar10 = (int *)((ulonglong)uVar21 >> 0x20);
      if (uVar14 < (uint)uVar21) {
        local_40 = local_30;
        uVar14 = (uint)uVar21;
        local_38 = piVar18;
      }
      else {
        local_38 = (int *)((int)piVar18 + 1);
        local_40 = (undefined1 *)0x1;
      }
      if (3 < uVar14) break;
      uVar14 = ((uint)((int)piVar18 - (int)param_4) >> 8) + 1;
      piVar18 = (int *)((int)piVar18 + uVar14);
      *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar14);
    }
    for (iVar3 = (int)piVar18 + 5; uVar19 = uVar14, param_5 + -3 != iVar3; iVar3 = iVar3 + 1) {
      piVar10 = (int *)(iVar3 - 4);
      uVar20 = ((int)piVar10 - iVar6) - (int)local_44;
      if (uVar20 < uVar7) {
        piVar18 = (int *)(iVar4 + iVar12 + uVar20);
      }
      else {
        piVar18 = (int *)(iVar6 + uVar20);
      }
      if (((undefined1 *)0x2 < local_44 + (iVar13 - ((int)piVar10 - iVar6))) &&
         (*piVar18 == *piVar10)) {
        if (uVar20 < uVar7) {
          iVar17 = iVar11;
        }
        else {
          iVar17 = param_5;
        }
        uVar20 = FUN_01b9b970(iVar3,piVar18 + 1,param_5,iVar17,pcVar8);
        if (uVar20 < 0xfffffffc &&
            (int)((uVar14 - 10) * 3 + LZCOUNT(local_40)) < (int)((uVar20 + 4) * 3)) {
          local_40 = (undefined1 *)0x1;
          uVar19 = uVar20 + 4;
          local_38 = piVar10;
        }
      }
      local_30 = &DAT_3b9ac9ff;
      if (uVar9 == 5) {
        uVar14 = FUN_01b9cb24(param_1,piVar10,param_5,&local_30);
      }
      else if (uVar9 < 6) {
        uVar14 = FUN_01b9cea0();
      }
      else {
        uVar14 = FUN_01b9c7a8();
      }
      if (uVar14 < 4 ||
          (int)(LZCOUNT(local_30) + uVar14 * 4 + -0x1f) <=
          (int)(LZCOUNT(local_40) + uVar19 * 4 + -0x1b)) break;
      local_40 = local_30;
      local_38 = piVar10;
    }
    if ((undefined1 *)0x3 < local_40) {
      uVar14 = (int)local_38 + ((3 - (int)local_40) - iVar6);
      if (uVar14 < uVar7) {
        pcVar15 = (char *)(iVar4 + iVar12 + uVar14);
        pcVar1 = (char *)(iVar4 + iVar5);
      }
      else {
        pcVar15 = (char *)(iVar6 + uVar14);
        pcVar1 = pcVar8;
      }
      for (piVar10 = local_38;
          (param_4 < piVar10 && pcVar1 < pcVar15 &&
          (pcVar15 = pcVar15 + -1, *(char *)((int)piVar10 - 1) == *pcVar15));
          piVar10 = (int *)((int)piVar10 - 1)) {
      }
      local_4c = local_44;
      uVar19 = (int)local_38 + (uVar19 - (int)piVar10);
      local_44 = local_40 + -3;
      local_38 = piVar10;
    }
    uVar14 = (int)local_38 - (int)param_4;
    if ((int *)(param_5 - 0x20U) < local_38) {
      FUN_01b9b730(param_2[3],param_4,local_38,param_5 + -0x20);
    }
    else {
      FUN_01b9b650(param_2[3],param_4);
      if (0x10 < uVar14) {
        iVar3 = param_2[3];
        FUN_01b9b650(iVar3 + 0x10,param_4 + 4);
        if (0x10 < (int)(uVar14 - 0x10)) {
          uVar20 = iVar3 + 0x20;
          do {
            FUN_01b9b650(uVar20,param_4 + 8);
            FUN_01b9b650(uVar20 + 0x10,param_4 + 0xc);
            uVar20 = uVar20 + 0x20;
            param_4 = param_4 + 8;
          } while (uVar20 < iVar3 + uVar14);
        }
      }
    }
    param_2[3] = param_2[3] + uVar14;
    puVar16 = (undefined4 *)param_2[1];
    if (0xffff < uVar14) {
      param_2[9] = 1;
      param_2[10] = (int)puVar16 - *param_2 >> 3;
    }
    piVar10 = (int *)(uVar19 - 3);
    *(short *)(puVar16 + 1) = (short)uVar14;
    *puVar16 = local_40;
    if ((int *)0xffff < piVar10) {
      param_2[9] = 2;
      param_2[10] = (int)puVar16 - *param_2 >> 3;
    }
    *(short *)((int)puVar16 + 6) = (short)piVar10;
    param_2[1] = (int)(puVar16 + 2);
    piVar18 = (int *)((int)local_38 + uVar19);
    if (*(int *)(param_1 + 0xdc) != 0) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    for (; puVar2 = local_4c, piVar18 <= (int *)(param_5 + -8);
        piVar18 = (int *)((int)piVar18 + iVar3 + 4)) {
      uVar14 = ((int)piVar18 - iVar6) - (int)local_4c;
      if (uVar14 < uVar7) {
        piVar10 = (int *)(iVar4 + iVar12 + uVar14);
      }
      else {
        piVar10 = (int *)(iVar6 + uVar14);
      }
      if ((local_4c + (iVar13 - ((int)piVar18 - iVar6)) < (undefined1 *)0x3) ||
         (*piVar10 != *piVar18)) break;
      if (uVar14 < uVar7) {
        iVar3 = iVar11;
      }
      else {
        iVar3 = param_5;
      }
      iVar3 = FUN_01b9b970(piVar18 + 1,piVar10 + 1,param_5,iVar3,pcVar8);
      if ((int *)(param_5 + -0x20) < piVar18) {
        FUN_01b9b730(param_2[3],piVar18,piVar18,(int *)(param_5 + -0x20));
        piVar10 = extraout_r1_00;
      }
      else {
        FUN_01b9b650(param_2[3],piVar18);
        piVar10 = extraout_r1;
      }
      puVar16 = (undefined4 *)param_2[1];
      *(undefined2 *)(puVar16 + 1) = 0;
      *puVar16 = 1;
      if (0xffff < iVar3 + 1U) {
        param_2[9] = 2;
        param_2[10] = (int)puVar16 - *param_2 >> 3;
      }
      *(short *)((int)puVar16 + 6) = (short)(iVar3 + 1U);
      param_2[1] = (int)(puVar16 + 2);
      local_4c = local_44;
      local_44 = puVar2;
    }
    param_4 = piVar18;
  } while( true );
}

