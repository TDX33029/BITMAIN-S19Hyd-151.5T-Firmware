// FUN_00b0a040 @ 00b0a040 size=1856 calls_out=17 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b0a040(undefined4 *param_1,int param_2,int *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int extraout_r1;
  int iVar7;
  uint *extraout_r2;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  uint *puVar18;
  uint *puVar19;
  undefined4 uVar20;
  int *piVar21;
  int *piVar22;
  uint *puVar23;
  int *piVar24;
  uint *local_d8;
  uint *local_d4;
  int *local_d0;
  uint *local_cc;
  uint *local_c8;
  uint *local_c4;
  uint *local_c0;
  uint *local_bc;
  uint local_b8;
  undefined4 local_b4;
  int *local_b0;
  int *local_a8;
  uint *local_a4;
  int *local_a0;
  int *local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int *local_88;
  uint *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int *local_70;
  uint *local_6c;
  uint *puStack_68;
  uint *local_64;
  uint local_60;
  uint *local_5c;
  int local_58;
  int local_54;
  uint local_4c;
  uint *local_48;
  uint *puStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  piVar16 = (int *)param_4[1];
  iVar7 = param_4[2];
  FUN_01318534(&local_88,piVar16);
  uVar13 = 0;
  iVar3 = (int)param_3 * 0xc;
  if ((int *)0xaaaaaaa < param_3) {
LAB_00b0a090:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar13,iVar3);
  }
  if (iVar3 == 0) {
    puVar1 = (uint *)&SUB_00000004;
    local_a8 = (int *)0x0;
  }
  else {
    uVar13 = 4;
    puVar1 = (uint *)FUN_01298504(iVar3,4);
    local_a8 = param_3;
    if (puVar1 == (uint *)0x0) goto LAB_00b0a090;
  }
  piVar8 = (int *)0x0;
  if (param_3 != (int *)0x0) {
    puVar2 = puVar1 + 1;
    piVar8 = param_3;
    do {
      *puVar2 = 4;
      puVar2[-1] = 0;
      piVar8 = (int *)((int)piVar8 - 1);
      puVar2[1] = 0;
      puVar2 = puVar2 + 3;
    } while (piVar8 != (int *)0x0);
    piVar8 = param_3;
  }
  local_d0 = local_88;
  local_d4 = local_84;
  puVar2 = local_84 + local_80 * 3;
  local_d8 = local_84;
  local_cc = puVar2;
  local_a4 = puVar1;
  local_a0 = piVar8;
  if (local_80 != 0) {
    puVar18 = local_84;
    do {
      puVar19 = puVar18 + 3;
      uVar12 = *puVar18;
      if (uVar12 == 0x80000000) goto LAB_00b0a24c;
      uVar15 = puVar18[1];
      if (param_3 != (int *)0x0) {
        uVar14 = puVar18[2];
        piVar21 = (int *)0x0;
        do {
          puVar10 = (undefined4 *)(param_2 + (int)piVar21 * 8);
          iVar3 = (**(code **)(puVar10[1] + 0x14))(*puVar10,uVar15,uVar14);
          if (iVar3 != 0) {
            if (piVar8 <= piVar21) {
              local_d4 = puVar19;
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(piVar21,piVar8,&DAT_01c11028);
            }
            FUN_006666fc(&local_70,uVar15,uVar14);
            puVar18 = puVar1 + (int)piVar21 * 3;
            uVar14 = puVar18[2];
            if (uVar14 == *puVar18) {
              FUN_019abd3c(puVar18);
            }
            puVar6 = (uint *)(puVar18[1] + uVar14 * 0xc);
            *puVar6 = (uint)local_70;
            puVar6[1] = (uint)local_6c;
            puVar6[2] = (uint)puStack_68;
            puVar18[2] = uVar14 + 1;
            break;
          }
          piVar21 = (int *)((int)piVar21 + 1);
        } while (puVar10 + 2 != (undefined4 *)(param_2 + (int)param_3 * 8));
      }
      FUN_019bb7e0(uVar12,uVar15);
      puVar18 = puVar19;
    } while (puVar19 != puVar2);
    puVar19 = puVar2;
LAB_00b0a24c:
    local_d4 = puVar19;
  }
  FUN_01323e8c(&local_d8);
  piVar17 = local_a0;
  puVar1 = local_a4;
  piVar21 = local_a8;
  FUN_00ab8cac(&local_70,param_5);
  FUN_00b0a930(&local_d8,param_2,param_3,&local_70);
  piVar8 = local_d0;
  puVar18 = local_d4;
  puVar2 = local_d8;
  FUN_0126f23c(&local_c8);
  puVar6 = puVar18 + (int)piVar8 * 8;
  iVar3 = 0;
  local_d0 = piVar21;
  local_b0 = (int *)0x0;
  puVar19 = puVar1 + (int)piVar17 * 3;
  local_b4 = 0;
  local_b8 = 0;
  local_c0 = puVar2;
  local_c4 = puVar18;
  local_c8 = puVar18;
  local_d4 = puVar1;
  local_d8 = puVar1;
  local_cc = puVar19;
  local_bc = puVar6;
  if (piVar17 != (int *)0x0) {
    puVar10 = (undefined4 *)((uint)&local_a8 | 4);
    piVar17 = (int *)(param_2 + 4);
    piVar21 = (int *)0x0;
    do {
      puVar2 = puVar1 + 3;
      piVar22 = (int *)*puVar1;
      if (piVar22 == (int *)0x80000000) goto LAB_00b0a47c;
      puVar23 = (uint *)puVar1[1];
      piVar24 = (int *)puVar1[2];
      local_6c = puVar23;
      puStack_68 = (uint *)piVar24;
      if ((int)piVar8 << 5 == iVar3) {
LAB_00b0a49c:
        local_d4 = puVar2;
        local_c4 = puVar6;
        local_b0 = piVar8;
        local_70 = piVar22;
        FUN_006a41c0(&local_70);
        goto LAB_00b0a4b4;
      }
      local_70 = *(int **)((int)puVar18 + iVar3);
      if (local_70 == (int *)0x0) {
        puVar6 = (uint *)((int)puVar18 + iVar3 + 0x20);
        piVar8 = piVar21;
        goto LAB_00b0a49c;
      }
      puVar5 = (uint *)((int)puVar18 + iVar3) + 8;
      uVar13 = *(undefined4 *)((int)puVar18 + iVar3 + 8);
      uVar9 = *(undefined4 *)((int)puVar18 + iVar3 + 0xc);
      *puVar10 = *(undefined4 *)((int)puVar18 + iVar3 + 4);
      puVar10[1] = uVar13;
      puVar10[2] = uVar9;
      uVar13 = *(undefined4 *)((int)puVar18 + iVar3 + 0x14);
      uVar9 = *(undefined4 *)((int)puVar18 + iVar3 + 0x18);
      uVar20 = *(undefined4 *)((int)puVar18 + iVar3 + 0x1c);
      puVar10[3] = *(undefined4 *)((int)puVar18 + iVar3 + 0x10);
      puVar10[4] = uVar13;
      puVar10[5] = uVar9;
      puVar10[6] = uVar20;
      piVar11 = (int *)((int)piVar21 + 1);
      local_a8 = local_70;
      local_88 = piVar22;
      local_84 = puVar23;
      if (piVar24 == (int *)0x0 && local_9c == (int *)0x0) {
        local_70 = piVar22;
        FUN_01ada488(&local_a8);
      }
      else {
        if (param_3 <= piVar21) {
          local_d4 = puVar2;
          local_c4 = puVar5;
          local_b0 = piVar11;
          local_70 = piVar22;
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(piVar21,param_3,&DAT_01c10ff8);
        }
        local_6c = local_a4;
        puStack_68 = (uint *)local_a0;
        local_64 = (uint *)local_9c;
        local_60 = local_98;
        local_5c = (uint *)uStack_94;
        local_58 = uStack_90;
        local_54 = uStack_8c;
        iVar4 = (**(code **)(*piVar17 + 0x20))(piVar17[-1],puVar23,piVar24,&local_70);
        if (iVar4 != 0) {
          *param_1 = 1;
          param_1[1] = iVar4;
          local_d4 = puVar2;
          local_c4 = puVar5;
          local_b0 = piVar11;
          FUN_006a41c0(&local_88);
          FUN_00b0af00(&local_d8);
          FUN_01ada488(param_5);
          FUN_006a41c0(param_4);
          return;
        }
      }
      FUN_006a41c0(&local_88);
      iVar3 = iVar3 + 0x20;
      puVar23 = puVar1 + 3;
      piVar17 = piVar17 + 2;
      piVar21 = piVar11;
      puVar1 = puVar2;
    } while (puVar23 != puVar19);
    puVar2 = puVar19;
LAB_00b0a47c:
    local_c4 = (uint *)((int)puVar18 + iVar3);
    local_d4 = puVar2;
    local_b0 = piVar21;
  }
