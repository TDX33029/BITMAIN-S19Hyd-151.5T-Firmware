// FUN_015036d8 @ 015036d8 size=708 calls_out=13 calls_in=1
// strings: 

void FUN_015036d8(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined1 auStack_1c8 [136];
  undefined1 local_140;
  uint local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint local_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_014ff704(auStack_1c8);
  local_e8 = *param_3;
  local_e4 = param_3[1];
  uVar4 = param_3[2];
  local_d0 = 0;
  if (local_e8 != 0) {
    local_d0 = uVar4;
  }
  local_f0 = (uint)(local_e8 != 0);
  local_dc = 0;
  local_ec = 0;
  local_e0 = local_f0;
  local_d8 = local_e8;
  local_d4 = local_e4;
  FUN_01503a3c(&local_138,&local_f0,param_4[1],param_4[2]);
  if (uVar4 < 0xf) {
    uVar1 = FUN_016731b0(local_140,param_5);
    FUN_0156aca8(&local_108,auStack_1c8,param_5,uVar1);
    if (local_108 != 0) {
      FUN_0155f304(&local_58,param_2,param_3);
      if (local_58 != 0x80000000) {
        local_ac = local_58;
        local_a8 = local_54;
        uStack_a4 = uStack_50;
        local_a0 = *param_4;
        uStack_9c = param_4[1];
        uStack_98 = param_4[2];
        local_f0 = local_138;
        local_ec = uStack_134;
        local_e8 = uStack_130;
        local_e4 = uStack_12c;
        local_e0 = uStack_128;
        local_dc = uStack_124;
        local_d8 = local_120;
        local_d4 = uStack_11c;
        local_d0 = uStack_118;
        uStack_cc = uStack_114;
        uStack_c8 = uStack_110;
        uStack_c4 = uStack_10c;
        local_c0 = local_108;
        uStack_bc = local_104;
        uStack_b8 = uStack_100;
        uStack_b4 = uStack_fc;
        uStack_b0 = uStack_f8;
        iVar2 = thunk_FUN_01be5118(0x60);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x60);
        }
        FUN_01bed4e2(iVar2,&local_f0,0x60);
        puVar3 = &DAT_01cfa8c8;
        goto LAB_01503928;
      }
      param_1[1] = 0;
      *param_1 = 1;
      param_1[2] = local_54;
      FUN_014fdb74(&local_108);
      goto LAB_01503964;
    }
  }
  else {
    uVar1 = FUN_016731b0(local_140,param_5);
    FUN_0156aca8(&local_70,auStack_1c8,param_5,uVar1);
    if (local_70 != 0) {
      FUN_0155ee38(&local_58,param_2,param_3);
      if (local_58 != 0) {
        local_f0 = local_58;
        local_ec = local_54;
        local_e8 = uStack_50;
        local_e4 = uStack_4c;
        local_e0 = uStack_48;
        local_dc = uStack_44;
        local_d8 = local_40;
        local_d4 = uStack_3c;
        local_d0 = uStack_38;
        uStack_cc = uStack_34;
        uStack_c8 = uStack_30;
        uStack_c4 = uStack_2c;
        local_7c = *param_4;
        uStack_78 = param_4[1];
        uStack_74 = param_4[2];
        local_c0 = local_138;
        uStack_bc = uStack_134;
        uStack_b8 = uStack_130;
        uStack_b4 = uStack_12c;
        uStack_b0 = uStack_128;
        local_ac = uStack_124;
        local_a8 = local_120;
        uStack_a4 = uStack_11c;
        local_a0 = uStack_118;
        uStack_9c = uStack_114;
        uStack_98 = uStack_110;
        uStack_94 = uStack_10c;
        local_90 = local_70;
        uStack_8c = local_6c;
        uStack_88 = uStack_68;
        uStack_84 = uStack_64;
        uStack_80 = uStack_60;
        iVar2 = thunk_FUN_01be5118(0x80);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x80);
        }
        FUN_01bed4e2(iVar2,&local_f0,0x80);
        puVar3 = &DAT_01cfa8a8;
LAB_01503928:
        param_1[2] = puVar3;
        param_1[1] = iVar2;
        *param_1 = 1;
        FUN_014ff9e0(auStack_1c8);
        return;
      }
      param_1[1] = 0;
      *param_1 = 1;
      param_1[2] = local_54;
      FUN_014fdb74(&local_70);
      goto LAB_01503964;
    }
    local_104 = local_6c;
  }
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = local_104;
LAB_01503964:
  FUN_0152a0b4(&local_138);
  FUN_014ff9e0(auStack_1c8);
  FUN_01503d58(param_4);
  return;
}

