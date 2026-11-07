// FUN_01686410 @ 01686410 size=1268 calls_out=7 calls_in=1
// strings: 

void FUN_01686410(int *param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *local_28c;
  int local_288;
  int local_284;
  undefined4 local_280;
  undefined4 local_27c;
  int *local_274;
  char **local_270;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  char *local_1d8;
  int local_1d4;
  int local_1d0;
  char *local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  char *local_158;
  int local_154;
  int local_150;
  char *local_148;
  int local_144;
  int local_140;
  int local_100;
  char *local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  FUN_01671830(&local_1d0);
  iVar6 = local_1c4;
  iVar4 = local_1c8;
  pcVar3 = local_1cc;
  if (local_1d0 != 3) {
    local_284 = local_1c4;
    local_288 = local_1c8;
    goto LAB_01686740;
  }
  local_1d8 = (char *)param_2[2];
  local_1d4 = param_2[3];
  local_140 = local_1c4;
  local_144 = local_1c8;
  local_148 = local_1cc;
  local_158 = local_1d8;
  local_154 = local_1d4;
  iVar5 = iVar4;
  if (local_1d4 == 0) {
LAB_016864e4:
    local_f0 = 0;
    local_f4 = 0;
    local_f8 = 4;
    local_fc = (char *)0x0;
    local_100 = 1;
    local_270 = &local_158;
    local_27c = 0x2e;
    local_280 = 0;
    local_274 = param_2;
    FUN_00953084(&local_1d0,&local_100,&local_280);
    local_100 = local_1d0;
    local_fc = local_1cc;
    local_f8 = local_1c8;
    local_f4 = local_1c4;
    local_f0 = local_1c0;
    local_ec = local_1bc;
    if (local_1d0 == 3) goto LAB_0168657c;
    local_270 = &local_1d8;
    local_27c = 0x3d;
    local_280 = 0;
    local_274 = param_2;
    FUN_00953084(&local_1d0,&local_100,&local_280);
    local_100 = local_1d0;
    local_fc = local_1cc;
    local_f8 = local_1c8;
    local_f4 = local_1c4;
    local_f0 = local_1c0;
    local_ec = local_1bc;
    if (local_1d0 == 3) goto LAB_0168657c;
    local_28c = (char *)((uint)local_1cc & 0xff);
    local_284 = local_1c4;
    local_288 = local_1c8;
    pcVar2 = local_1cc;
    iVar9 = local_1c0;
    iVar12 = local_1bc;
    iVar7 = local_1d0;
  }
  else {
    cVar1 = *local_1d8;
    param_2[2] = (int)(local_1d8 + 1);
    param_2[3] = local_1d4 + -1;
    if (cVar1 != '=') {
      param_2[2] = (int)local_1d8;
      param_2[3] = local_1d4;
      goto LAB_016864e4;
    }
LAB_0168657c:
    iVar8 = param_2[2];
    iVar9 = param_2[3];
    iVar10 = 0;
    iVar11 = *param_2;
    if (iVar9 != 0) {
      do {
        if (*(char *)(iVar8 + iVar10) != ' ' && *(char *)(iVar8 + iVar10) != '\t')
        goto LAB_016865b0;
        iVar10 = iVar10 + 1;
      } while (iVar9 != iVar10);
      iVar10 = iVar9;
    }
LAB_016865b0:
    param_2[2] = iVar8 + iVar10;
    param_2[3] = iVar9 - iVar10;
    FUN_01671ec4(&local_1d0,param_2);
    local_288 = local_1c8;
    local_284 = local_1c4;
    local_28c = local_1cc;
    pcVar2 = local_1cc;
    iVar9 = local_1c0;
    iVar12 = local_1bc;
    iVar7 = local_1d0;
    if (local_17c != 8) {
      local_168 = iVar8 - iVar11;
      local_164 = (iVar8 + iVar10) - iVar11;
      local_218 = local_1b8;
      uStack_214 = uStack_1b4;
      uStack_210 = uStack_1b0;
      uStack_20c = uStack_1ac;
      uStack_208 = uStack_1a8;
      local_204 = local_1a4;
      uStack_200 = uStack_1a0;
      uStack_1fc = uStack_19c;
      uStack_1f8 = uStack_198;
      uStack_1f4 = uStack_194;
      local_1f0 = local_190;
      uStack_1ec = uStack_18c;
      uStack_1e8 = uStack_188;
      uStack_1e4 = uStack_184;
      uStack_1e0 = uStack_180;
      local_228 = local_178;
      uStack_224 = uStack_174;
      uStack_220 = uStack_170;
      uStack_21c = uStack_16c;
      local_160 = param_2[2];
      iVar5 = param_2[3];
      if (iVar5 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = 0;
        do {
          if (*(char *)(local_160 + iVar9) != ' ' && *(char *)(local_160 + iVar9) != '\t')
          goto LAB_01686780;
          iVar9 = iVar9 + 1;
        } while (iVar5 != iVar9);
        iVar9 = iVar5;
      }
LAB_01686780:
      param_2[2] = local_160 + iVar9;
      param_2[3] = iVar5 - iVar9;
      local_15c = (local_160 + iVar9) - *param_2;
      local_160 = local_160 - *param_2;
      local_150 = iVar6;
      local_154 = iVar4;
      local_158 = pcVar3;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0041466c,0x1a,&DAT_018adc84);
      }
      local_150 = iVar6 + -1;
      FUN_016dd1aa(&local_148,iVar4 + local_150 * 0x48,0x48);
      local_ec = local_1bc;
      local_f0 = local_1c0;
      local_f4 = local_1c4;
      local_f8 = local_1c8;
      local_fc = local_1cc;
      local_100 = local_1d0;
      local_e8 = local_218;
      uStack_e4 = uStack_214;
      uStack_e0 = uStack_210;
      uStack_dc = uStack_20c;
      uStack_d8 = uStack_208;
      local_d4 = local_204;
      uStack_d0 = uStack_200;
      uStack_cc = uStack_1fc;
      uStack_c8 = uStack_1f8;
      uStack_c4 = uStack_1f4;
      local_c0 = local_1f0;
      uStack_bc = uStack_1ec;
      uStack_b8 = uStack_1e8;
      uStack_b4 = uStack_1e4;
      uStack_b0 = uStack_1e0;
      local_a8 = local_228;
      uStack_a4 = uStack_224;
      uStack_a0 = uStack_220;
      uStack_9c = uStack_21c;
      iVar6 = 6;
      local_ac = local_17c;
      if (1 < local_17c) {
        iVar6 = local_17c - 2;
      }
                    /* WARNING: Could not recover jumptable at 0x016868e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_016868ec + *(int *)(&DAT_016868ec + iVar6 * 4)))
                (&local_e8,*(int *)(&DAT_016868ec + iVar6 * 4),&local_f4);
      return;
    }
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    FUN_01666b88(iVar5);
    iVar5 = iVar5 + 0x48;
  }
  if (iVar7 == 1) {
    iVar7 = 2;
  }
  if (pcVar3 != (char *)0x0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  local_1cc = (char *)((uint)local_28c & 0xff | (uint)pcVar2 & 0xffffff00);
  local_1d0 = iVar7;
  local_1bc = iVar12;
  local_1c0 = iVar9;
LAB_01686740:
  *param_1 = local_1d0;
  param_1[0x16] = 4;
  param_1[1] = (int)local_1cc;
  param_1[2] = local_288;
  param_1[3] = local_284;
  param_1[4] = local_1c0;
  param_1[5] = local_1bc;
  return;
}

