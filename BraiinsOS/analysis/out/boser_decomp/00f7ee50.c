// FUN_00f7ee50 @ 00f7ee50 size=420 calls_out=4 calls_in=1
// strings: 

int FUN_00f7ee50(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 auStack_180 [88];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 *local_78;
  undefined *local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar7 = param_3[2];
  FUN_0160dadc(&local_1c0);
  uVar2 = local_19c;
  uVar1 = local_1a0;
  local_190 = 0x80000000;
  local_cc = 1;
  local_d8 = 1;
  local_d0 = 0;
  local_d4 = 0;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar5 = param_1;
  puVar5[1] = param_2;
  local_e8 = local_d8;
  uStack_e4 = local_d4;
  uStack_e0 = local_d0;
  uStack_dc = local_cc;
  local_128 = local_1c0;
  uStack_124 = uStack_1bc;
  uStack_120 = uStack_1b8;
  uStack_11c = uStack_1b4;
  uStack_118 = uStack_1b0;
  local_114 = local_1ac;
  uStack_110 = uStack_1a8;
  uStack_10c = uStack_1a4;
  uStack_108 = local_1a0;
  uStack_104 = local_19c;
  uStack_100 = local_198;
  uStack_fc = local_194;
  uStack_f8 = local_190;
  uStack_f4 = uStack_18c;
  uStack_f0 = uStack_188;
  uStack_ec = uStack_184;
  FUN_01bed4e2((uint)auStack_180 | 7,&local_128,0x50);
  local_d4 = 1;
  local_d8 = 1;
  local_d0 = local_d0 & 0xffffff00;
  FUN_01bed4e2((int)&local_d0 + 1,auStack_180,0x57);
  local_74 = &DAT_01c1857c;
  local_70 = uVar1;
  uStack_6c = uVar2;
  uStack_68 = 0;
  local_44 = 0x80000000;
  local_64 = 0;
  local_58 = local_198;
  uStack_54 = local_194;
  uStack_50 = 0;
  local_4c = 0;
  local_60 = 0;
  local_2c = 0;
  local_48 = 0;
  local_78 = puVar5;
  local_38 = uVar3;
  local_34 = uVar4;
  local_30 = uVar7;
  iVar6 = thunk_FUN_01be5118(0xb0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xb0);
  }
  FUN_01bed4e2(iVar6,&local_d8,0xb0);
  return iVar6;
}

