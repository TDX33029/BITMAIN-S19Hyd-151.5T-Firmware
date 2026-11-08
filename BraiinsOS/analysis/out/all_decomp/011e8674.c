// FUN_011e8674 @ 011e8674 size=2068 calls_out=19 calls_in=0
// strings: $ref~! | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

void FUN_011e8674(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined4 ***pppuVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  int local_178;
  int local_160;
  int local_158;
  uint local_154;
  int local_150;
  uint local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_138;
  int local_134;
  int local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 ***local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 ****local_a8;
  undefined *local_a4;
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  undefined1 uStack_25;
  
  if (*param_3 != '\x04') {
    param_1[2] = 4;
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar13 = *(uint *)(param_3 + 0xc);
  if (uVar13 == 0) {
    local_150 = 1;
    local_154 = 0;
  }
  else {
    local_150 = FUN_016d38c8(uVar13,1);
    local_154 = uVar13;
    if (local_150 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar13);
    }
  }
  local_14c = uVar13;
  FUN_011e9578(param_2,param_3,&local_154,param_6,0);
  iVar10 = local_150;
  if (local_14c < uVar13) {
    uVar13 = local_14c;
  }
  local_140 = 0;
  local_148 = 0;
  local_130 = 0;
  local_138 = 0;
  iVar6 = *(int *)(param_3 + 8);
  local_144 = 4;
  local_134 = 4;
  if (*(int *)(param_2 + 0x34) == 0) {
    local_160 = 4;
    uVar14 = 0;
    bVar2 = false;
    do {
      iVar4 = local_130;
      uVar11 = uVar13;
      if (uVar13 < uVar14) {
        uVar11 = uVar14;
      }
      do {
        uVar15 = uVar14;
        local_158 = local_130;
        if (uVar11 == uVar15) goto LAB_011e8a38;
        uVar14 = uVar15 + 1;
      } while (*(char *)(iVar10 + uVar15) != '\0');
      local_d0 = 0;
      local_d4 = 1;
      local_d8 = (undefined4 ***)0x0;
      local_9c = 0;
      local_a0 = &DAT_60000020;
      local_a4 = &DAT_0188a2f0;
      local_a8 = &local_d8;
      iVar17 = FUN_0157ab98(iVar6 + uVar15 * 0x18,&local_a8);
      uVar18 = local_d0;
      uVar16 = local_d4;
      pppuVar3 = local_d8;
      if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                     &DAT_0188a308,&DAT_018af130);
      }
      if (iVar4 == local_138) {
        FUN_015f37b0(&local_138);
        local_160 = local_134;
      }
      bVar2 = true;
      local_130 = iVar4 + 1;
      puVar7 = (undefined4 *)(local_160 + iVar4 * 0xc);
      *puVar7 = pppuVar3;
      puVar7[1] = uVar16;
      puVar7[2] = uVar18;
    } while( true );
  }
  uVar14 = 0;
  local_178 = 4;
  puVar8 = (undefined *)0x0;
  local_158 = 0;
  bVar2 = false;
  do {
    iVar4 = local_140;
    uVar11 = uVar13;
    if (uVar13 < uVar14) {
      uVar11 = uVar14;
    }
    do {
      uVar15 = uVar14;
      puVar9 = puVar8;
      if (uVar11 == uVar15) goto LAB_011e8a38;
      puVar8 = puVar9 + 1;
      uVar14 = uVar15 + 1;
    } while (*(char *)(iVar10 + uVar15) != '\0');
    local_a8 = (undefined4 ****)0x80000001;
    iVar17 = iVar6 + uVar15 * 0x18;
    local_a4 = puVar9;
    local_9c = param_4;
    FUN_011c9534(&local_128,(int *)(param_2 + 0x34),iVar17,&local_a8,param_5,param_6);
    if ((char)local_ec == '\0') {
      local_d0 = 0;
      local_d8 = (undefined4 ***)0x0;
      local_9c = 0;
      local_d4 = 1;
      local_a0 = &DAT_60000020;
      local_a4 = &DAT_0188a2f0;
      local_a8 = &local_d8;
      iVar4 = FUN_0157ab98(iVar17,&local_a8);
      uVar18 = local_d0;
      uVar16 = local_d4;
      pppuVar3 = local_d8;
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                     &DAT_0188a308,&DAT_018af130);
      }
      if (local_158 == local_138) {
        FUN_015f37b0(&local_138);
        local_178 = local_134;
      }
      local_130 = local_158 + 1;
      puVar7 = (undefined4 *)(local_178 + local_158 * 0xc);
      *puVar7 = pppuVar3;
      puVar7[1] = uVar16;
      puVar7[2] = uVar18;
      bVar2 = true;
      iVar4 = local_140;
      local_158 = local_130;
    }
    if (iVar4 == local_148) {
      FUN_011ca644(&local_148);
    }
    puVar7 = (undefined4 *)(local_144 + iVar4 * 0x40);
    local_140 = iVar4 + 1;
    *puVar7 = local_128;
    puVar7[1] = uStack_124;
    puVar7[2] = uStack_120;
    puVar7[3] = uStack_11c;
    puVar7[4] = uStack_118;
    puVar7[5] = local_114;
    puVar7[6] = uStack_110;
    puVar7[7] = uStack_10c;
    puVar7[8] = uStack_108;
    puVar7[9] = uStack_104;
    puVar7[10] = local_100;
    puVar7[0xb] = uStack_fc;
    puVar7[0xc] = uStack_f8;
    puVar7[0xd] = uStack_f4;
    puVar7[0xe] = uStack_f0;
    puVar7[0xf] = local_ec;
  } while( true );
