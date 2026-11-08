// FUN_01107b3c @ 01107b3c size=996 calls_out=13 calls_in=1
// strings: BUG: Couldn't build generic_gauge with opts

void FUN_01107b3c(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_1d8 [96];
  undefined4 *local_178;
  uint local_174;
  undefined4 *local_170;
  uint uStack_16c;
  undefined4 *local_168;
  uint local_164;
  undefined4 *puStack_160;
  uint uStack_15c;
  undefined4 *local_158;
  uint uStack_154;
  undefined4 *local_150;
  uint local_14c;
  undefined4 *local_148;
  uint local_144;
  undefined4 *local_140;
  uint uStack_13c;
  undefined4 *local_118;
  uint uStack_114;
  undefined4 *puStack_110;
  uint uStack_10c;
  undefined4 *local_108;
  uint uStack_104;
  undefined4 *puStack_100;
  uint uStack_fc;
  undefined4 *puStack_f8;
  uint local_f4;
  undefined4 *puStack_f0;
  uint uStack_ec;
  undefined4 *puStack_e8;
  uint uStack_e4;
  undefined4 *local_e0;
  uint local_dc;
  undefined4 *local_d8;
  uint local_d4;
  undefined4 *local_d0;
  uint local_cc;
  undefined4 *local_c8;
  uint uStack_c4;
  undefined4 *puStack_c0;
  uint local_bc;
  undefined4 *local_b8;
  uint uStack_b4;
  undefined4 *puStack_b0;
  uint uStack_ac;
  undefined4 *local_a8;
  uint local_a4;
  undefined4 *puStack_a0;
  uint uStack_9c;
  undefined4 *puStack_98;
  uint uStack_94;
  undefined4 *local_90;
  uint local_8c;
  undefined4 *local_88;
  uint local_84;
  undefined4 *local_80;
  uint uStack_7c;
  undefined4 *local_78;
  uint local_74;
  undefined4 *local_70;
  uint uStack_6c;
  undefined4 *local_68;
  uint uStack_64;
  undefined4 *puStack_60;
  uint local_5c;
  undefined4 *local_58;
  uint local_54;
  undefined4 *puStack_50;
  uint uStack_4c;
  undefined4 *puStack_48;
  uint uStack_44;
  uint local_40;
  undefined4 *local_3c;
  uint uStack_38;
  undefined1 local_34;
  undefined4 *local_30;
  uint local_2c;
  
  uVar2 = FUN_01100634(&local_178,param_3,0x1f,param_4,0x38);
  uVar9 = thunk_FUN_016de0ee(uVar2,0x2c0);
  puVar4 = (uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  if ((char)puVar4[4] == '\0') {
    FUN_015f62e4(&local_90);
    *puVar4 = (uint)local_90;
    puVar4[1] = local_8c;
    puVar4[2] = (uint)local_88;
    puVar4[3] = local_84;
    *(undefined1 *)(puVar4 + 4) = 1;
  }
  puVar5 = (undefined4 *)*puVar4;
  uVar8 = puVar4[1];
  puVar6 = (undefined4 *)puVar4[2];
  uVar7 = puVar4[3];
  *puVar4 = (int)puVar5 + 1;
  puVar4[1] = uVar8 + ((undefined4 *)0xfffffffe < puVar5);
  FUN_016dd1aa(&local_90,&local_178,0x60);
  FUN_012b56f4(&local_178);
  local_8c = 0;
  local_88 = (undefined4 *)0x0;
  local_84 = 0;
  local_90 = &DAT_005674cc;
  local_80 = puVar5;
  uStack_7c = uVar8;
  local_78 = puVar6;
  local_74 = uVar7;
  FUN_016dd1aa(auStack_1d8,&local_90,0x60);
  FUN_00f6f318(&local_178);
  local_90 = local_178;
  local_8c = local_174;
  local_88 = local_170;
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar5 = 1;
  puVar5[1] = 1;
  puVar5[2] = local_90;
  puVar5[3] = local_8c;
  puVar5[4] = local_88;
  FUN_012cd8c4(&local_90,auStack_1d8);
  uVar7 = local_54;
  local_30 = local_88;
  local_2c = local_84;
  if (local_5c == 0x80000000) {
    local_d0 = local_88;
    local_cc = local_84;
    puVar6 = local_90;
    uVar7 = local_8c;
  }
  else {
    local_168 = local_80;
    local_164 = uStack_7c;
    puStack_160 = local_78;
    uStack_15c = local_74;
    local_158 = local_70;
    uStack_154 = uStack_6c;
    local_150 = local_68;
    local_14c = uStack_64;
    local_148 = puStack_60;
    local_170 = local_88;
    uStack_16c = local_84;
    local_140 = local_58;
    uStack_13c = local_54;
    local_174 = local_8c;
    local_178 = local_90;
    local_144 = local_5c;
    if (local_54 == 0) {
      if (puStack_60 == (undefined4 *)0x0) {
        local_84 = 0;
        local_88 = (undefined4 *)0x4;
        local_8c = 0;
      }
      else {
        FUN_012b7bd8(&local_8c,uStack_64);
      }
      uVar8 = local_8c;
      local_d8 = local_88;
      local_d4 = local_84;
      local_d0 = local_178;
      local_cc = local_174;
      local_c8 = local_170;
      uStack_c4 = uStack_16c;
      puStack_c0 = local_168;
      local_bc = local_164;
      local_b8 = puStack_160;
      uStack_b4 = uStack_15c;
      puStack_b0 = local_158;
      uStack_ac = uStack_154;
      local_a8 = local_150;
      local_a4 = local_14c;
      puStack_a0 = local_148;
      uStack_9c = local_144;
      puStack_98 = local_140;
      uStack_94 = uStack_13c;
      local_dc = local_174;
      local_e0 = local_178;
      puVar6 = (undefined4 *)0x0;
      uVar7 = 0;
      if (local_8c != 0x80000000) {
        local_118 = local_170;
        uStack_114 = uStack_16c;
        puStack_110 = local_168;
        uStack_10c = local_164;
        local_108 = puStack_160;
        uStack_104 = uStack_15c;
        puStack_100 = local_158;
        uStack_fc = uStack_154;
        puStack_f8 = local_150;
        local_f4 = local_14c;
        puStack_f0 = local_148;
        uStack_ec = local_144;
        puStack_e8 = local_140;
        uStack_e4 = uStack_13c;
        local_3c = local_88;
        uStack_38 = local_84;
        local_80 = local_178;
        uStack_7c = local_174;
        local_34 = 1;
        local_84 = 0;
        local_88 = (undefined4 *)0x0;
        local_78 = local_170;
        local_74 = uStack_16c;
        local_70 = local_168;
        uStack_6c = local_164;
        local_68 = puStack_160;
        uStack_64 = uStack_15c;
        puStack_60 = local_158;
        local_5c = uStack_154;
        local_58 = local_150;
        local_54 = local_14c;
        puStack_50 = local_148;
        uStack_4c = local_144;
        puStack_48 = local_140;
        uStack_44 = uStack_13c;
        local_8c = 1;
        local_90 = (undefined4 *)0x1;
        local_40 = uVar8;
        uVar7 = thunk_FUN_016d4a50(0x60);
        if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x60);
        }
        FUN_016dd1aa(uVar7,&local_90,0x60);
        puVar6 = (undefined4 *)0x5;
        goto LAB_01107d24;
      }
    }
    else {
      puVar6 = (undefined4 *)0x1;
      local_cc = local_84;
      local_d0 = (undefined4 *)0x0;
      FUN_011014e8(&local_178);
    }
  }
  local_178 = local_d0;
  local_174 = local_cc;
  local_e0 = local_d0;
  local_dc = local_cc;
LAB_01107d24:
  FUN_011007d8(auStack_1d8);
  if (puVar6 != (undefined4 *)0x5) {
    local_84 = local_174;
    local_88 = local_178;
    local_90 = puVar6;
    local_8c = uVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Couldn\'t build generic_gauge with opts",0x2b,&local_90,&DAT_01886ca0,
                 &DAT_01886c90);
  }
  do {
    iVar3 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar3 + 1;
  if (iVar3 < 0) {
    software_udf(0xfdee,0x1107d6c);
    return;
  }
  param_1[1] = puVar5;
  param_1[2] = uVar7;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = param_2;
  param_1[3] = 0;
  return;
}

