// FUN_009c1dcc @ 009c1dcc size=572 calls_out=10 calls_in=2
// strings: BUG: Couldn't build generic_gauge with opts

int FUN_009c1dcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_180 [96];
  undefined4 *local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  uint local_7c;
  undefined4 *local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = FUN_009c19f8(&local_120,param_1,param_2,param_3,param_4);
  uVar8 = thunk_FUN_016de0ee(uVar1,0x2c0);
  puVar3 = (uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  if ((char)puVar3[4] == '\0') {
    FUN_015f62e4(&local_80);
    *puVar3 = (uint)local_80;
    puVar3[1] = local_7c;
    puVar3[2] = (uint)local_78;
    puVar3[3] = local_74;
    *(undefined1 *)(puVar3 + 4) = 1;
  }
  uVar5 = *puVar3;
  uVar4 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *puVar3 = uVar5 + 1;
  puVar3[1] = uVar4 + (0xfffffffe < uVar5);
  FUN_016dd1aa(&local_80,&local_120,0x60);
  FUN_012b56f4(&local_120);
  local_7c = 0;
  local_78 = (undefined4 *)0x0;
  local_74 = 0;
  local_80 = &DAT_005674cc;
  local_70 = uVar5;
  local_6c = uVar4;
  local_68 = uVar6;
  uStack_64 = uVar7;
  FUN_016dd1aa(auStack_180,&local_80,0x60);
  FUN_009d3c58(&local_120,auStack_180,1,4,0);
  local_84 = local_114;
  local_88 = local_118;
  if (local_d8 == -0x80000000) {
    FUN_011007d8(auStack_180);
    if (local_120 != (undefined4 *)0x5) {
      local_74 = local_114;
      local_78 = (undefined4 *)local_118;
      local_7c = local_11c;
      local_80 = local_120;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: Couldn\'t build generic_gauge with opts",0x2b,&local_80,&DAT_0186a208,
                   &DAT_0186de0c);
    }
    return local_11c;
  }
  local_c0 = local_110;
  uStack_bc = uStack_10c;
  uStack_b8 = uStack_108;
  uStack_b4 = uStack_104;
  local_b0 = local_100;
  uStack_ac = uStack_fc;
  uStack_a8 = uStack_f8;
  uStack_a4 = uStack_f4;
  uStack_a0 = uStack_f0;
  local_9c = local_ec;
  uStack_98 = uStack_e8;
  uStack_94 = uStack_e4;
  uStack_90 = uStack_e0;
  uStack_8c = uStack_dc;
  local_2c = local_d4;
  uStack_28 = uStack_d0;
  uStack_24 = uStack_cc;
  local_6c = local_114;
  local_70 = local_118;
  local_74 = local_11c;
  local_78 = local_120;
  local_68 = local_110;
  uStack_64 = uStack_10c;
  uStack_60 = uStack_108;
  uStack_5c = uStack_104;
  local_58 = local_100;
  uStack_54 = uStack_fc;
  uStack_50 = uStack_f8;
  uStack_4c = uStack_f4;
  uStack_48 = uStack_f0;
  local_44 = local_ec;
  uStack_40 = uStack_e8;
  uStack_3c = uStack_e4;
  uStack_38 = uStack_e0;
  uStack_34 = uStack_dc;
  local_7c = 1;
  local_80 = (undefined4 *)0x1;
  local_30 = local_d8;
  iVar2 = thunk_FUN_016d4a50(0x60);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x60);
  }
  FUN_016dd1aa(iVar2,&local_80,0x60);
  FUN_011007d8(auStack_180);
  return iVar2;
}

