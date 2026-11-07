// FUN_01896424 @ 01896424 size=352 calls_out=5 calls_in=2
// strings: 

int FUN_01896424(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  FUN_01896590(&local_88,param_1,param_2,param_7);
  iVar1 = local_88;
  if (local_88 != 1) {
    FUN_01bed4e2(&local_e8,&uStack_84,0x60);
    local_148 = local_e8;
    uStack_144 = uStack_e4;
    uStack_140 = uStack_e0;
    uStack_13c = uStack_dc;
    uStack_138 = uStack_d8;
    uStack_134 = uStack_d4;
    local_130 = local_d0;
    uStack_12c = uStack_cc;
    uStack_128 = uStack_c8;
    uStack_124 = uStack_c4;
    uStack_120 = uStack_c0;
    uStack_11c = uStack_bc;
    local_118 = local_b8;
    uStack_114 = uStack_b4;
    uStack_110 = uStack_b0;
    uStack_10c = uStack_ac;
    uStack_108 = uStack_a8;
    uStack_104 = uStack_a4;
    local_100 = local_a0;
    uStack_fc = uStack_9c;
    uStack_f8 = uStack_98;
    uStack_f4 = uStack_94;
    uStack_f0 = uStack_90;
    uStack_ec = uStack_8c;
    pcVar3 = (code *)*param_1;
    FUN_01bed93e(&local_88,0,0x30);
    (*pcVar3)(&local_88,&local_148,&DAT_0051d604);
    local_e8 = local_88;
    uStack_e4 = uStack_84;
    uStack_e0 = uStack_80;
    uStack_dc = uStack_7c;
    uStack_d8 = uStack_78;
    uStack_d4 = uStack_74;
    local_d0 = local_70;
    uStack_cc = uStack_6c;
    uStack_c8 = uStack_68;
    uStack_c4 = uStack_64;
    uStack_c0 = uStack_60;
    uStack_bc = uStack_5c;
    uVar2 = param_1[3];
    if (0xc < uVar2) {
LAB_01896570:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar2,0xc,&DAT_01d218ec);
    }
    FUN_01896024(&local_e8,uVar2,param_3,param_4);
    if (param_5 != 0) {
      pcVar3 = (code *)*param_1;
      FUN_01bed93e(&local_88,0,0x30);
      (*pcVar3)(&local_88,&local_118,&DAT_0051d604);
      local_e8 = local_88;
      uStack_e4 = uStack_84;
      uStack_e0 = uStack_80;
      uStack_dc = uStack_7c;
      uStack_d8 = uStack_78;
      uStack_d4 = uStack_74;
      local_d0 = local_70;
      uStack_cc = uStack_6c;
      uStack_c8 = uStack_68;
      uStack_c4 = uStack_64;
      uStack_c0 = uStack_60;
      uStack_bc = uStack_5c;
      uVar2 = param_1[3];
      if (0xc < uVar2) goto LAB_01896570;
      FUN_01896024(&local_e8,uVar2,param_5,param_6);
    }
  }
  return iVar1;
}

