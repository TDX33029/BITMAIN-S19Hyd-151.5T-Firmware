// FUN_0078ee28 @ 0078ee28 size=1536 calls_out=9 calls_in=1
// strings: 

void FUN_0078ee28(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int local_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  undefined4 local_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 auStack_228 [8];
  int local_220;
  int local_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  int local_19c;
  undefined4 local_198;
  int iStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int local_15c;
  undefined4 local_158;
  int iStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int local_140;
  undefined4 uStack_13c;
  int local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_d8 [104];
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x105)) {
  case 0:
    uVar4 = *(undefined4 *)(param_2 + 0xb4);
    *(undefined1 *)(param_2 + 0x104) = 0;
    *(undefined4 *)(param_2 + 0x68) = uVar4;
    FUN_01bed4e2(param_2 + 0x6c,param_2 + 0xc0,0x44);
    *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_2 + 0xbc);
    uVar3 = *(undefined1 *)(param_2 + 0xac);
    bVar12 = *(short *)(param_2 + 0x6c) != 1;
    uVar1 = *(undefined2 *)(param_2 + 0xba);
    uVar2 = *(undefined2 *)(param_2 + 0xb8);
    if (bVar12) {
      puVar5 = (undefined4 *)((uint)&local_70 | 4);
      uVar6 = *(undefined4 *)(param_2 + 200);
      uVar7 = *(undefined4 *)(param_2 + 0xcc);
      uVar8 = *(undefined4 *)(param_2 + 0xd0);
      *puVar5 = *(undefined4 *)(param_2 + 0xc4);
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      uVar6 = *(undefined4 *)(param_2 + 0xd8);
      uVar7 = *(undefined4 *)(param_2 + 0xdc);
      uVar8 = *(undefined4 *)(param_2 + 0xe0);
      puVar5[4] = *(undefined4 *)(param_2 + 0xd4);
      puVar5[5] = uVar6;
      puVar5[6] = uVar7;
      puVar5[7] = uVar8;
      local_70._2_2_ = *(undefined2 *)(param_2 + 0x6e);
    }
    else {
      FUN_015e8ad4((uint)&local_70 | 4,*(undefined4 *)(param_2 + 0x74),
                   *(undefined4 *)(param_2 + 0x78));
    }
    local_70 = CONCAT22(local_70._2_2_,(ushort)!bVar12);
    bVar12 = *(short *)(param_2 + 0x90) != 1;
    if (bVar12) {
      uVar6 = *(undefined4 *)(param_2 + 0x98);
      uVar7 = *(undefined4 *)(param_2 + 0x9c);
      uVar8 = *(undefined4 *)(param_2 + 0xa0);
      uVar9 = *(undefined4 *)(param_2 + 0xa4);
      uVar11 = *(undefined4 *)(param_2 + 0xa8);
      puVar5 = (undefined4 *)((uint)&local_48 | 4);
      *puVar5 = *(undefined4 *)(param_2 + 0x94);
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      puVar5[4] = uVar9;
      puVar5[5] = uVar11;
      local_48._2_2_ = *(undefined2 *)(param_2 + 0x92);
    }
    else {
      FUN_015e8ad4((uint)&local_48 | 4,*(undefined4 *)(param_2 + 0x98),
                   *(undefined4 *)(param_2 + 0x9c));
    }
    local_48 = CONCAT22(local_48._2_2_,(ushort)!bVar12);
    local_140 = local_70;
    uStack_13c = uStack_6c;
    local_138 = iStack_68;
    uStack_134 = uStack_64;
    local_130 = local_60;
    local_12c = uStack_5c;
    uStack_128 = uStack_58;
    uStack_124 = uStack_54;
    uStack_120 = uStack_50;
    local_11c = local_48;
    local_118 = uStack_44;
    uStack_114 = uStack_40;
    local_110 = local_3c;
    uStack_10c = uStack_38;
    uStack_108 = uStack_34;
    uStack_104 = uStack_30;
    local_268 = local_70;
    uStack_264 = uStack_6c;
    iStack_260 = iStack_68;
    local_25c = uStack_64;
    uStack_258 = local_60;
    local_254 = uStack_5c;
    uStack_250 = uStack_58;
    uStack_24c = uStack_54;
    uStack_248 = uStack_50;
    uStack_244 = local_48;
    local_240 = uStack_44;
    uStack_23c = uStack_40;
    uStack_238 = local_3c;
    uStack_234 = uStack_38;
    uStack_230 = uStack_34;
    uStack_22c = uStack_30;
    *(undefined4 *)(param_2 + 0x1c4) = uVar4;
    *(int *)(param_2 + 0x1c8) = local_70;
    *(undefined4 *)(param_2 + 0x1cc) = uStack_6c;
    *(int *)(param_2 + 0x1d0) = iStack_68;
    *(undefined4 *)(param_2 + 0x1d4) = uStack_64;
    *(undefined4 *)(param_2 + 0x1d8) = local_60;
    *(undefined4 *)(param_2 + 0x1dc) = uStack_5c;
    *(undefined4 *)(param_2 + 0x1e0) = uStack_58;
    *(undefined4 *)(param_2 + 0x1e4) = uStack_54;
    *(undefined4 *)(param_2 + 0x1e8) = uStack_50;
    *(undefined4 *)(param_2 + 0x1ec) = local_48;
    *(undefined4 *)(param_2 + 0x1f0) = uStack_44;
    *(undefined4 *)(param_2 + 500) = uStack_40;
    *(undefined4 *)(param_2 + 0x1f8) = local_3c;
    *(undefined4 *)(param_2 + 0x1fc) = uStack_38;
    *(undefined4 *)(param_2 + 0x200) = uStack_34;
    *(undefined4 *)(param_2 + 0x204) = uStack_30;
    *(undefined2 *)(param_2 + 0x212) = uVar1;
    *(undefined2 *)(param_2 + 0x210) = uVar2;
    *(undefined2 *)(param_2 + 0x20c) = 0;
    *(undefined1 *)(param_2 + 0x208) = uVar3;
    *(undefined1 *)(param_2 + 0x215) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c08f1c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c08f1c);
  case 3:
    break;
  case 4:
    goto switchD_0078ee5c_caseD_4;
  case 5:
    goto switchD_0078ee5c_caseD_5;
  }
  iVar10 = param_2 + 0x108;
  FUN_0078d5b0(auStack_228,iVar10,param_3);
  if (local_220 == 0x3b9aca01) {
    *(undefined4 *)(param_1 + 8) = 0x3b9aca01;
    uVar3 = 3;
  }
  else {
    FUN_01bed4e2(param_2,auStack_228,0x68);
    FUN_0078eaa4(iVar10);
    if (*(undefined1 **)(param_2 + 8) == &DAT_3b9aca00) {
      uVar3 = *(undefined1 *)(param_2 + 0xac);
      uVar4 = *(undefined4 *)(param_2 + 0x68);
      bVar12 = *(short *)(param_2 + 0x6c) != 1;
      if (bVar12) {
        puVar5 = (undefined4 *)((uint)&local_140 | 4);
        uVar6 = *(undefined4 *)(param_2 + 0x74);
        uVar7 = *(undefined4 *)(param_2 + 0x78);
        uVar8 = *(undefined4 *)(param_2 + 0x7c);
        *puVar5 = *(undefined4 *)(param_2 + 0x70);
        puVar5[1] = uVar6;
        puVar5[2] = uVar7;
        puVar5[3] = uVar8;
        uVar6 = *(undefined4 *)(param_2 + 0x84);
        uVar7 = *(undefined4 *)(param_2 + 0x88);
        uVar8 = *(undefined4 *)(param_2 + 0x8c);
        puVar5[4] = *(undefined4 *)(param_2 + 0x80);
        puVar5[5] = uVar6;
        puVar5[6] = uVar7;
        puVar5[7] = uVar8;
        local_140 = (uint)*(ushort *)(param_2 + 0x6e) << 0x10;
      }
      else {
        FUN_015e8ad4((uint)&local_140 | 4,*(undefined4 *)(param_2 + 0x74),
                     *(undefined4 *)(param_2 + 0x78));
      }
      local_140 = CONCAT22(local_140._2_2_,(ushort)!bVar12);
      bVar12 = *(short *)(param_2 + 0x90) != 1;
      if (bVar12) {
        puVar5 = (undefined4 *)((uint)&local_268 | 4);
        uVar6 = *(undefined4 *)(param_2 + 0x98);
        uVar7 = *(undefined4 *)(param_2 + 0x9c);
        uVar8 = *(undefined4 *)(param_2 + 0xa0);
        uVar9 = *(undefined4 *)(param_2 + 0xa4);
        uVar11 = *(undefined4 *)(param_2 + 0xa8);
        *puVar5 = *(undefined4 *)(param_2 + 0x94);
        puVar5[1] = uVar6;
        puVar5[2] = uVar7;
        puVar5[3] = uVar8;
        puVar5[4] = uVar9;
        puVar5[5] = uVar11;
        local_268 = (uint)*(ushort *)(param_2 + 0x92) << 0x10;
      }
      else {
        FUN_015e8ad4((uint)&local_268 | 4,*(undefined4 *)(param_2 + 0x98),
                     *(undefined4 *)(param_2 + 0x9c));
      }
      local_268 = CONCAT22(local_268._2_2_,(ushort)!bVar12);
      local_180 = local_140;
      uStack_17c = uStack_13c;
      iStack_178 = local_138;
      uStack_174 = uStack_134;
      local_170 = local_130;
      local_16c = local_12c;
      uStack_168 = uStack_128;
      uStack_164 = uStack_124;
      uStack_160 = uStack_120;
      local_15c = local_268;
      local_158 = uStack_264;
      iStack_154 = iStack_260;
      local_150 = local_25c;
      uStack_14c = uStack_258;
      uStack_148 = local_254;
      uStack_144 = uStack_250;
      *(undefined4 *)(param_2 + 0x1c4) = uVar4;
      *(int *)(param_2 + 0x1c8) = local_140;
      *(undefined4 *)(param_2 + 0x1cc) = uStack_13c;
      *(int *)(param_2 + 0x1d0) = local_138;
      *(undefined4 *)(param_2 + 0x1d4) = uStack_134;
      *(undefined4 *)(param_2 + 0x1d8) = local_130;
      *(undefined4 *)(param_2 + 0x1dc) = local_12c;
      *(undefined4 *)(param_2 + 0x1e0) = uStack_128;
      *(undefined4 *)(param_2 + 0x1e4) = uStack_124;
      *(undefined4 *)(param_2 + 0x1e8) = uStack_120;
      *(int *)(param_2 + 0x1ec) = local_268;
      *(undefined4 *)(param_2 + 0x1f0) = uStack_264;
      *(int *)(param_2 + 500) = iStack_260;
      *(undefined4 *)(param_2 + 0x1f8) = local_25c;
      *(undefined4 *)(param_2 + 0x1fc) = uStack_258;
      *(undefined4 *)(param_2 + 0x200) = local_254;
      *(undefined4 *)(param_2 + 0x204) = uStack_250;
      *(undefined1 *)(param_2 + 0x215) = 0;
      *(undefined4 *)(param_2 + 0x210) = *(undefined4 *)(param_2 + 0xb0);
      *(undefined2 *)(param_2 + 0x20c) = 0;
      *(undefined1 *)(param_2 + 0x208) = uVar3;
switchD_0078ee5c_caseD_5:
      FUN_0078d5b0(&local_140,param_2 + 0x108,param_3);
      if (local_138 == 0x3b9aca01) {
        *(undefined4 *)(param_1 + 8) = 0x3b9aca01;
        uVar3 = 5;
        goto LAB_0078f41c;
      }
      FUN_01bed4e2(auStack_d8,&local_140,0x68);
      FUN_0078eaa4(param_2 + 0x108);
    }
    else {
      *(undefined1 *)(param_2 + 0x104) = 1;
      FUN_01bed4e2(iVar10,param_2,0x68);
      if (*(int *)(param_2 + 0x11c) == 0) {
        uVar3 = *(undefined1 *)(param_2 + 0xac);
        uVar4 = *(undefined4 *)(param_2 + 0x68);
        bVar12 = *(short *)(param_2 + 0x6c) != 1;
        if (bVar12) {
          puVar5 = (undefined4 *)((uint)&local_140 | 4);
          uVar6 = *(undefined4 *)(param_2 + 0x74);
          uVar7 = *(undefined4 *)(param_2 + 0x78);
          uVar8 = *(undefined4 *)(param_2 + 0x7c);
          *puVar5 = *(undefined4 *)(param_2 + 0x70);
          puVar5[1] = uVar6;
          puVar5[2] = uVar7;
          puVar5[3] = uVar8;
          uVar6 = *(undefined4 *)(param_2 + 0x84);
          uVar7 = *(undefined4 *)(param_2 + 0x88);
          uVar8 = *(undefined4 *)(param_2 + 0x8c);
          puVar5[4] = *(undefined4 *)(param_2 + 0x80);
          puVar5[5] = uVar6;
          puVar5[6] = uVar7;
          puVar5[7] = uVar8;
          local_140 = (uint)*(ushort *)(param_2 + 0x6e) << 0x10;
        }
        else {
          FUN_015e8ad4((uint)&local_140 | 4,*(undefined4 *)(param_2 + 0x74),
                       *(undefined4 *)(param_2 + 0x78));
        }
        local_140 = CONCAT22(local_140._2_2_,(ushort)!bVar12);
        bVar12 = *(short *)(param_2 + 0x90) != 1;
        if (bVar12) {
          puVar5 = (undefined4 *)((uint)&local_268 | 4);
          uVar6 = *(undefined4 *)(param_2 + 0x98);
          uVar7 = *(undefined4 *)(param_2 + 0x9c);
          uVar8 = *(undefined4 *)(param_2 + 0xa0);
          uVar9 = *(undefined4 *)(param_2 + 0xa4);
          uVar11 = *(undefined4 *)(param_2 + 0xa8);
          *puVar5 = *(undefined4 *)(param_2 + 0x94);
          puVar5[1] = uVar6;
          puVar5[2] = uVar7;
          puVar5[3] = uVar8;
          puVar5[4] = uVar9;
          puVar5[5] = uVar11;
          local_268 = (uint)*(ushort *)(param_2 + 0x92) << 0x10;
        }
        else {
          FUN_015e8ad4((uint)&local_268 | 4,*(undefined4 *)(param_2 + 0x98),
                       *(undefined4 *)(param_2 + 0x9c));
        }
        local_268 = CONCAT22(local_268._2_2_,(ushort)!bVar12);
        local_1c0 = local_140;
        uStack_1bc = uStack_13c;
        iStack_1b8 = local_138;
        uStack_1b4 = uStack_134;
        local_1b0 = local_130;
        local_1ac = local_12c;
        uStack_1a8 = uStack_128;
        uStack_1a4 = uStack_124;
        uStack_1a0 = uStack_120;
        local_19c = local_268;
        local_198 = uStack_264;
        iStack_194 = iStack_260;
        local_190 = local_25c;
        uStack_18c = uStack_258;
        uStack_188 = local_254;
        uStack_184 = uStack_250;
        *(undefined4 *)(param_2 + 0x22c) = uVar4;
        *(int *)(param_2 + 0x230) = local_140;
        *(undefined4 *)(param_2 + 0x234) = uStack_13c;
        *(int *)(param_2 + 0x238) = local_138;
        *(undefined4 *)(param_2 + 0x23c) = uStack_134;
        *(undefined4 *)(param_2 + 0x240) = local_130;
        *(undefined4 *)(param_2 + 0x244) = local_12c;
        *(undefined4 *)(param_2 + 0x248) = uStack_128;
        *(undefined4 *)(param_2 + 0x24c) = uStack_124;
        *(undefined4 *)(param_2 + 0x250) = uStack_120;
        *(int *)(param_2 + 0x254) = local_268;
        *(undefined4 *)(param_2 + 600) = uStack_264;
        *(int *)(param_2 + 0x25c) = iStack_260;
        *(undefined4 *)(param_2 + 0x260) = local_25c;
        *(undefined4 *)(param_2 + 0x264) = uStack_258;
        *(undefined4 *)(param_2 + 0x268) = local_254;
        *(undefined4 *)(param_2 + 0x26c) = uStack_250;
        *(undefined1 *)(param_2 + 0x27d) = 0;
        *(undefined4 *)(param_2 + 0x278) = *(undefined4 *)(param_2 + 0xb0);
        *(undefined2 *)(param_2 + 0x274) = 0;
        *(undefined1 *)(param_2 + 0x270) = uVar3;
switchD_0078ee5c_caseD_4:
        FUN_0078d5b0(&local_140,param_2 + 0x170,param_3);
        if (local_138 == 0x3b9aca01) {
          *(undefined4 *)(param_1 + 8) = 0x3b9aca01;
          uVar3 = 4;
          goto LAB_0078f41c;
        }
        FUN_01bed4e2(auStack_d8,&local_140,0x68);
        FUN_0078eaa4(param_2 + 0x170);
        if (*(char *)(param_2 + 0x104) != '\0') {
          FUN_0077a52c(param_2 + 0x108);
        }
      }
      else {
        *(undefined1 *)(param_2 + 0x104) = 0;
        FUN_01bed4e2(auStack_d8,param_2,0x68);
      }
      *(undefined1 *)(param_2 + 0x104) = 0;
    }
    if (*(undefined1 **)(param_2 + 8) == &DAT_3b9aca00) {
      FUN_0078bed0(param_2);
    }
    FUN_0079217c(param_2 + 0x6c);
    FUN_01bed4e2(param_1,auStack_d8,0x68);
    uVar3 = 1;
  }
LAB_0078f41c:
  *(undefined1 *)(param_2 + 0x105) = uVar3;
  return;
}