LAB_00b0a4b4:
  FUN_00b0af00(&local_d8);
  piVar8 = (int *)0x0;
  local_80 = 0;
  local_88 = (int *)0x0;
  local_a0 = (int *)*param_4;
  piVar21 = piVar16 + iVar7 * 3;
  local_a8 = piVar16;
  local_a4 = (uint *)piVar16;
  local_9c = piVar21;
  if (iVar7 != 0) {
    do {
      piVar17 = piVar16 + 3;
      if (*piVar16 == -0x80000000) goto LAB_00b0a568;
      local_78 = piVar16[1];
      iStack_74 = piVar16[2];
      local_d8 = (uint *)((uint)local_d8 & 0xffffff00);
      local_7c = *piVar16;
      FUN_0196b484(&local_70,&local_88,&local_7c,&local_d8);
      if ((char)local_70 != '\x06') {
        FUN_00e0febc(&local_70);
      }
      piVar17 = piVar16 + 3;
      piVar16 = piVar16 + 3;
    } while (piVar17 != piVar21);
    piVar17 = piVar21;
LAB_00b0a568:
    local_a4 = (uint *)piVar17;
  }
  FUN_01323e8c(&local_a8);
  puVar1 = (uint *)*param_5;
  iVar3 = param_5[1];
  local_54 = param_5[3];
  local_6c = (uint *)extraout_r1;
  puStack_68 = extraout_r2;
  if (iVar3 != 0) {
    piVar8 = (int *)0x8;
    puStack_68 = puVar1 + iVar3 * -10 + -10;
    local_6c = (uint *)(iVar3 * 0x29 + 0x2d);
  }
  local_58 = (int)puVar1 + iVar3 + 1;
  puVar2 = puVar1 + 1;
  uVar12 = ~*puVar1 & 0x80808080;
  iVar3 = local_54;
  local_70 = piVar8;
  local_64 = puVar1;
  local_60 = uVar12;
  local_5c = puVar2;
  while( true ) {
    iVar7 = 0;
    if (iVar3 == 0) break;
    uVar15 = uVar12;
    puVar18 = puVar2;
    if (uVar12 == 0) {
      do {
        puVar2 = puVar18 + 1;
        uVar12 = *puVar18;
        puVar1 = puVar1 + -0x28;
        puVar18 = puVar2;
      } while ((uVar12 & 0x80808080) == 0x80808080);
      uVar15 = uVar12 & 0x80808080 ^ 0x80808080;
      local_64 = puVar1;
      local_5c = puVar2;
    }
    uVar12 = uVar15 - 1 & uVar15;
    iVar7 = iVar3 + -1;
    uVar15 = (uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
    local_d8 = (uint *)puVar1[uVar15 * -10 + -9];
    local_d4 = (uint *)puVar1[uVar15 * -10 + -8];
    local_d0 = (int *)puVar1[uVar15 * -10 + -7];
    local_cc = (uint *)puVar1[uVar15 * -10 + -6];
    local_c8 = (uint *)puVar1[uVar15 * -10 + -5];
    local_c4 = (uint *)puVar1[uVar15 * -10 + -4];
    local_c0 = (uint *)puVar1[uVar15 * -10 + -3];
    local_bc = (uint *)puVar1[uVar15 * -10 + -2];
    local_b8 = puVar1[uVar15 * -10 + -1];
    local_60 = uVar12;
    if (puVar1[uVar15 * -10 + -10] == 0x80000000) break;
    local_40 = puVar1[uVar15 * -10 + -6];
    uStack_3c = puVar1[uVar15 * -10 + -5];
    uStack_38 = puVar1[uVar15 * -10 + -4];
    uStack_34 = puVar1[uVar15 * -10 + -3];
    uStack_30 = puVar1[uVar15 * -10 + -2];
    uStack_2c = puVar1[uVar15 * -10 + -1];
    local_4c = puVar1[uVar15 * -10 + -10];
    local_48 = local_d8;
    puStack_44 = local_d4;
    FUN_0196b484(&local_a8,&local_88,&local_4c);
    if ((char)local_a8 != '\x06') {
      FUN_00e0febc(&local_a8);
    }
    iVar3 = iVar7;
  }
  local_54 = iVar7;
  FUN_01ada55c(&local_70);
  param_1[1] = local_88;
  param_1[2] = local_84;
  param_1[3] = local_80;
  *param_1 = 0;
  return;
}

