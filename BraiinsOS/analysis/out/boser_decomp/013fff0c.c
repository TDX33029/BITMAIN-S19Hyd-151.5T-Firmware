// FUN_013fff0c @ 013fff0c size=1796 calls_out=10 calls_in=1
// strings: 

void FUN_013fff0c(int *param_1,short *param_2,short param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  short sVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  uint *puVar20;
  int local_1b4;
  undefined1 auStack_190 [104];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined2 local_34;
  undefined2 local_30;
  
  sVar1 = *param_2;
  *(undefined1 *)(param_2 + 0x20) = 1;
  if (sVar1 == 0) {
    puVar13 = (undefined4 *)((uint)&local_78 | 4);
    uVar11 = *(undefined4 *)(param_2 + 4);
    uVar14 = *(undefined4 *)(param_2 + 6);
    uVar15 = *(undefined4 *)(param_2 + 8);
    *puVar13 = *(undefined4 *)(param_2 + 2);
    puVar13[1] = uVar11;
    puVar13[2] = uVar14;
    puVar13[3] = uVar15;
    uVar11 = *(undefined4 *)(param_2 + 0xc);
    uVar14 = *(undefined4 *)(param_2 + 0xe);
    uVar15 = *(undefined4 *)(param_2 + 0x10);
    puVar13[4] = *(undefined4 *)(param_2 + 10);
    puVar13[5] = uVar11;
    puVar13[6] = uVar14;
    puVar13[7] = uVar15;
    local_78._2_2_ = param_2[1];
  }
  else {
    FUN_015e8ad4((uint)&local_78 | 4,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
  }
  sVar2 = param_2[0x12];
  local_78 = CONCAT22(local_78._2_2_,(ushort)(sVar1 != 0));
  if (sVar2 != 1) {
    puVar13 = (undefined4 *)((uint)&local_128 | 4);
    uVar11 = *(undefined4 *)(param_2 + 0x16);
    uVar14 = *(undefined4 *)(param_2 + 0x18);
    uVar15 = *(undefined4 *)(param_2 + 0x1a);
    uVar17 = *(undefined4 *)(param_2 + 0x1c);
    uVar18 = *(undefined4 *)(param_2 + 0x1e);
    *puVar13 = *(undefined4 *)(param_2 + 0x14);
    puVar13[1] = uVar11;
    puVar13[2] = uVar14;
    puVar13[3] = uVar15;
    puVar13[4] = uVar17;
    puVar13[5] = uVar18;
    local_128._2_2_ = param_2[0x13];
  }
  else {
    FUN_015e8ad4((uint)&local_128 | 4,*(undefined4 *)(param_2 + 0x16),
                 *(undefined4 *)(param_2 + 0x18));
  }
  local_a0 = 1;
  local_128 = CONCAT22(local_128._2_2_,(ushort)(sVar2 == 1));
  local_e0 = local_78;
  uStack_dc = uStack_74;
  uStack_d8 = uStack_70;
  uStack_d4 = local_6c;
  local_d0 = local_68;
  uStack_cc = local_64;
  uStack_c8 = uStack_60;
  uStack_c4 = uStack_5c;
  uStack_c0 = uStack_58;
  local_bc = local_128;
  uStack_b8 = uStack_124;
  uStack_b4 = uStack_120;
  local_b0 = local_11c;
  uStack_ac = local_118;
  uStack_a8 = local_114;
  uStack_a4 = uStack_110;
  puVar5 = (uint *)FUN_013fc3fc(param_1[4],param_1[5],param_1[6],param_1[7],&local_e0);
  iVar19 = *param_1;
  uVar16 = param_1[1];
  local_1b4 = 0;
  puVar10 = puVar5;
  while( true ) {
    uVar12 = uVar16 & (uint)puVar10;
    uVar6 = *(uint *)(iVar19 + uVar12);
    uVar7 = uVar6 ^ ((uint)puVar5 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar8 = uVar12 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                      (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar16;
      iVar9 = FUN_013cad2c(uVar8 * -0x118 + iVar19 + -0x118,&local_e0);
      uVar7 = uVar7 - 1 & uVar7;
      if (iVar9 != 0) {
        FUN_0079217c(&local_e0);
        puVar5 = (uint *)(uVar8 * -0x118 + iVar19);
        goto LAB_01400150;
      }
    }
    if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
    local_1b4 = local_1b4 + 4;
    puVar10 = (uint *)(uVar12 + local_1b4);
  }
  if (param_1[2] == 0) {
    FUN_01404f24(param_1,param_1 + 4);
  }
  sVar4 = (short)local_e0;
  FUN_01bed4e2(&local_128,(uint)&local_e0 | 2,0x42);
  if (sVar4 != 2) {
    FUN_01bed4e2(&local_78,&local_128,0x42);
    puVar10 = (uint *)*param_1;
    uVar16 = param_1[1];
    uVar6 = uVar16 & (uint)puVar5;
    uVar7 = *(uint *)((int)puVar10 + uVar6) & 0x80808080;
    if (uVar7 == 0) {
      iVar19 = 4;
      do {
        uVar6 = uVar6 + iVar19;
        iVar19 = iVar19 + 4;
        uVar6 = uVar6 & uVar16;
        uVar7 = *(uint *)((int)puVar10 + uVar6) & 0x80808080;
      } while (uVar7 == 0);
    }
    uVar6 = uVar6 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                   (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar16;
    uVar7 = (uint)*(char *)((int)puVar10 + uVar6);
    if (-1 < (int)uVar7) {
      uVar6 = *puVar10 & 0x80808080;
      uVar6 = LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                      (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18);
      uVar7 = (uint)*(byte *)((int)puVar10 + (uVar6 >> 3));
      uVar6 = uVar6 >> 3;
    }
    iVar19 = param_1[2];
    bVar3 = (byte)((uint)puVar5 >> 0x19);
    *(byte *)((int)puVar10 + uVar6) = bVar3;
    puVar5 = puVar10 + uVar6 * -0x46;
    *(byte *)((int)puVar10 + (uVar6 - 4 & uVar16) + 4) = bVar3;
    *(short *)(puVar5 + -0x46) = sVar4;
    param_1[2] = iVar19 - (uVar7 & 1);
    FUN_01bed4e2((int)puVar5 - 0x116,&local_78,0x42);
    iVar19 = param_1[3];
    puVar5[-0x18] = (uint)&DAT_3b9aca00;
    puVar5[-0x32] = (uint)&DAT_3b9aca00;
    param_1[3] = iVar19 + 1;
  }
LAB_01400150:
  puVar10 = puVar5 + -0x34;
  if (param_3 == 0) {
    puVar20 = puVar10;
    if ((undefined1 *)puVar5[-0x32] != &DAT_3b9aca00) goto LAB_0140042c;
    if (sVar1 == 0) {
      uVar11 = *(undefined4 *)(param_2 + 4);
      uVar14 = *(undefined4 *)(param_2 + 6);
      uVar15 = *(undefined4 *)(param_2 + 8);
      puVar13 = (undefined4 *)((uint)&local_e0 | 4);
      *puVar13 = *(undefined4 *)(param_2 + 2);
      puVar13[1] = uVar11;
      puVar13[2] = uVar14;
      puVar13[3] = uVar15;
      uVar11 = *(undefined4 *)(param_2 + 0xc);
      uVar14 = *(undefined4 *)(param_2 + 0xe);
      uVar15 = *(undefined4 *)(param_2 + 0x10);
      puVar13[4] = *(undefined4 *)(param_2 + 10);
      puVar13[5] = uVar11;
      puVar13[6] = uVar14;
      puVar13[7] = uVar15;
      local_e0 = (uint)(ushort)param_2[1] << 0x10;
    }
    else {
      FUN_015e8ad4((uint)&local_e0 | 4,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
    }
    local_e0 = CONCAT22(local_e0._2_2_,(ushort)(sVar1 != 0));
    if (sVar2 == 0) {
      puVar13 = (undefined4 *)((uint)&local_78 | 4);
      uVar11 = *(undefined4 *)(param_2 + 0x16);
      uVar14 = *(undefined4 *)(param_2 + 0x18);
      uVar15 = *(undefined4 *)(param_2 + 0x1a);
      uVar17 = *(undefined4 *)(param_2 + 0x1c);
      uVar18 = *(undefined4 *)(param_2 + 0x1e);
      *puVar13 = *(undefined4 *)(param_2 + 0x14);
      puVar13[1] = uVar11;
      puVar13[2] = uVar14;
      puVar13[3] = uVar15;
      puVar13[4] = uVar17;
      puVar13[5] = uVar18;
      local_78 = (uint)(ushort)param_2[0x13] << 0x10;
    }
    else {
      FUN_015e8ad4((uint)&local_78 | 4,*(undefined4 *)(param_2 + 0x16),
                   *(undefined4 *)(param_2 + 0x18));
    }
    uStack_3c = uStack_60;
    uStack_40 = local_64;
    uStack_44 = local_68;
    uStack_48 = local_6c;
    uStack_4c = uStack_70;
    local_50 = uStack_74;
    local_78 = CONCAT22(local_78._2_2_,(ushort)(sVar2 != 0));
    uStack_54 = local_78;
    local_128 = local_e0;
    uStack_124 = uStack_dc;
    uStack_120 = uStack_d8;
    local_11c = uStack_d4;
    local_118 = local_d0;
    local_114 = uStack_cc;
    uStack_110 = uStack_c8;
    uStack_10c = uStack_c4;
    uStack_108 = uStack_c0;
    local_104 = local_78;
    local_100 = uStack_74;
    uStack_fc = uStack_70;
    local_f8 = local_6c;
    uStack_f4 = local_68;
    uStack_f0 = local_64;
    uStack_ec = uStack_60;
    local_78 = local_e0;
    uStack_74 = uStack_dc;
    uStack_70 = uStack_d8;
    local_6c = uStack_d4;
    local_68 = local_d0;
    local_64 = uStack_cc;
    uStack_60 = uStack_c8;
    uStack_5c = uStack_c4;
    uStack_58 = uStack_c0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 1;
    uVar11 = FUN_0140af4c();
    FUN_014059bc(&local_e0,&local_78,uVar11,0);
    FUN_01bed4e2(puVar10,&local_e0,0x68);
  }
  else {
    puVar20 = puVar5 + -0x1a;
    if ((undefined1 *)puVar5[-0x18] != &DAT_3b9aca00) goto LAB_0140042c;
    if (sVar1 == 0) {
      uVar11 = *(undefined4 *)(param_2 + 4);
      uVar14 = *(undefined4 *)(param_2 + 6);
      uVar15 = *(undefined4 *)(param_2 + 8);
      puVar13 = (undefined4 *)((uint)&local_e0 | 4);
      *puVar13 = *(undefined4 *)(param_2 + 2);
      puVar13[1] = uVar11;
      puVar13[2] = uVar14;
      puVar13[3] = uVar15;
      uVar11 = *(undefined4 *)(param_2 + 0xc);
      uVar14 = *(undefined4 *)(param_2 + 0xe);
      uVar15 = *(undefined4 *)(param_2 + 0x10);
      puVar13[4] = *(undefined4 *)(param_2 + 10);
      puVar13[5] = uVar11;
      puVar13[6] = uVar14;
      puVar13[7] = uVar15;
      local_e0 = (uint)(ushort)param_2[1] << 0x10;
    }
    else {
      FUN_015e8ad4((uint)&local_e0 | 4,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
    }
    local_e0 = CONCAT22(local_e0._2_2_,(ushort)(sVar1 != 0));
    if (sVar2 == 0) {
      puVar13 = (undefined4 *)((uint)&local_78 | 4);
      uVar11 = *(undefined4 *)(param_2 + 0x16);
      uVar14 = *(undefined4 *)(param_2 + 0x18);
      uVar15 = *(undefined4 *)(param_2 + 0x1a);
      uVar17 = *(undefined4 *)(param_2 + 0x1c);
      uVar18 = *(undefined4 *)(param_2 + 0x1e);
      *puVar13 = *(undefined4 *)(param_2 + 0x14);
      puVar13[1] = uVar11;
      puVar13[2] = uVar14;
      puVar13[3] = uVar15;
      puVar13[4] = uVar17;
      puVar13[5] = uVar18;
      local_78 = (uint)(ushort)param_2[0x13] << 0x10;
    }
    else {
      FUN_015e8ad4((uint)&local_78 | 4,*(undefined4 *)(param_2 + 0x16),
                   *(undefined4 *)(param_2 + 0x18));
    }
    uStack_3c = uStack_60;
    uStack_40 = local_64;
    uStack_44 = local_68;
    uStack_48 = local_6c;
    uStack_4c = uStack_70;
    local_50 = uStack_74;
    local_78 = CONCAT22(local_78._2_2_,(ushort)(sVar2 != 0));
    uStack_54 = local_78;
    local_128 = local_e0;
    uStack_124 = uStack_dc;
    uStack_120 = uStack_d8;
    local_11c = uStack_d4;
    local_118 = local_d0;
    local_114 = uStack_cc;
    uStack_110 = uStack_c8;
    uStack_10c = uStack_c4;
    uStack_108 = uStack_c0;
    local_104 = local_78;
    local_100 = uStack_74;
    uStack_fc = uStack_70;
    local_f8 = local_6c;
    uStack_f4 = local_68;
    uStack_f0 = local_64;
    uStack_ec = uStack_60;
    local_78 = local_e0;
    uStack_74 = uStack_dc;
    uStack_70 = uStack_d8;
    local_6c = uStack_d4;
    local_68 = local_d0;
    local_64 = uStack_cc;
    uStack_60 = uStack_c8;
    uStack_5c = uStack_c4;
    uStack_58 = uStack_c0;
    local_30 = 1;
    local_34 = 0;
    local_38 = 1;
    uVar11 = FUN_0140af4c();
    FUN_014059bc(&local_e0,&local_78,uVar11,0);
    FUN_01bed4e2(puVar20,&local_e0,0x68);
  }
LAB_0140042c:
  FUN_01405aa0(auStack_190,puVar20,param_4);
  if (param_3 == 0) {
    if ((undefined1 *)puVar5[-0x32] != &DAT_3b9aca00) {
      FUN_0077a52c(puVar10);
    }
  }
  else {
    puVar10 = puVar5 + -0x1a;
    if ((undefined1 *)puVar5[-0x18] != &DAT_3b9aca00) {
      FUN_0077a52c(puVar10);
    }
  }
  FUN_01bed4e2(puVar10,auStack_190,0x68);
  FUN_0079217c(param_2);
  return;
}

