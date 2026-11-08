// FUN_01b8bed8 @ 01b8bed8 size=1092 calls_out=10 calls_in=1
// strings: 

int FUN_01b8bed8(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                code *param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined4 local_22c [46];
  uint *local_174;
  undefined4 local_170;
  undefined4 local_16c;
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  int local_15c;
  uint local_158;
  code *local_154;
  int local_150;
  int local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint uStack_118;
  uint local_114;
  uint uStack_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 auStack_dc [4];
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  undefined4 local_b0;
  int local_70;
  uint local_58;
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_154 = param_6;
  local_15c = param_7;
  local_170 = param_4;
  local_16c = param_1;
  local_168 = param_3;
  local_14c = param_2;
  FUN_01bed4e2(auStack_dc,param_5,0xb0);
  if ((local_154 == (code *)0x0) == (local_15c == 0)) {
    local_160 = *(undefined4 *)(param_5 + 0x2c);
    local_150 = *(int *)(param_5 + 0x6c);
    local_164 = *(undefined4 *)(param_5 + 0x84);
    if (local_150 == 0) {
      local_22c[0] = 2;
      FUN_01b88308(&local_140,auStack_dc,0xffffffff,0xffffffff,local_14c);
      local_148 = local_134;
      local_144 = local_12c;
      uVar6 = local_128;
      uVar7 = local_13c;
      uVar8 = local_138;
      uVar9 = local_140;
      uVar10 = local_130;
    }
    else {
      local_148 = *(uint *)(param_5 + 0x10);
      local_144 = *(uint *)(param_5 + 0x18);
      uVar9 = *(uint *)(param_5 + 4);
      uVar7 = *(uint *)(param_5 + 8);
      uVar8 = *(uint *)(param_5 + 0xc);
      uVar10 = *(uint *)(param_5 + 0x14);
      uVar6 = *(uint *)(param_5 + 0x1c);
      local_22c[0] = 2;
      FUN_01b86d38(&local_124,local_160,0,0,local_14c);
      local_158 = local_10c;
      if (local_10c - 3 < 3) {
        local_11c = local_11c + 2;
      }
      local_108 = local_124;
      local_104 = local_120;
      local_fc = uStack_118;
      local_f8 = local_114;
      local_f4 = uStack_110;
      local_f0 = local_10c;
      local_140 = local_124;
      local_13c = local_120;
      local_134 = uStack_118;
      local_130 = local_114;
      local_12c = uStack_110;
      local_128 = local_10c;
      if (uVar9 == 0) {
        uVar9 = local_124;
      }
      if (uVar8 == 0) {
        uVar8 = local_11c;
      }
      if (uVar7 == 0) {
        uVar7 = local_120;
      }
      if (local_148 == 0) {
        local_148 = uStack_118;
      }
      if (uVar10 == 0) {
        uVar10 = local_114;
      }
      if (local_144 == 0) {
        local_144 = uStack_110;
      }
      local_138 = local_11c;
      local_100 = local_11c;
      if (uVar6 == 0) {
        uVar6 = local_10c;
      }
    }
    if (uVar6 - 3 < 3) {
      bVar11 = 0x17 < uVar7;
      if (uVar7 < 0x19) {
        bVar11 = uVar8 <= uVar7;
      }
      if (bVar11) goto LAB_01b8c090;
    }
    else {
LAB_01b8c090:
      local_22c[0] = 2;
      FUN_01b88308(&local_140,auStack_dc,0xffffffff,0xffffffff,local_14c);
      local_148 = local_134;
      local_144 = local_12c;
      local_150 = 0;
      uVar6 = local_128;
      uVar7 = local_13c;
      uVar8 = local_138;
      uVar9 = local_140;
      uVar10 = local_130;
    }
    local_140 = uVar9;
    local_128 = uVar6;
    local_158 = FUN_01b86020(local_164,&local_140);
    local_164 = param_8;
    local_124 = uVar9;
    local_120 = uVar7;
    local_11c = uVar8;
    local_114 = uVar10;
    local_10c = uVar6;
    iVar1 = FUN_01b872f0(&local_124,local_158,local_150,0);
    if (local_168 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = local_14c + 3U & 0xfffffffc;
    }
    iVar1 = iVar1 + 0x3530 + uVar4;
    if (local_154 == (code *)0x0) {
      uVar4 = thunk_FUN_01be5118(iVar1);
    }
    else {
      uVar4 = (*local_154)(local_164,iVar1);
    }
    iVar2 = 0;
    if (uVar4 != 0) {
      local_104 = uVar4 + iVar1;
      local_f4 = local_104 & 0xffffffc0;
      local_174 = &local_108;
      local_ec = 0;
      local_e8 = 0;
      local_e4 = 0;
      local_e0 = 0;
      local_108 = uVar4;
      local_100 = uVar4;
      local_fc = uVar4;
      local_f8 = uVar4;
      local_f0 = local_f4;
      iVar2 = FUN_01b850b0(local_174,0x1330);
      uVar4 = local_174[1];
      uVar3 = local_174[2];
      uVar5 = local_174[3];
      *(uint *)(iVar2 + 0x10) = *local_174;
      *(uint *)(iVar2 + 0x14) = uVar4;
      *(uint *)(iVar2 + 0x18) = uVar3;
      *(uint *)(iVar2 + 0x1c) = uVar5;
      uVar4 = local_174[5];
      uVar3 = local_174[6];
      uVar5 = local_174[7];
      *(uint *)(iVar2 + 0x20) = local_174[4];
      *(uint *)(iVar2 + 0x24) = uVar4;
      *(uint *)(iVar2 + 0x28) = uVar3;
      *(uint *)(iVar2 + 0x2c) = uVar5;
      uVar4 = local_174[9];
      uVar3 = local_174[10];
      *(uint *)(iVar2 + 0x30) = local_174[8];
      *(uint *)(iVar2 + 0x34) = uVar4;
      *(uint *)(iVar2 + 0x38) = uVar3;
      *(code **)(iVar2 + 0x1314) = local_154;
      *(int *)(iVar2 + 0x1318) = local_15c;
      *(undefined4 *)(iVar2 + 0x131c) = local_164;
      *(uint *)(iVar2 + 0x1328) = local_158;
      *(undefined4 *)(iVar2 + 0x1324) = 0;
      local_cc = local_148;
      local_c4 = local_144;
      local_b0 = local_160;
      local_58 = local_158;
      local_70 = local_150;
      local_d8 = uVar9;
      local_d4 = uVar7;
      local_d0 = uVar8;
      local_c8 = uVar10;
      local_c0 = uVar6;
      FUN_01bed4e2(local_22c,auStack_dc,0xb0);
      uVar6 = FUN_01b8b7dc(iVar2,local_16c,local_14c,local_168,local_170);
      if (uVar6 < 0xffffff89) goto LAB_01b8c280;
    }
    FUN_01b8baa8(iVar2);
  }
  iVar2 = 0;
LAB_01b8c280:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar2;
}

