// FUN_01bb674c @ 01bb674c size=2060 calls_out=7 calls_in=0
// strings: 

void FUN_01bb674c(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *extraout_r1;
  int *extraout_r1_00;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  undefined4 *puVar19;
  int *piVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined1 *local_54;
  undefined1 *local_44;
  int *local_38;
  int *local_34;
  undefined1 *local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  param_5 = (int)param_4 + param_5;
  piVar9 = (int *)(param_5 - 8);
  iVar10 = *(int *)(param_1 + 4);
  uVar11 = *(uint *)(param_1 + 0xc);
  pcVar12 = (char *)(uVar11 + iVar10);
  uVar13 = *(uint *)(param_1 + 200);
  local_44 = (undefined1 *)*param_3;
  local_54 = (undefined1 *)param_3[1];
  piVar14 = *(int **)(param_1 + 0xb4);
  iVar6 = piVar14[1];
  iVar7 = piVar14[3];
  iVar15 = *piVar14;
  piVar14 = (int *)((char *)(iVar6 + iVar7) + -iVar15);
  piVar20 = param_4;
  if (piVar14 == (int *)((int)param_4 - (int)pcVar12)) {
    piVar20 = (int *)((int)param_4 + 1);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  iVar16 = (iVar15 - iVar6) - uVar11;
  local_38 = param_4;
  do {
    while( true ) {
      if (piVar9 <= piVar20) {
        *param_3 = local_44;
        param_3[1] = local_54;
        if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4(param_5 - (int)local_38,piVar14,local_2c ^ DAT_01d53560,0);
        }
        return;
      }
      uVar17 = (int)piVar20 + ((1 - (int)local_44) - iVar10);
      if (uVar17 < uVar11) {
        piVar14 = (int *)(iVar6 + iVar16 + uVar17);
      }
      else {
        piVar14 = (int *)(iVar10 + uVar17);
      }
      iVar8 = uVar11 - 1;
      if ((iVar8 - uVar17 < 3) || (*piVar14 != *(int *)((int)piVar20 + 1))) {
        uVar17 = 0;
      }
      else {
        if (uVar17 < uVar11) {
          iVar2 = iVar15;
        }
        else {
          iVar2 = param_5;
        }
        iVar2 = FUN_01b9b970((int)piVar20 + 5,piVar14 + 1,param_5,iVar2,pcVar12);
        uVar17 = iVar2 + 4;
      }
      local_30 = &DAT_3b9ac9ff;
      if (uVar13 == 5) {
        uVar23 = FUN_01b9cb24(param_1,piVar20,param_5,&local_30);
      }
      else if (uVar13 < 6) {
        uVar23 = FUN_01b9cea0();
      }
      else {
        uVar23 = FUN_01b9c7a8();
      }
      piVar14 = (int *)((ulonglong)uVar23 >> 0x20);
      uVar3 = (uint)uVar23;
      if (uVar17 < uVar3) {
        puVar22 = local_30;
        local_34 = piVar20;
      }
      else {
        puVar22 = (undefined1 *)0x1;
        uVar3 = uVar17;
        local_34 = (int *)((int)piVar20 + 1);
      }
      if (3 < uVar3) break;
      uVar17 = ((uint)((int)piVar20 - (int)local_38) >> 8) + 1;
      piVar20 = (int *)((int)piVar20 + uVar17);
      *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar17);
    }
    do {
      piVar14 = (int *)((int)piVar20 + 1);
      uVar17 = ((int)piVar14 - iVar10) - (int)local_44;
      if (uVar17 < uVar11) {
        piVar5 = (int *)(iVar6 + iVar16 + uVar17);
      }
      else {
        piVar5 = (int *)(iVar10 + uVar17);
      }
      uVar21 = uVar3;
      if (((undefined1 *)0x2 < local_44 + (iVar8 - ((int)piVar14 - iVar10))) &&
         (*piVar5 == *(int *)((int)piVar20 + 1))) {
        if (uVar17 < uVar11) {
          iVar2 = iVar15;
        }
        else {
          iVar2 = param_5;
        }
        uVar17 = FUN_01b9b970((int)piVar20 + 5,piVar5 + 1,param_5,iVar2,pcVar12);
        if (uVar17 < 0xfffffffc &&
            (int)((uVar3 - 10) * 3 + LZCOUNT(puVar22)) < (int)((uVar17 + 4) * 3)) {
          puVar22 = (undefined1 *)0x1;
          uVar21 = uVar17 + 4;
          local_34 = piVar14;
        }
      }
      local_30 = &DAT_3b9ac9ff;
      if (uVar13 == 5) {
        uVar3 = FUN_01b9cb24(param_1,piVar14,param_5,&local_30);
      }
      else if (uVar13 < 6) {
        uVar3 = FUN_01b9cea0();
      }
      else {
        uVar3 = FUN_01b9c7a8();
      }
      iVar2 = LZCOUNT(puVar22) + uVar21 * 4;
      if (uVar3 < 4 || (int)(LZCOUNT(local_30) + uVar3 * 4 + -0x1f) <= iVar2 + -0x1b) {
        if (piVar9 <= piVar14) break;
        piVar14 = (int *)((int)piVar20 + 2);
        uVar17 = ((int)piVar14 - iVar10) - (int)local_44;
        if (uVar17 < uVar11) {
          piVar5 = (int *)(iVar6 + iVar16 + uVar17);
        }
        else {
          piVar5 = (int *)(iVar10 + uVar17);
        }
        if ((undefined1 *)0x2 < local_44 + (iVar8 - ((int)piVar14 - iVar10))) {
          if (*piVar5 == *(int *)((int)piVar20 + 2)) {
            if (uVar17 < uVar11) {
              iVar4 = iVar15;
            }
            else {
              iVar4 = param_5;
            }
            uVar3 = FUN_01b9b970((int)piVar20 + 6,piVar5 + 1,param_5,iVar4,pcVar12);
            uVar17 = uVar3;
            if (0xfffffffb < uVar3) {
              uVar17 = 0;
            }
            if (uVar3 < 0xfffffffc) {
              uVar17 = 1;
            }
            if ((int)((uVar3 + 4) * 4) <= iVar2 + -0x1e) {
              uVar17 = 0;
            }
            if (uVar17 != 0) {
              puVar22 = (undefined1 *)0x1;
              uVar21 = uVar3 + 4;
              local_34 = piVar14;
            }
          }
        }
        local_30 = &DAT_3b9ac9ff;
        if (uVar13 == 5) {
          uVar3 = FUN_01b9cb24(param_1,piVar14,param_5,&local_30);
        }
        else if (uVar13 < 6) {
          uVar3 = FUN_01b9cea0();
        }
        else {
          uVar3 = FUN_01b9c7a8();
        }
        if (uVar3 < 4 ||
            (int)(LZCOUNT(local_30) + uVar3 * 4 + -0x1f) <=
            (int)(LZCOUNT(puVar22) + (uVar21 - 6) * 4)) break;
      }
      piVar20 = piVar14;
      uVar21 = uVar3;
      puVar22 = local_30;
      local_34 = piVar20;
    } while (piVar20 < piVar9);
    if ((undefined1 *)0x3 < puVar22) {
      uVar17 = (int)local_34 + ((3 - (int)puVar22) - iVar10);
      if (uVar17 < uVar11) {
        pcVar18 = (char *)(iVar6 + iVar16 + uVar17);
        pcVar1 = (char *)(iVar6 + iVar7);
      }
      else {
        pcVar18 = (char *)(iVar10 + uVar17);
        pcVar1 = pcVar12;
      }
      for (piVar14 = local_34;
          (local_38 < piVar14 && pcVar1 < pcVar18 &&
          (pcVar18 = pcVar18 + -1, *(char *)((int)piVar14 - 1) == *pcVar18));
          piVar14 = (int *)((int)piVar14 - 1)) {
      }
      uVar21 = (int)local_34 + (uVar21 - (int)piVar14);
      local_54 = local_44;
      local_44 = puVar22 + -3;
      local_34 = piVar14;
    }
    uVar17 = (int)local_34 - (int)local_38;
    if ((int *)(param_5 - 0x20U) < local_34) {
      FUN_01b9b730(param_2[3],local_38,local_34,param_5 + -0x20);
    }
    else {
      FUN_01b9b650(param_2[3],local_38);
      if (0x10 < uVar17) {
        iVar2 = param_2[3];
        FUN_01b9b650(iVar2 + 0x10,local_38 + 4);
        if (0x10 < (int)(uVar17 - 0x10)) {
          uVar3 = iVar2 + 0x20;
          do {
            FUN_01b9b650(uVar3,local_38 + 8);
            iVar4 = uVar3 + 0x10;
            uVar3 = uVar3 + 0x20;
            FUN_01b9b650(iVar4,local_38 + 0xc);
            local_38 = local_38 + 8;
          } while (uVar3 < iVar2 + uVar17);
        }
      }
    }
    param_2[3] = param_2[3] + uVar17;
    puVar19 = (undefined4 *)param_2[1];
    if (0xffff < uVar17) {
      param_2[9] = 1;
      param_2[10] = (int)puVar19 - *param_2 >> 3;
    }
    piVar14 = (int *)(uVar21 - 3);
    *(short *)(puVar19 + 1) = (short)uVar17;
    *puVar19 = puVar22;
    if ((int *)0xffff < piVar14) {
      param_2[9] = 2;
      param_2[10] = (int)puVar19 - *param_2 >> 3;
    }
    *(short *)((int)puVar19 + 6) = (short)piVar14;
    param_2[1] = (int)(puVar19 + 2);
    piVar20 = (int *)((int)local_34 + uVar21);
    if (*(int *)(param_1 + 0xdc) != 0) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    for (; puVar22 = local_54, piVar20 <= piVar9; piVar20 = (int *)((int)piVar20 + iVar2 + 4)) {
      uVar17 = ((int)piVar20 - iVar10) - (int)local_54;
      if (uVar17 < uVar11) {
        piVar14 = (int *)(iVar6 + iVar16 + uVar17);
      }
      else {
        piVar14 = (int *)(iVar10 + uVar17);
      }
      if ((local_54 + (iVar8 - ((int)piVar20 - iVar10)) < (undefined1 *)0x3) ||
         (*piVar14 != *piVar20)) break;
      iVar2 = iVar15;
      if (uVar11 <= uVar17) {
        iVar2 = param_5;
      }
      iVar2 = FUN_01b9b970(piVar20 + 1,piVar14 + 1,param_5,iVar2,pcVar12);
      if ((int *)(param_5 - 0x20U) < piVar20) {
        FUN_01b9b730(param_2[3],piVar20,piVar20,(int *)(param_5 - 0x20U));
        piVar14 = extraout_r1_00;
      }
      else {
        FUN_01b9b650(param_2[3],piVar20);
        piVar14 = extraout_r1;
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
      local_54 = local_44;
      local_44 = puVar22;
    }
    local_38 = piVar20;
  } while( true );
}