LAB_011e8a38:
  iVar10 = 0;
  local_e0 = 0;
  local_e4 = 4;
  local_e8 = 0;
  if (local_158 == 0) {
    if (bVar2) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = local_148;
      param_1[4] = local_144;
      param_1[5] = local_140;
      param_1[6] = 0;
    }
    else {
      puVar7 = (undefined4 *)&DAT_00000014;
      *param_1 = 0x80000000;
      param_1[1] = local_148;
      param_1[2] = local_144;
      param_1[3] = local_140;
      param_1[4] = 0;
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (puVar7[-4] != 0) {
          thunk_FUN_016d3fb4(puVar7[-3]);
        }
        if (puVar7[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar7);
        }
        puVar7 = puVar7 + 6;
      }
      if (local_e8 != 0) {
        thunk_FUN_016d3fb4(4);
      }
    }
    iVar10 = local_134;
    puVar7 = (undefined4 *)(local_134 + 4);
    for (iVar6 = local_130; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar7);
      }
      puVar7 = puVar7 + 3;
    }
    if (local_138 != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
    if (local_154 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(local_150);
    return;
  }
  piVar12 = *(int **)(param_2 + 0x70);
  uVar13 = *(uint *)(param_2 + 0x74);
  do {
    iVar10 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = iVar10 + 1;
  if (iVar10 < 0) {
LAB_011e92c4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11e92c4);
    (*pcVar1)();
  }
  if (param_5 == 0) {
    local_d8 = (undefined4 ***)0x0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_5 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
    }
    piVar5 = *(int **)(param_5 + 0xc);
    do {
      iVar10 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_011e92c4;
    uVar16 = *(undefined4 *)(param_5 + 0xc);
    uVar18 = *(undefined4 *)(param_5 + 0x10);
    uVar14 = 0;
    uVar11 = (*(int **)(param_5 + 4))[1];
    if (uVar11 <= uVar13) {
      iVar10 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar12 + 2,uVar11);
      uVar14 = uVar11;
      if (iVar10 != 0) {
        uVar14 = 0;
      }
    }
    local_c0 = FUN_011e1508((int)(piVar12 + 2) + uVar14,uVar13 - uVar14);
    local_cc = 3;
    local_d8 = (undefined4 ***)0x2;
    local_c8 = uVar16;
    local_c4 = uVar18;
  }
  local_38 = FUN_01238114(param_4);
  local_88 = 0x80000029;
  local_84 = local_138;
  iStack_80 = local_134;
  iStack_7c = local_130;
  local_50 = 6;
  local_a8 = (undefined4 ****)local_d8;
  local_a4 = (undefined *)local_d4;
  local_a0 = (undefined1 *)local_d0;
  local_9c = local_cc;
  local_98 = local_c8;
  uStack_94 = local_c4;
  local_4c = param_3;
  local_30 = piVar12;
  local_2c = uVar13;
  uStack_90 = local_c0;
  iVar10 = thunk_FUN_016d4a50(0x80);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar10,&local_a8,0x80);
  iVar6 = 0x22;
  if (0x80000009 < *(uint *)(iVar10 + 0x20)) {
    iVar6 = *(uint *)(iVar10 + 0x20) + 0x7ffffff6;
  }
                    /* WARNING: Could not recover jumptable at 0x011e8bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  local_dc = iVar10;
  (*(code *)(&DAT_011e8bd8 + *(int *)(&DAT_011e8bd8 + iVar6 * 4)))();
  return;
}

