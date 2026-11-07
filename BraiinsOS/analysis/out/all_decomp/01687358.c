// FUN_01687358 @ 01687358 size=1580 calls_out=9 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01687358(int *param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  char **ppcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  char *local_270;
  int local_26c;
  undefined4 uStack_268;
  undefined4 local_264;
  char *local_260;
  int local_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  int local_220;
  uint local_21c;
  int local_218;
  int *local_214;
  char **local_210;
  int local_20c;
  char *local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  uint local_1cc;
  char *local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  int local_1b4;
  uint local_1b0;
  int local_1ac;
  uint local_1a8;
  int local_1a4;
  int *local_1a0;
  uint local_198;
  int iStack_194;
  int *piStack_190;
  int local_150;
  uint local_14c;
  int local_148;
  int *local_144;
  char **local_140;
  int local_13c;
  char *local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint local_fc;
  char *local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  char *local_e8;
  int local_e4;
  int *local_dc;
  char **local_d8;
  int local_98;
  uint local_94;
  int local_90;
  int *local_8c;
  char **local_88;
  int local_84;
  char *local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint local_44;
  char *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_01671830(&local_220);
  piVar12 = local_214;
  iVar9 = local_218;
  uVar5 = local_21c;
  if (local_220 != 3) goto LAB_01687940;
  local_198 = local_21c;
  iStack_194 = local_218;
  piStack_190 = local_214;
  local_260 = (char *)param_2[2];
  local_25c = param_2[3];
  local_e8 = local_260;
  local_e4 = local_25c;
  iVar11 = iVar9;
  if (local_25c == 0) {
LAB_0168741c:
    local_88 = (char **)0x0;
    local_8c = (int *)0x0;
    local_90 = 4;
    local_94 = 0;
    local_98 = 1;
    local_140 = &local_e8;
    local_14c = 0x2e;
    local_150 = 0;
    local_144 = param_2;
    FUN_00953084(&local_220,&local_98,&local_150);
    local_98 = local_220;
    local_94 = local_21c;
    local_90 = local_218;
    local_8c = local_214;
    local_88 = local_210;
    local_84 = local_20c;
    if (local_220 == 3) goto LAB_016874c0;
    local_140 = &local_260;
    local_14c = 0x3d;
    local_150 = 0;
    local_144 = param_2;
    FUN_00953084(&local_220,&local_98,&local_150);
    local_98 = local_220;
    local_94 = local_21c;
    local_90 = local_218;
    local_8c = local_214;
    local_88 = local_210;
    local_84 = local_20c;
    if (local_220 == 3) goto LAB_016874c0;
    uVar15 = local_21c & 0xff;
    uVar1 = local_21c >> 8;
    piVar3 = local_214;
    iVar14 = local_218;
    iVar8 = local_220;
    iVar10 = local_20c;
    ppcVar4 = local_210;
  }
  else {
    cVar2 = *local_260;
    param_2[2] = (int)(local_260 + 1);
    param_2[3] = local_25c + -1;
    if (cVar2 != '=') {
      param_2[2] = (int)local_260;
      param_2[3] = local_25c;
      goto LAB_0168741c;
    }
LAB_016874c0:
    iVar10 = param_2[3];
    iVar14 = 0;
    iVar13 = param_2[2];
    iVar8 = *param_2;
    if (iVar10 != 0) {
      do {
        if (*(char *)(iVar13 + iVar14) != ' ' && *(char *)(iVar13 + iVar14) != '\t')
        goto LAB_016874fc;
        iVar14 = iVar14 + 1;
      } while (iVar10 != iVar14);
      iVar14 = iVar10;
    }
LAB_016874fc:
    param_2[2] = iVar13 + iVar14;
    param_2[3] = iVar10 - iVar14;
    FUN_01671ec4(&local_220,param_2);
    iVar7 = local_20c;
    ppcVar4 = local_210;
    piVar3 = local_214;
    iVar6 = local_218;
    uVar1 = local_21c;
    iVar10 = local_220;
    if (local_1cc != 8) {
      local_80 = local_208;
      uStack_7c = uStack_204;
      uStack_78 = uStack_200;
      uStack_74 = uStack_1fc;
      uStack_70 = uStack_1f8;
      local_6c = local_1f4;
      uStack_68 = uStack_1f0;
      uStack_64 = uStack_1ec;
      uStack_60 = uStack_1e8;
      uStack_5c = uStack_1e4;
      local_58 = local_1e0;
      uStack_54 = uStack_1dc;
      uStack_50 = uStack_1d8;
      uStack_4c = uStack_1d4;
      uStack_48 = uStack_1d0;
      local_3c = uStack_1c4;
      local_40 = local_1c8;
      local_94 = local_21c;
      local_98 = local_220;
      local_270 = (char *)param_2[2];
      local_26c = param_2[3];
      local_34 = uStack_1bc;
      local_38 = uStack_1c0;
      local_84 = local_20c;
      local_88 = local_210;
      local_8c = local_214;
      local_44 = local_1cc;
      local_90 = local_218;
      local_260 = local_270;
      local_25c = local_26c;
      FUN_0166eac4(&local_150,param_2);
      if (local_150 == 3) {
LAB_016876d0:
        iStack_1b8 = iVar13 - iVar8;
        local_1b4 = (iVar13 + iVar14) - iVar8;
        local_260 = local_80;
        local_25c = uStack_7c;
        uStack_258 = uStack_78;
        uStack_254 = uStack_74;
        uStack_250 = uStack_70;
        local_24c = local_6c;
        uStack_248 = uStack_68;
        uStack_244 = uStack_64;
        uStack_240 = uStack_60;
        uStack_23c = uStack_5c;
        local_238 = local_58;
        uStack_234 = uStack_54;
        uStack_230 = uStack_50;
        uStack_22c = uStack_4c;
        uStack_228 = uStack_48;
        local_264 = local_34;
        local_270 = local_40;
        local_26c = local_3c;
        uStack_268 = local_38;
        local_1b0 = local_14c;
        local_1ac = local_148;
        local_1c8 = local_40;
        uStack_1c4 = local_3c;
        uStack_1c0 = local_38;
        uStack_1bc = local_34;
        local_1a0 = piVar12;
        local_1a4 = iVar9;
        local_1a8 = uVar5;
        if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0041466c,0x1a,&DAT_018adc94);
        }
        FUN_016dd1aa(&local_198,iVar9 + ((int)piVar12 + -1) * 0x48,0x48);
        local_144 = piVar3;
        local_148 = iVar6;
        local_14c = uVar1;
        local_140 = ppcVar4;
        local_150 = iVar10;
        local_13c = iVar7;
        local_138 = local_260;
        uStack_134 = local_25c;
        uStack_130 = uStack_258;
        uStack_12c = uStack_254;
        uStack_128 = uStack_250;
        local_124 = local_24c;
        uStack_120 = uStack_248;
        uStack_11c = uStack_244;
        uStack_118 = uStack_240;
        uStack_114 = uStack_23c;
        local_110 = local_238;
        uStack_10c = uStack_234;
        uStack_108 = uStack_230;
        uStack_104 = uStack_22c;
        uStack_100 = uStack_228;
        local_f8 = local_270;
        uStack_f4 = local_26c;
        uStack_f0 = uStack_268;
        uStack_ec = local_264;
        iVar9 = 6;
        local_fc = local_1cc;
        if (1 < local_1cc) {
          iVar9 = local_1cc - 2;
        }
                    /* WARNING: Could not recover jumptable at 0x01687888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_0168788c + *(int *)(&DAT_0168788c + iVar9 * 4)))();
        return;
      }
      local_d8 = &local_260;
      local_e4 = 10;
      local_e8 = (char *)0x0;
      local_dc = param_2;
      FUN_00953084(&local_220,&local_150,&local_e8);
      local_150 = local_220;
      local_14c = local_21c;
      local_148 = local_218;
      local_144 = local_214;
      local_140 = local_210;
      local_13c = local_20c;
      if (local_220 == 3) goto LAB_016876d0;
      local_d8 = &local_270;
      local_e4 = 0x23;
      local_e8 = (char *)0x0;
      local_dc = param_2;
      FUN_00953084(&local_220,&local_150,&local_e8);
      local_150 = local_220;
      local_14c = local_21c;
      local_148 = local_218;
      local_144 = local_214;
      local_140 = local_210;
      local_13c = local_20c;
      if (local_220 == 3) goto LAB_016876d0;
      FUN_01683818(&local_98);
    }
    uVar1 = local_21c >> 8;
    piVar3 = local_214;
    iVar14 = local_218;
    iVar8 = local_220;
    uVar15 = local_21c;
    iVar10 = local_20c;
    ppcVar4 = local_210;
  }
  for (; piVar12 != (int *)0x0; piVar12 = (int *)((int)piVar12 + -1)) {
    FUN_01666b88(iVar11);
    iVar11 = iVar11 + 0x48;
  }
  if (iVar8 == 1) {
    iVar8 = 2;
  }
  if (uVar5 != 0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  local_21c = uVar15 & 0xff | uVar1 << 8;
  local_220 = iVar8;
  local_218 = iVar14;
  local_214 = piVar3;
  local_20c = iVar10;
  local_210 = ppcVar4;
LAB_01687940:
  param_1[1] = local_21c;
  param_1[2] = local_218;
  param_1[3] = (int)local_214;
  param_1[4] = (int)local_210;
  param_1[0x16] = 4;
  *param_1 = local_220;
  param_1[5] = local_20c;
  return;
}

