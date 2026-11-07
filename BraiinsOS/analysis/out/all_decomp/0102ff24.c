// FUN_0102ff24 @ 0102ff24 size=1232 calls_out=10 calls_in=0
// strings: 

void FUN_0102ff24(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int *param_4,
                 int param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  int extraout_r2;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int *local_268;
  undefined1 auStack_208 [20];
  int local_1f4;
  int local_1e4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  byte local_170;
  uint3 local_16f;
  int *local_16c;
  char *local_168;
  int iStack_164;
  int iStack_160;
  undefined4 local_15c;
  int local_158;
  char *local_154;
  uint local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 local_140;
  char *local_13c;
  uint local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined *local_11c;
  char *local_118;
  int local_114;
  int local_110;
  undefined *local_10c;
  char *local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined2 local_ec;
  uint local_e8;
  int *local_e4;
  char *local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  char *pcStack_cc;
  int iStack_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [92];
  
  uVar8 = param_3[0x1c];
  uVar9 = param_3[0x1d];
  iVar10 = param_3[0x1e];
  uVar11 = param_3[0x1f];
  cVar1 = *(char *)(param_3 + 0x21);
  bVar2 = *(byte *)(param_3 + 0x1b);
  iVar13 = param_3[0x20];
  if (iVar13 != 0) {
    FUN_010cdcec(iVar13);
    thunk_FUN_016d3fb4(iVar13);
  }
  local_1b0 = param_3[0x10];
  uStack_1ac = param_3[0x11];
  uStack_1a8 = param_3[0x12];
  uStack_1a4 = param_3[0x13];
  uStack_1a0 = param_3[0x14];
  pcVar12 = (char *)(param_3 + 0x15);
  local_19c = *(undefined4 *)pcVar12;
  uStack_198 = param_3[0x16];
  uStack_194 = param_3[0x17];
  uStack_190 = param_3[0x18];
  uStack_18c = param_3[0x19];
  uStack_188 = param_3[0x1a];
  local_180 = *param_4;
  local_17c = param_4[1];
  local_178 = param_4[2];
  local_174 = param_4[3];
  FUN_010a3f2c(&local_170);
  uVar15 = local_150;
  pcVar6 = local_154;
  iVar5 = local_158;
  iVar4 = local_180;
  if ((bVar2 ^ 7) == 0 && local_180 == 0) {
    uVar14 = 3;
    uVar15 = 0;
    local_10c = (undefined *)0x0;
    local_104 = extraout_r2;
    goto LAB_0103014c;
  }
  if (local_158 == 0) {
LAB_010300d0:
    local_134 = 0;
    local_138 = 0;
    local_13c = &DAT_00000001;
    local_140 = &DAT_01882d00;
LAB_010300f0:
    bVar3 = local_170;
    iVar13 = 0;
    pcVar12 = &DAT_00418645;
    if (bVar2 == 0) {
      pcVar12 = "*";
    }
    local_268 = local_16c;
    (**(code **)(local_140 + 0x10))(&local_134,local_13c,0);
    local_104 = 1;
    local_10c = &DAT_01882d00;
  }
  else {
    local_130 = local_148;
    pcVar12 = local_154;
    if (local_150 == 0) {
      pcVar12 = &DAT_00418645;
    }
    local_134 = local_14c;
    local_138 = local_150;
    uVar14 = local_150;
    if (local_150 < 2) {
      uVar14 = 1;
    }
    local_13c = local_154;
    local_140 = (undefined *)local_158;
    FUN_00f5eea8(&local_d0,pcVar12,uVar14);
    (**(code **)(iVar5 + 0x10))(&local_134,pcVar6,uVar15);
    local_e0 = pcStack_cc;
    local_dc = iStack_c8;
    local_d8 = local_c4;
    if (local_d0 == (undefined *)0x0) goto LAB_010300d0;
    local_140 = local_d0;
    local_13c = pcStack_cc;
    local_138 = iStack_c8;
    local_134 = local_c4;
    if (iStack_c8 == 0) goto LAB_010300f0;
    local_268 = local_16c;
    local_10c = local_d0;
    local_104 = iStack_c8;
    iVar13 = local_c4;
    pcVar12 = pcStack_cc;
    bVar3 = local_170;
  }
  uVar14 = (uint)bVar3;
  uVar15 = (uint)local_16f << 8;
LAB_0103014c:
  local_f0 = local_174;
  local_f4 = local_178;
  local_f8 = local_17c;
  local_fc = local_180;
  local_ec = 0;
  local_11c = (undefined *)0x0;
  local_12c = 0;
  local_140 = (undefined *)
              CONCAT13(*(undefined1 *)((int)param_3 + 0x6f),
                       CONCAT21(*(undefined2 *)((int)param_3 + 0x6d),bVar2));
  local_13c = (char *)uVar8;
  local_138 = uVar9;
  local_134 = iVar10;
  local_130 = uVar11;
  local_108 = pcVar12;
  local_100 = iVar13;
  if (uVar14 != 3) {
    local_e4 = local_268;
    local_e8 = uVar15 | uVar14;
    FUN_01025d78(&local_140,&local_e8);
  }
  if (local_168 != (char *)0x0) {
    local_d4 = local_15c;
    local_d8 = iStack_160;
    local_dc = iStack_164;
    local_e0 = local_168;
    FUN_00f5eea8(&local_d0);
    if (local_11c != (undefined *)0x0) {
      (**(code **)(local_11c + 0x10))(&local_110,local_118,local_114);
    }
    local_11c = local_d0;
    local_118 = pcStack_cc;
    local_114 = iStack_c8;
    local_110 = local_c4;
    (**(code **)(local_e0 + 0x10))(&local_d4,local_dc,local_d8);
  }
  FUN_016dd1aa(auStack_208,&local_140,0x58);
  if ((bVar2 ^ 7) == 0 && iVar4 == 0) {
    if (local_170 == 2) {
      (**(code **)(*local_16c + 0x10))(local_16c + 3,local_16c[1],local_16c[2]);
      thunk_FUN_016d3fb4(local_16c);
    }
    if (local_158 != 0) {
      (**(code **)(local_158 + 0x10))(&local_14c,local_154,local_150);
    }
  }
  if (local_1f4 == 0 && local_1e4 == 0) {
    if (cVar1 == '\x03') {
      *param_1 = 3;
      param_1[1] = 0;
      *(undefined2 *)(param_1 + 2) = 0x703;
      FUN_01404298(auStack_208);
      FUN_01015c1c(param_3);
      return;
    }
    local_13c = (char *)0x0;
    local_140 = (undefined *)0x1;
    FUN_01025d78(auStack_208,&local_140);
  }
  FUN_016dd1aa(&local_140,auStack_208,0x58);
  uVar8 = FUN_01022864(param_3);
  local_c0 = *param_3;
  uStack_bc = param_3[1];
  uStack_b8 = param_3[2];
  uStack_b4 = param_3[3];
  uStack_b0 = param_3[4];
  local_ac = param_3[5];
  uStack_a8 = param_3[6];
  uStack_a4 = param_3[7];
  uStack_a0 = param_3[8];
  uStack_9c = param_3[9];
  local_98 = param_3[10];
  uStack_94 = param_3[0xb];
  uStack_90 = param_3[0xc];
  uStack_8c = param_3[0xd];
  uStack_88 = param_3[0xe];
  uStack_84 = param_3[0xf];
  FUN_016dd1aa(auStack_80,&local_140,0x58);
  FUN_016dd1aa(param_1,&local_c0,0x98);
  uVar7 = 4;
  if (param_5 != 0) {
    uVar7 = 5;
  }
  param_1[0x26] = uVar8;
  *(undefined1 *)(param_1 + 0x2b) = uVar7;
  param_1[0x2a] = param_2;
  *(undefined1 *)((int)param_1 + 0xa5) = 2;
  *(undefined1 *)(param_1 + 0x27) = 0;
  return;
}

