// FUN_00684be0 @ 00684be0 size=6632 calls_out=20 calls_in=2
// strings: ^GET (/static/.*|/var/.*|/assets/.*) | ^(GET /miner/support_archive|POST /system/upgrade/upload)$ | (?i)^mutation\(auth/login\)$ | (?i)^mutation\((bos/setPassword|bos/wifi/connect)\)$ | (?i)^mutation\( | (?i)^(query|subscription)\(

/* WARNING: Removing unreachable block (ram,0x00685c68) */
/* WARNING: Removing unreachable block (ram,0x0068670c) */
/* WARNING: Removing unreachable block (ram,0x00685c84) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00684be0(undefined4 *param_1)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  char *pcVar17;
  int *piVar18;
  undefined *puVar19;
  int *piVar20;
  uint *puVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  undefined8 uVar27;
  int *local_1f0;
  undefined4 local_1ec;
  int *local_1e8;
  uint uStack_1e4;
  int *local_1e0;
  int *piStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 *puStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  int *piStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  int *piStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 *puStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int *local_190;
  int *local_18c;
  int *local_188;
  int local_184;
  undefined4 local_180;
  undefined4 *local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 *local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  int *local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  int *local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 *local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int *local_130;
  undefined4 local_12c;
  int *local_128;
  uint uStack_124;
  int *piStack_120;
  int iStack_11c;
  int *local_118;
  undefined4 local_114;
  int *local_110;
  uint uStack_10c;
  int *piStack_108;
  uint uStack_104;
  int *local_100;
  uint uStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int *local_e0;
  int *local_dc;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int *local_cc;
  undefined *local_c8;
  undefined2 *local_c4;
  undefined *local_c0;
  undefined2 *local_bc;
  undefined *local_b8;
  undefined2 *local_b4;
  undefined *local_b0;
  undefined2 *local_ac;
  undefined *local_a8;
  undefined2 *local_a4;
  undefined *local_a0;
  undefined2 *local_9c;
  undefined *local_98;
  undefined2 *local_94;
  undefined *local_90;
  undefined2 *local_8c;
  undefined *local_88;
  undefined2 *local_84;
  undefined *local_80;
  undefined2 *local_7c;
  undefined *local_78;
  int *local_74;
  undefined *local_70;
  undefined2 *local_6c;
  undefined *local_68;
  undefined2 *local_64;
  undefined *local_60;
  undefined2 *local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_c0 = (undefined *)FUN_0067dd8c(0);
  local_4c = 10;
  local_48 = 1;
  local_dc = (int *)0x1;
  local_e0 = (int *)&DAT_00000001;
  local_50 = 0x14;
  local_bc = (undefined2 *)0x0;
  local_54 = 0;
  local_58 = 0;
  local_5c = (undefined2 *)0x0;
  local_60 = (undefined *)((uint)local_60 & 0xffffff00);
  local_74 = (int *)0x0;
  local_78 = (undefined *)0x0;
  local_7c = (undefined2 *)((uint)local_7c & 0xffffff00);
  local_80 = (undefined *)0x0;
  local_64 = (undefined2 *)((uint)local_64 & 0xffffff00);
  local_68 = (undefined *)0x0;
  local_44 = 0;
  local_98 = (undefined *)0x0;
  local_a0 = (undefined *)0x0;
  local_1f0 = (int *)0x0;
  local_70 = local_c0;
  local_6c = (undefined2 *)local_c0;
  iVar9 = FUN_01be5878(&local_1f0,0x20,0xa0);
  piVar7 = local_1f0;
  if ((iVar9 != 0) || (local_1f0 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(0x20,0xa0);
  }
  FUN_01bed4e2(local_1f0,&local_e0,0xa0);
  do {
    iVar9 = *piVar7;
    bVar25 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar25);
  *piVar7 = iVar9 + 1;
  if (-1 < iVar9) {
    local_c0 = (undefined *)FUN_0067ddfc(0);
    local_4c = 100;
    local_48 = 1;
    local_dc = (int *)0x1;
    local_e0 = (int *)&DAT_00000001;
    local_50 = 200;
    local_bc = (undefined2 *)0x0;
    local_54 = 0;
    local_58 = 0;
    local_5c = (undefined2 *)0x0;
    local_60 = (undefined *)((uint)local_60 & 0xffffff00);
    local_74 = (int *)0x0;
    local_78 = (undefined *)0x0;
    local_7c = (undefined2 *)((uint)local_7c & 0xffffff00);
    local_80 = (undefined *)0x0;
    local_64 = (undefined2 *)((uint)local_64 & 0xffffff00);
    local_68 = (undefined *)0x0;
    local_44 = 0;
    local_98 = (undefined *)0x0;
    local_a0 = (undefined *)0x0;
    local_1f0 = (int *)0x0;
    local_70 = local_c0;
    local_6c = (undefined2 *)local_c0;
    iVar9 = FUN_01be5878(&local_1f0,0x20,0xa0);
    piVar8 = local_1f0;
    if ((iVar9 != 0) || (local_1f0 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xa0);
    }
    FUN_01bed4e2(local_1f0,&local_e0,0xa0);
    do {
      iVar9 = *piVar8;
      bVar25 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar25);
    *piVar8 = iVar9 + 1;
    if (-1 < iVar9) {
      piVar10 = (int *)thunk_FUN_01be5118(0x30);
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x30);
      }
      local_60 = &DAT_01c05a54;
      local_68 = &DAT_01c05a4c;
      local_70 = &DAT_01c05a44;
      local_78 = &DAT_01c05a3c;
      local_80 = &DAT_01c05a34;
      local_88 = &DAT_01c05a2c;
      local_90 = &DAT_01c05a24;
      local_98 = &DAT_01c05a1c;
      local_a0 = &DAT_01c05a14;
      local_a8 = &DAT_01c05a0c;
      local_b0 = &DAT_01c05a04;
      local_5c = &DAT_0132b6a0;
      local_64 = &DAT_0132b6a0;
      local_6c = &DAT_0132b6a0;
      local_74 = (int *)&DAT_0132b6a0;
      local_7c = &DAT_0132b6a0;
      local_84 = &DAT_0132b6a0;
      local_8c = &DAT_0132b6a0;
      local_94 = &DAT_0132b6a0;
      local_9c = &DAT_0132b6a0;
      local_a4 = &DAT_0132b6a0;
      local_ac = &DAT_0132b6a0;
      local_b4 = &DAT_0132b6a0;
      local_b8 = &DAT_01c059fc;
      local_bc = &DAT_0132b6a0;
      local_c0 = &DAT_01c0e854;
      local_c4 = &DAT_0132b6a0;
      local_c8 = &DAT_01c059f4;
      local_cc = (int *)&DAT_0132b6a0;
      local_d0 = (int *)&DAT_01c059ec;
      local_d4 = (int *)&DAT_0132b6a0;
      local_d8 = (int *)&DAT_01c059e4;
      local_dc = (int *)&DAT_0132b6a0;
      local_e0 = (int *)&DAT_01c059dc;
      FUN_00664898(&local_1f0,&DAT_005a0b34,&local_e0);
      piVar14 = local_1ec;
      piVar15 = local_1f0;
      FUN_0167a38c(&local_1f0,local_1ec,local_1e8);
      if (local_1f0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_1f0 | 4);
        local_e0 = (int *)*puVar11;
        local_dc = (int *)puVar11[1];
        local_d8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_e0,&DAT_01c05afc,&DAT_01c05a5c);
      }
      local_d8 = local_1f0;
      local_d4 = local_1ec;
      local_d0 = local_1e8;
      local_cc = (int *)uStack_1e4;
      local_dc = (int *)CONCAT13(local_dc._3_1_,0x10000);
      local_e0 = (int *)0x2;
      FUN_0167a38c(&local_1f0,".*",2);
      if (local_1f0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_1f0 | 4);
        local_118 = (int *)*puVar11;
        local_114 = puVar11[1];
        local_110 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_118,&DAT_01c05afc,&DAT_01c05a6c);
      }
      piVar10[8] = (int)local_1f0;
      piVar10[9] = (int)local_1ec;
      piVar10[10] = (int)local_1e8;
      piVar10[0xb] = uStack_1e4;
      *piVar10 = (int)local_e0;
      piVar10[1] = (int)local_dc;
      piVar10[2] = (int)local_d8;
      piVar10[3] = (int)local_d4;
      piVar10[4] = (int)local_d0;
      piVar10[5] = (int)local_cc;
      *(undefined1 *)((int)piVar10 + 0x1e) = 0;
      *(undefined2 *)(piVar10 + 7) = 0;
      local_184 = CONCAT31(local_184._1_3_,1);
      piVar10[6] = 2;
      local_188 = (int *)0x2;
      local_190 = (int *)0x2;
      local_18c = piVar10;
      FUN_019bb7e0(piVar15,piVar14);
      puVar11 = (undefined4 *)thunk_FUN_01be5118(0x48);
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x48);
      }
      FUN_0167a38c(&local_e0,"^GET (/static/.*|/var/.*|/assets/.*)",0x24);
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c058dc);
      }
      local_1e8 = local_e0;
      uStack_1e4 = (uint)local_dc;
      local_1e0 = local_d8;
      piStack_1dc = local_d4;
      local_1ec = (int *)((uint)local_1ec._3_1_ << 0x18);
      local_1ec = (int *)CONCAT22(local_1ec._2_2_,1);
      local_1f0 = (int *)0x2;
      FUN_0167a38c(&local_118,"^(GET /miner/support_archive|POST /system/upgrade/upload)$",0x3a);
      if (local_118 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_118 | 4);
        local_e0 = (int *)*puVar11;
        local_dc = (int *)puVar11[1];
        local_d8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_e0,&DAT_01c05afc,&DAT_01c058ec);
      }
      local_d8 = local_118;
      local_d4 = (int *)local_114;
      local_d0 = local_110;
      local_cc = (int *)uStack_10c;
      local_dc = (int *)((uint)local_dc & 0xff000000);
      local_e0 = (int *)0x2;
      FUN_0167a38c(&local_118,".*",2);
      if (local_118 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_118 | 4);
        local_130 = (int *)*puVar11;
        local_12c = puVar11[1];
        local_128 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_130,&DAT_01c05afc,&DAT_01c058fc);
      }
      puVar11[0xe] = local_118;
      puVar11[0xf] = local_114;
      puVar11[0x10] = local_110;
      puVar11[0x11] = uStack_10c;
      *puVar11 = local_1f0;
      puVar11[1] = local_1ec;
      puVar11[2] = local_1e8;
      puVar11[3] = uStack_1e4;
      puVar11[4] = local_1e0;
      puVar11[5] = piStack_1dc;
      puVar11[6] = local_e0;
      puVar11[7] = local_dc;
      puVar11[8] = local_d8;
      puVar11[9] = local_d4;
      puVar11[10] = local_d0;
      puVar11[0xb] = local_cc;
      *(undefined1 *)((int)puVar11 + 0x36) = 1;
      local_174 = CONCAT31(local_174._1_3_,1);
      *(undefined2 *)(puVar11 + 0xd) = 0;
      local_178 = 3;
      local_180 = 3;
      puVar11[0xc] = 2;
      local_17c = puVar11;
      puVar11 = (undefined4 *)thunk_FUN_01be5118(0x60);
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x60);
      }
      FUN_0167a38c(&local_e0,"(?i)^mutation\\(auth/login\\)$",0x1c);
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c05a7c);
      }
      local_110 = local_e0;
      uStack_10c = (uint)local_dc;
      piStack_108 = local_d8;
      uStack_104 = (uint)local_d4;
      local_114 = CONCAT13(local_114._3_1_,0x10000);
      local_114 = CONCAT22(local_114._2_2_,0x100);
      local_118 = (int *)0x2;
      FUN_0167a38c(&local_e0,"(?i)^mutation\\((bos/setPassword|bos/wifi/connect)\\)$",0x34);
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c05a8c);
      }
      local_1e8 = local_e0;
      uStack_1e4 = (uint)local_dc;
      local_1e0 = local_d8;
      piStack_1dc = local_d4;
      local_1ec._2_2_ = (ushort)((uint)local_1ec >> 0x10) & 0xff00;
      local_1ec = (int *)CONCAT22(local_1ec._2_2_,0x100);
      local_1f0 = (int *)0x2;
      FUN_0167a38c(&local_130,"(?i)^mutation\\(",0xf);
      if (local_130 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_130 | 4);
        local_e0 = (int *)*puVar11;
        local_dc = (int *)puVar11[1];
        local_d8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_e0,&DAT_01c05afc,&DAT_01c05a9c);
      }
      local_d8 = local_130;
      local_d4 = (int *)local_12c;
      local_d0 = local_128;
      local_cc = (int *)uStack_124;
      local_dc = (int *)((uint)local_dc & 0xff000000);
      local_e0 = (int *)0x2;
      FUN_0167a38c(&local_130,"(?i)^(query|subscription)\\(",0x1b);
      if (local_130 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_130 | 4);
        local_100 = (int *)*puVar11;
        uStack_fc = puVar11[1];
        iStack_f8 = puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_100,&DAT_01c05afc,&DAT_01c05aac);
      }
      puVar11[0x14] = local_130;
      puVar11[0x15] = local_12c;
      puVar11[0x16] = local_128;
      puVar11[0x17] = uStack_124;
      *puVar11 = local_118;
      puVar11[1] = local_114;
      puVar11[2] = local_110;
      puVar11[3] = uStack_10c;
      puVar11[4] = piStack_108;
      puVar11[5] = uStack_104;
      puVar11[6] = local_1f0;
      puVar11[7] = local_1ec;
      puVar11[8] = local_1e8;
      puVar11[9] = uStack_1e4;
      puVar11[10] = local_1e0;
      puVar11[0xb] = piStack_1dc;
      puVar11[0xc] = local_e0;
      puVar11[0xd] = local_dc;
      puVar11[0xe] = local_d8;
      puVar11[0xf] = local_d4;
      puVar11[0x10] = local_d0;
      puVar11[0x11] = local_cc;
      *(undefined1 *)((int)puVar11 + 0x4e) = 1;
      local_164 = CONCAT31(local_164._1_3_,1);
      *(undefined2 *)(puVar11 + 0x13) = 0;
      local_168 = 4;
      local_170 = 4;
      puVar11[0x12] = 2;
      local_16c = puVar11;
      piVar10 = (int *)thunk_FUN_01be5118(0x78);
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x78);
      }
      FUN_0167a38c(&local_e0,
                   "^/grpc\\.reflection\\.v1(alpha)?\\.ServerReflection/ServerReflectionInfo$",0x46)
      ;
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c0590c);
      }
      local_128 = local_e0;
      uStack_124 = (uint)local_dc;
      piStack_120 = local_d8;
      iStack_11c = (int)local_d4;
      local_12c = (uint)local_12c._3_1_ << 0x18;
      local_12c = CONCAT22(local_12c._2_2_,1);
      local_130 = (int *)0x2;
      FUN_0167a38c(&local_e0,"^/braiins\\.bos\\.v1\\.AuthenticationService/Login$",0x30);
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c0591c);
      }
      local_110 = local_e0;
      uStack_10c = (uint)local_dc;
      piStack_108 = local_d8;
      uStack_104 = (uint)local_d4;
      local_114 = CONCAT13(local_114._3_1_,0x10000);
      local_114 = CONCAT22(local_114._2_2_,0x100);
      local_118 = (int *)0x2;
      FUN_0167a38c(&local_e0,
                   "^/(braiins\\.bos\\.v1\\.AuthenticationService/SetPassword|braiins\\.bos\\.v1\\.LicenseService/ApplyContractKey)$"
                   ,0x6a);
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c0592c);
      }
      local_1e8 = local_e0;
      uStack_1e4 = (uint)local_dc;
      local_1e0 = local_d8;
      piStack_1dc = local_d4;
      local_1ec._2_2_ = (ushort)((uint)local_1ec >> 0x10) & 0xff00;
      local_1ec = (int *)CONCAT22(local_1ec._2_2_,0x100);
      local_1f0 = (int *)0x2;
      FUN_0167a38c(&local_100,&DAT_00567748,0x10);
      if (local_100 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_100 | 4);
        local_e0 = (int *)*puVar11;
        local_dc = (int *)puVar11[1];
        local_d8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_e0,&DAT_01c05afc,&DAT_01c0593c);
      }
      local_d8 = local_100;
      local_d4 = (int *)uStack_fc;
      local_d0 = (int *)iStack_f8;
      local_cc = (int *)iStack_f4;
      local_dc = (int *)CONCAT13(local_dc._3_1_,0x10000);
      local_e0 = (int *)0x2;
      FUN_0167a38c(&local_100,".*",2);
      if (local_100 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_100 | 4);
        local_140 = *puVar11;
        local_13c = (undefined4 *)puVar11[1];
        local_138 = puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_140,&DAT_01c05afc,&DAT_01c0594c);
      }
      piVar10[0x1a] = (int)local_100;
      piVar10[0x1b] = uStack_fc;
      piVar10[0x1c] = iStack_f8;
      piVar10[0x1d] = iStack_f4;
      *piVar10 = (int)local_130;
      piVar10[1] = local_12c;
      piVar10[2] = (int)local_128;
      piVar10[3] = uStack_124;
      piVar10[4] = (int)piStack_120;
      piVar10[5] = iStack_11c;
      piVar10[6] = (int)local_118;
      piVar10[7] = local_114;
      piVar10[8] = (int)local_110;
      piVar10[9] = uStack_10c;
      piVar10[10] = (int)piStack_108;
      piVar10[0xb] = uStack_104;
      piVar10[0xc] = (int)local_1f0;
      piVar10[0xd] = (int)local_1ec;
      piVar10[0xe] = (int)local_1e8;
      piVar10[0xf] = uStack_1e4;
      piVar10[0x10] = (int)local_1e0;
      piVar10[0x11] = (int)piStack_1dc;
      piVar10[0x12] = (int)local_e0;
      piVar10[0x13] = (int)local_dc;
      piVar10[0x14] = (int)local_d8;
      piVar10[0x15] = (int)local_d4;
      piVar10[0x16] = (int)local_d0;
      piVar10[0x17] = (int)local_cc;
      *(undefined1 *)((int)piVar10 + 0x66) = 0;
      *(undefined2 *)(piVar10 + 0x19) = 0;
      piVar10[0x18] = 2;
      local_154 = CONCAT31(local_154._1_3_,1);
      local_158 = 5;
      local_160 = 5;
      local_15c = piVar10;
      piVar10 = (int *)thunk_FUN_01be5118(0x60);
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x60);
      }
      FUN_0167a38c(&local_e0,
                   "^/grpc\\.reflection\\.v1(alpha)?\\.ServerReflection/ServerReflectionInfo$",0x46)
      ;
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c05abc);
      }
      local_110 = local_e0;
      uStack_10c = (uint)local_dc;
      piStack_108 = local_d8;
      uStack_104 = (uint)local_d4;
      local_114._2_2_ = (ushort)((uint)local_114 >> 0x10) & 0xff00;
      local_114 = CONCAT22(local_114._2_2_,1);
      local_118 = (int *)0x2;
      FUN_0167a38c(&local_e0,"^/braiins\\.boser\\.web\\.AuthenticationService/Login$",0x33);
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c05acc);
      }
      local_1e8 = local_e0;
      uStack_1e4 = (uint)local_dc;
      local_1e0 = local_d8;
      piStack_1dc = local_d4;
      local_1ec = (int *)CONCAT13(local_1ec._3_1_,0x10000);
      local_1ec = (int *)CONCAT22(local_1ec._2_2_,0x100);
      local_1f0 = (int *)0x2;
      FUN_0167a38c(&local_130,"/Get[A-Z]",9);
      if (local_130 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_130 | 4);
        local_e0 = (int *)*puVar11;
        local_dc = (int *)puVar11[1];
        local_d8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_e0,&DAT_01c05afc,&DAT_01c05adc);
      }
      local_d8 = local_130;
      local_d4 = (int *)local_12c;
      local_d0 = local_128;
      local_cc = (int *)uStack_124;
      local_dc = (int *)CONCAT13(local_dc._3_1_,0x10000);
      local_e0 = (int *)0x2;
      FUN_0167a38c(&local_130,".*",2);
      if (local_130 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_130 | 4);
        local_100 = (int *)*puVar11;
        uStack_fc = puVar11[1];
        iStack_f8 = puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_100,&DAT_01c05afc,&DAT_01c05aec);
      }
      piVar10[0x14] = (int)local_130;
      piVar10[0x15] = local_12c;
      piVar10[0x16] = (int)local_128;
      piVar10[0x17] = uStack_124;
      *piVar10 = (int)local_118;
      piVar10[1] = local_114;
      piVar10[2] = (int)local_110;
      piVar10[3] = uStack_10c;
      piVar10[4] = (int)piStack_108;
      piVar10[5] = uStack_104;
      piVar10[6] = (int)local_1f0;
      piVar10[7] = (int)local_1ec;
      piVar10[8] = (int)local_1e8;
      piVar10[9] = uStack_1e4;
      piVar10[10] = (int)local_1e0;
      piVar10[0xb] = (int)piStack_1dc;
      piVar10[0xc] = (int)local_e0;
      piVar10[0xd] = (int)local_dc;
      piVar10[0xe] = (int)local_d8;
      piVar10[0xf] = (int)local_d4;
      piVar10[0x10] = (int)local_d0;
      piVar10[0x11] = (int)local_cc;
      *(undefined1 *)((int)piVar10 + 0x4e) = 0;
      *(undefined2 *)(piVar10 + 0x13) = 0;
      piVar10[0x12] = 2;
      local_144 = CONCAT31(local_144._1_3_,1);
      local_148 = 4;
      local_150 = 4;
      local_14c = piVar10;
      puVar11 = (undefined4 *)thunk_FUN_01be5118(0x48);
      if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x48);
      }
      FUN_0167a38c(&local_e0,"^POST /cgi-bin/luci/$",0x15);
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c0595c);
      }
      local_1e8 = local_e0;
      uStack_1e4 = (uint)local_dc;
      local_1e0 = local_d8;
      piStack_1dc = local_d4;
      local_1ec = (int *)CONCAT13(local_1ec._3_1_,0x10000);
      local_1ec = (int *)CONCAT22(local_1ec._2_2_,0x100);
      local_1f0 = (int *)0x2;
      FUN_0167a38c(&local_118,"^POST .*/(cfg_save|cfg_apply|reboot/call|sysupgrade)$",0x35);
      if (local_118 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_118 | 4);
        local_e0 = (int *)*puVar11;
        local_dc = (int *)puVar11[1];
        local_d8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_e0,&DAT_01c05afc,&DAT_01c0596c);
      }
      local_d8 = local_118;
      local_d4 = (int *)local_114;
      local_d0 = local_110;
      local_cc = (int *)uStack_10c;
      local_dc = (int *)((uint)local_dc & 0xff000000);
      local_e0 = (int *)0x2;
      FUN_0167a38c(&local_118,".*",2);
      if (local_118 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_118 | 4);
        local_130 = (int *)*puVar11;
        local_12c = puVar11[1];
        local_128 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_130,&DAT_01c05afc,&DAT_01c0597c);
      }
      puVar11[0xe] = local_118;
      puVar11[0xf] = local_114;
      puVar11[0x10] = local_110;
      puVar11[0x11] = uStack_10c;
      *puVar11 = local_1f0;
      puVar11[1] = local_1ec;
      puVar11[2] = local_1e8;
      puVar11[3] = uStack_1e4;
      puVar11[4] = local_1e0;
      puVar11[5] = piStack_1dc;
      puVar11[6] = local_e0;
      puVar11[7] = local_dc;
      puVar11[8] = local_d8;
      puVar11[9] = local_d4;
      puVar11[10] = local_d0;
      puVar11[0xb] = local_cc;
      *(undefined1 *)((int)puVar11 + 0x36) = 1;
      local_134 = CONCAT31(local_134._1_3_,1);
      *(undefined2 *)(puVar11 + 0xd) = 0;
      local_138 = 3;
      local_140 = 3;
      puVar11[0xc] = 2;
      local_13c = puVar11;
      piVar10 = (int *)thunk_FUN_01be5118(0x78);
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x78);
      }
      FUN_0167a38c(&local_e0,"^POST /auth/login$",0x12);
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c0598c);
      }
      local_128 = local_e0;
      uStack_124 = (uint)local_dc;
      piStack_120 = local_d8;
      iStack_11c = (int)local_d4;
      local_12c = CONCAT13(local_12c._3_1_,0x10000);
      local_12c = CONCAT22(local_12c._2_2_,0x100);
      local_130 = (int *)0x2;
      FUN_0167a38c(&local_e0,"^PUT /(auth/password|network/wifi/connection)$",0x2e);
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c0599c);
      }
      local_110 = local_e0;
      uStack_10c = (uint)local_dc;
      piStack_108 = local_d8;
      uStack_104 = (uint)local_d4;
      local_114._2_2_ = (ushort)((uint)local_114 >> 0x10) & 0xff00;
      local_114 = CONCAT22(local_114._2_2_,0x100);
      local_118 = (int *)0x2;
      FUN_0167a38c(&local_e0,"^PUT /license/apply-contract-key$",0x21);
      if (local_e0 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_e0 | 4);
        local_1f0 = (int *)*puVar11;
        local_1ec = (int *)puVar11[1];
        local_1e8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_1f0,&DAT_01c05afc,&DAT_01c059ac);
      }
      local_1e8 = local_e0;
      uStack_1e4 = (uint)local_dc;
      local_1e0 = local_d8;
      piStack_1dc = local_d4;
      local_1ec._2_2_ = (ushort)((uint)local_1ec >> 0x10) & 0xff00;
      local_1ec = (int *)CONCAT22(local_1ec._2_2_,0x100);
      local_1f0 = (int *)0x2;
      FUN_0167a38c(&local_100,"^GET /",6);
      if (local_100 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_100 | 4);
        local_e0 = (int *)*puVar11;
        local_dc = (int *)puVar11[1];
        local_d8 = (int *)puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_e0,&DAT_01c05afc,&DAT_01c059bc);
      }
      local_d8 = local_100;
      local_d4 = (int *)uStack_fc;
      local_d0 = (int *)iStack_f8;
      local_cc = (int *)iStack_f4;
      local_dc = (int *)CONCAT13(local_dc._3_1_,0x10000);
      local_e0 = (int *)0x2;
      FUN_0167a38c(&local_100,".*",2);
      if (local_100 == (int *)0x0) {
        puVar11 = (undefined4 *)((uint)&local_100 | 4);
        local_f0 = *puVar11;
        uStack_ec = puVar11[1];
        uStack_e8 = puVar11[2];
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("BUG: invalid regex",0x12,&local_f0,&DAT_01c05afc,&DAT_01c059cc);
      }
      piVar10[0x1a] = (int)local_100;
      piVar10[0x1b] = uStack_fc;
      piVar10[0x1c] = iStack_f8;
      piVar10[0x1d] = iStack_f4;
      *piVar10 = (int)local_130;
      piVar10[1] = local_12c;
      piVar10[2] = (int)local_128;
      piVar10[3] = uStack_124;
      piVar10[4] = (int)piStack_120;
      piVar10[5] = iStack_11c;
      piVar10[6] = (int)local_118;
      piVar10[7] = local_114;
      piVar10[8] = (int)local_110;
      piVar10[9] = uStack_10c;
      piVar10[10] = (int)piStack_108;
      piVar10[0xb] = uStack_104;
      piVar10[0xc] = (int)local_1f0;
      piVar10[0xd] = (int)local_1ec;
      piVar10[0xe] = (int)local_1e8;
      piVar10[0xf] = uStack_1e4;
      piVar10[0x10] = (int)local_1e0;
      piVar10[0x11] = (int)piStack_1dc;
      piVar10[0x12] = (int)local_e0;
      piVar10[0x13] = (int)local_dc;
      piVar10[0x14] = (int)local_d8;
      piVar10[0x15] = (int)local_d4;
      piVar10[0x16] = (int)local_d0;
      piVar10[0x17] = (int)local_cc;
      *(undefined1 *)((int)piVar10 + 0x66) = 0;
      *(undefined2 *)(piVar10 + 0x19) = 0;
      piVar10[0x18] = 2;
      local_1f0 = local_190;
      local_1ec = local_18c;
      local_1e8 = local_188;
      uStack_1e4 = local_184;
      local_1e0 = (int *)local_180;
      piStack_1dc = local_17c;
      uStack_1d8 = local_178;
      uStack_1d4 = local_174;
      local_1d0 = local_170;
      puStack_1cc = local_16c;
      uStack_1c8 = local_168;
      uStack_1c4 = local_164;
      local_1c0 = local_160;
      piStack_1bc = local_15c;
      uStack_1b8 = local_158;
      uStack_1b4 = local_154;
      local_1b0 = local_150;
      piStack_1ac = local_14c;
      uStack_1a8 = local_148;
      uStack_1a4 = local_144;
      local_1a0 = local_140;
      puStack_19c = local_13c;
      uStack_198 = local_138;
      uStack_194 = local_134;
      local_dc = (int *)0x1;
      local_e0 = (int *)&DAT_00000001;
      FUN_01bed4e2(&local_d8,&local_1f0,0x60);
      local_6c = (undefined2 *)CONCAT31(local_6c._1_3_,1);
      local_68 = (undefined *)CONCAT22(local_68._2_2_,1);
      local_70 = (undefined *)0x5;
      local_78 = (undefined *)0x5;
      local_74 = piVar10;
      iVar9 = thunk_FUN_01be5118(0x7c);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x7c);
      }
      FUN_01bed4e2(iVar9,&local_e0,0x7c);
      piVar10 = (int *)thunk_FUN_01be5118(0xac);
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xac);
      }
      piVar15 = piVar10 + 0x29;
      *piVar15 = 1;
      *(undefined1 *)(piVar10 + 3) = 0;
      *piVar10 = 1;
      piVar10[1] = 1;
      piVar10[2] = 0;
      piVar10[4] = 0;
      piVar10[5] = 0;
      piVar10[6] = 0;
      *(undefined1 *)(piVar10 + 7) = 0;
      piVar10[8] = 0;
      piVar10[9] = 0;
      piVar10[10] = 0;
      *(undefined1 *)(piVar10 + 0xb) = 0;
      piVar10[0xc] = 0;
      piVar10[0xd] = 0;
      piVar10[0xe] = 0;
      *(undefined1 *)(piVar10 + 0xf) = 0;
      *(undefined1 *)(piVar10 + 0x13) = 0;
      piVar10[0x10] = 0;
      piVar10[0x11] = 0;
      piVar10[0x12] = 0;
      *(undefined1 *)(piVar10 + 0x17) = 0;
      piVar10[0x14] = 0;
      piVar10[0x15] = 0;
      piVar10[0x16] = 0;
      piVar10[0x18] = 0;
      piVar10[0x19] = 0;
      piVar10[0x1a] = 0;
      *(undefined1 *)(piVar10 + 0x1b) = 0;
      piVar10[0x1c] = 0;
      piVar10[0x1d] = 0;
      piVar10[0x1e] = 0;
      *(undefined1 *)(piVar10 + 0x1f) = 0;
      piVar10[0x20] = 0;
      piVar10[0x21] = 0;
      piVar10[0x22] = 0;
      *(undefined1 *)(piVar10 + 0x23) = 0;
      piVar10[0x24] = 0;
      piVar10[0x25] = 0;
      piVar10[0x26] = 0;
      piVar10[0x27] = iVar9;
      piVar10[0x28] = 0;
      piVar10[0x2a] = 1;
      do {
        iVar9 = *piVar10;
        bVar25 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar25);
      *piVar10 = iVar9 + 1;
      if (-1 < iVar9) {
        do {
          iVar9 = *piVar15;
          bVar25 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar25);
        *piVar15 = iVar9 + -1;
        if (iVar9 == 1) {
          FUN_019e03e8(piVar10 + 0x22);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar10;
          bVar25 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar25);
        *piVar10 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_006876c0(piVar10);
        }
        piVar15 = piVar8 + 0x26;
        do {
          bVar25 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar25);
        *piVar15 = *piVar15 + 1;
        do {
          iVar9 = *piVar8;
          bVar25 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar25);
        *piVar8 = iVar9 + 1;
        if (-1 < iVar9) {
          uVar27 = thunk_FUN_01bee35a(iVar9,0x2c0);
          puVar21 = (uint *)((int)uVar27 + (int)((ulonglong)uVar27 >> 0x20));
          if ((char)puVar21[4] == '\0') {
            FUN_019ae6ac(&local_e0);
            *puVar21 = (uint)local_e0;
            puVar21[1] = (uint)local_dc;
            puVar21[2] = (uint)local_d8;
            puVar21[3] = (uint)local_d4;
            *(undefined1 *)(puVar21 + 4) = 1;
          }
          uVar12 = puVar21[2];
          uVar24 = *puVar21;
          uVar13 = puVar21[3];
          uVar22 = puVar21[1];
          *puVar21 = uVar24 + 1;
          puVar21[1] = uVar22 + (0xfffffffe < uVar24);
          DataMemoryBarrier(0xb);
          if (DAT_01d51154 != 2) {
            FUN_0131bba4();
          }
          piVar15 = DAT_01d51150;
          if (DAT_01d51150 < (int *)0x2) {
            uVar23 = 0x22;
            puVar19 = &DAT_01c04d88;
            pcVar17 = "assertion failed: shard_amount > 1";
          }
          else {
            if (((uint)DAT_01d51150 & (int)DAT_01d51150 - 1U) == 0) {
              uVar1 = (int)DAT_01d51150 * 0x20;
              bVar26 = (int *)0x7fffffe < DAT_01d51150;
              bVar25 = DAT_01d51150 == (int *)0x7ffffff;
              uVar23 = 0;
              if (DAT_01d51150 < (int *)0x8000000) {
                bVar26 = 0x7fffffdf < uVar1;
                bVar25 = uVar1 == 0x7fffffe0;
              }
              if (!bVar26 || bVar25) {
                local_e0 = (int *)0x0;
                uVar23 = 0x20;
                iVar9 = FUN_01be5878(&local_e0,0x20,uVar1);
                piVar14 = local_e0;
                if ((iVar9 == 0) && (local_e0 != (int *)0x0)) {
                  bVar4 = (byte)piVar15;
                  bVar5 = (byte)((uint)piVar15 >> 8);
                  bVar6 = (byte)((uint)piVar15 >> 0x10);
                  bVar3 = (byte)((uint)piVar15 >> 0x18);
                  piVar18 = local_e0 + 2;
                  piVar20 = piVar15;
                  do {
                    piVar18[-1] = (int)&DAT_0056d238;
                    piVar18[-2] = 0;
                    piVar20 = (int *)((int)piVar20 + -1);
                    *piVar18 = 0;
                    piVar18[1] = 0;
                    piVar18[2] = 0;
                    piVar18 = piVar18 + 8;
                  } while (piVar20 != (int *)0x0);
                  local_d8 = piVar15;
                  local_dc = local_e0;
                  local_e0 = piVar15;
                  local_1e8 = piVar15;
                  local_1ec = piVar14;
                  local_1f0 = piVar15;
                  puVar11 = (undefined4 *)thunk_FUN_01be5118(0x28);
                  if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0066439c(8,0x28);
                  }
                  puVar11[8] = 0x20 - LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7));
                  puVar11[5] = uVar22;
                  puVar11[6] = uVar12;
                  *puVar11 = 1;
                  puVar11[1] = 1;
                  puVar11[2] = piVar14;
                  puVar11[3] = piVar15;
                  puVar11[4] = uVar24;
                  puVar11[7] = uVar13;
                  local_c0 = (undefined *)FUN_0067ddc4(0);
                  local_4c = 100;
                  local_50 = 200;
                  local_bc = (undefined2 *)0x0;
                  local_54 = 0;
                  local_58 = 0;
                  local_5c = (undefined2 *)0x0;
                  local_60 = (undefined *)((uint)local_60 & 0xffffff00);
                  local_74 = (int *)0x0;
                  local_78 = (undefined *)0x0;
                  local_7c = (undefined2 *)((uint)local_7c & 0xffffff00);
                  local_80 = (undefined *)0x0;
                  local_64 = (undefined2 *)((uint)local_64 & 0xffffff00);
                  local_68 = (undefined *)0x0;
                  local_44 = 0;
                  local_48 = 1;
                  local_98 = (undefined *)0x0;
                  local_a0 = (undefined *)0x0;
                  local_dc = (int *)0x1;
                  local_e0 = (int *)&DAT_00000001;
                  local_1f0 = (int *)0x0;
                  local_70 = local_c0;
                  local_6c = (undefined2 *)local_c0;
                  iVar9 = FUN_01be5878(&local_1f0,0x20,0xa0);
                  piVar15 = local_1f0;
                  if ((iVar9 != 0) || (local_1f0 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    FUN_0066439c(0x20,0xa0);
                  }
                  FUN_01bed4e2(local_1f0,&local_e0,0xa0);
                  do {
                    iVar9 = *piVar15;
                    bVar25 = (bool)hasExclusiveAccess(piVar15);
                  } while (!bVar25);
                  *piVar15 = iVar9 + 1;
                  if (-1 < iVar9) {
                    piVar14 = (int *)thunk_FUN_01be5118(0xbc);
                    if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0066439c(4,0xbc);
                    }
                    *(undefined1 *)(piVar14 + 3) = 0;
                    piVar14[2] = 0;
                    piVar14[4] = 0;
                    piVar14[5] = 0;
                    piVar14[6] = 0;
                    *(undefined1 *)(piVar14 + 7) = 0;
                    piVar14[8] = 0;
                    piVar14[9] = 0;
                    piVar14[10] = 0;
                    *(undefined1 *)(piVar14 + 0xb) = 0;
                    piVar14[0xc] = 0;
                    piVar14[0xd] = 0;
                    piVar14[0xe] = 0;
                    *(undefined1 *)(piVar14 + 0xf) = 0;
                    *(undefined1 *)(piVar14 + 0x13) = 0;
                    piVar14[0x10] = 0;
                    piVar14[0x11] = 0;
                    piVar14[0x12] = 0;
                    *(undefined1 *)(piVar14 + 0x17) = 0;
                    piVar14[0x14] = 0;
                    piVar14[0x15] = 0;
                    piVar14[0x16] = 0;
                    piVar14[0x18] = 0;
                    piVar14[0x19] = 0;
                    piVar14[0x1a] = 0;
                    *(undefined1 *)(piVar14 + 0x1b) = 0;
                    piVar14[0x1c] = 0;
                    piVar14[0x1d] = 0;
                    piVar14[0x1e] = 0;
                    *(undefined1 *)(piVar14 + 0x1f) = 0;
                    piVar14[0x20] = 0;
                    piVar14[0x21] = 0;
                    piVar14[0x22] = 0;
                    *(undefined1 *)(piVar14 + 0x23) = 0;
                    piVar14[0x24] = 0;
                    piVar14[0x25] = 0;
                    piVar14[0x26] = 0;
                    piVar14[0x2c] = 0;
                    *piVar14 = 1;
                    piVar14[1] = 1;
                    piVar14[0x2d] = 1;
                    piVar14[0x2e] = 1;
                    *(undefined1 *)(piVar14 + 0x2a) = 2;
                    do {
                      iVar9 = *piVar14;
                      bVar25 = (bool)hasExclusiveAccess(piVar14);
                    } while (!bVar25);
                    *piVar14 = iVar9 + 1;
                    if (-1 < iVar9) {
                      local_d8 = (int *)FUN_01a3b664();
                      local_d0 = piVar15;
                      local_e0 = piVar15;
                      local_c8 = (undefined *)0x0;
                      local_b0 = (undefined *)0x0;
                      local_b4 = (undefined2 *)0x2;
                      local_b8 = (undefined *)((uint)local_b8 & 0xffffff00);
                      local_bc = (undefined2 *)0x0;
                      local_c0 = (undefined *)0x0;
                      local_c4 = (undefined2 *)((uint)local_c4 & 0xffffff00);
                      local_d4 = piVar7;
                      local_dc = piVar14;
                      local_cc = piVar14;
                      piVar15 = (int *)FUN_01a3b664();
                      local_1f0 = piVar15;
                      puVar16 = (undefined4 *)thunk_FUN_01be5118(0xc);
                      if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0066439c(4,0xc);
                      }
                      *(undefined1 *)(puVar16 + 2) = 0;
                      *puVar16 = 1;
                      puVar16[1] = 1;
                      param_1[6] = local_e0;
                      param_1[7] = local_dc;
                      param_1[8] = local_d8;
                      param_1[9] = local_d4;
                      param_1[10] = local_d0;
                      param_1[0xb] = local_cc;
                      param_1[0xc] = local_c8;
                      param_1[0xd] = local_c4;
                      param_1[0xe] = local_c0;
                      param_1[0xf] = local_bc;
                      param_1[0x10] = local_b8;
                      param_1[0x11] = local_b4;
                      param_1[0x12] = local_b0;
                      param_1[0x13] = piVar8;
                      param_1[0x14] = piVar7;
                      *param_1 = piVar8;
                      param_1[1] = piVar15;
                      param_1[2] = piVar10;
                      param_1[3] = puVar11;
                      param_1[4] = piVar8;
                      param_1[5] = puVar16;
                      return;
                    }
                  }
                  goto LAB_00686710;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar23,uVar1);
            }
            uVar23 = 0x30;
            puVar19 = &DAT_01c04d98;
            pcVar17 = 
            "assertion failed: shard_amount.is_power_of_two()event open/utils-rs/api-logging/src/api_usage/state.rs:287"
            ;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar17,uVar23,puVar19);
        }
      }
    }
  }
LAB_00686710:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0xfdee,0x686710);
  (*pcVar2)();
}

