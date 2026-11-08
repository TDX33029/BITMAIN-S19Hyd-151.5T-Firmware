// FUN_00637db8 @ 00637db8 size=1316 calls_out=8 calls_in=2
// strings: 

uint FUN_00637db8(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5,uint param_6
                 )

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_138 [4];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  int local_d4;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int local_54;
  undefined2 local_50;
  byte local_4e;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  if (param_2 < 0x401) {
    uVar3 = 0;
    if (param_2 != 0x400) {
      uVar3 = param_2;
    }
    uVar1 = param_2 - uVar3 >> 10;
    uVar4 = (uint)(uVar1 != 0);
    uVar6 = uVar4;
    if (param_6 >> 5 < uVar4) {
      uVar6 = param_6 >> 5;
    }
    if (uVar6 != 0) {
      local_138[0] = 0x6a09e667;
      local_138[1] = 0xbb67ae85;
      local_138[2] = 0x3c6ef372;
      local_138[3] = 0xa54ff53a;
      local_128 = 0x510e527f;
      local_124 = 0x9b05688c;
      local_120 = 0x1f83d9ab;
      local_11c = 0x5be0cd19;
      FUN_006387d8(local_138,param_1,0x40,0x510e527f,param_3,param_4,1);
      FUN_006387d8(local_138,param_1 + 0x40,0x40);
      FUN_006387d8(local_138,param_1 + 0x80,0x40);
      FUN_006387d8(local_138,param_1 + 0xc0,0x40);
      FUN_006387d8(local_138,param_1 + 0x100,0x40);
      FUN_006387d8(local_138,param_1 + 0x140,0x40);
      FUN_006387d8(local_138,param_1 + 0x180,0x40);
      FUN_006387d8(local_138,param_1 + 0x1c0,0x40);
      FUN_006387d8(local_138,param_1 + 0x200,0x40);
      FUN_006387d8(local_138,param_1 + 0x240,0x40);
      FUN_006387d8(local_138,param_1 + 0x280,0x40);
      FUN_006387d8(local_138,param_1 + 0x2c0,0x40);
      FUN_006387d8(local_138,param_1 + 0x300,0x40);
      FUN_006387d8(local_138,param_1 + 0x340,0x40);
      FUN_006387d8(local_138,param_1 + 0x380,0x40);
      FUN_006387d8(local_138,param_1 + 0x3c0,0x40);
      param_5[7] = local_11c;
      param_5[6] = local_120;
      param_5[5] = local_124;
      param_5[4] = local_128;
      param_5[2] = local_138[2];
      param_5[3] = local_138[3];
      param_5[1] = local_138[1];
      *param_5 = local_138[0];
    }
    if (uVar3 != 0) {
      FUN_016dd606(&local_b8,0,0x40);
      local_78 = 0x6a09e667;
      uStack_74 = 0xbb67ae85;
      uStack_70 = 0x3c6ef372;
      uStack_6c = 0xa54ff53a;
      local_68 = 0x510e527f;
      uStack_64 = 0x9b05688c;
      uStack_60 = 0x1f83d9ab;
      uStack_5c = 0x5be0cd19;
      local_58 = param_3 + 1;
      local_54 = param_4 + (uint)(0xfffffffe < param_3);
      if (uVar1 == 0) {
        uVar4 = 0;
        local_58 = param_3;
        local_54 = param_4;
      }
      else {
        uVar4 = 0x20;
      }
      local_4e = 0;
      local_50 = 0;
      FUN_00637c3c(&local_b8,param_1 + (param_2 - uVar3),uVar3);
      local_f8 = local_78;
      uStack_f4 = uStack_74;
      uStack_f0 = uStack_70;
      uStack_ec = uStack_6c;
      local_e8 = local_68;
      uStack_e4 = uStack_64;
      uStack_e0 = uStack_60;
      uStack_dc = uStack_5c;
      local_138[0] = local_b8;
      local_138[1] = uStack_b4;
      local_138[2] = uStack_b0;
      local_138[3] = uStack_ac;
      local_128 = uStack_a8;
      local_124 = local_a4;
      local_120 = uStack_a0;
      local_11c = uStack_9c;
      uStack_118 = uStack_98;
      uStack_114 = uStack_94;
      local_110 = local_90;
      uStack_10c = uStack_8c;
      uStack_108 = uStack_88;
      uStack_104 = uStack_84;
      uStack_100 = uStack_80;
      uStack_fc = uStack_7c;
      uVar6 = (local_4e | local_50._1_1_ == '\0') | 2;
      local_cf = (undefined1)uVar6;
      local_d4 = local_54;
      local_d8 = local_58;
      local_d0 = (undefined1)local_50;
      local_48 = local_78;
      local_44 = uStack_74;
      local_40 = uStack_70;
      local_3c = uStack_6c;
      local_38 = local_68;
      uStack_34 = uStack_64;
      uStack_30 = uStack_60;
      local_2c = uStack_5c;
      uVar3 = local_58;
      iVar5 = local_54;
      FUN_006387d8();
      if (param_6 <= (uVar4 | 0x1f)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar4,uVar4 + 0x20,param_6,&DAT_01857ba8,uVar3,iVar5,uVar6);
      }
      param_5 = (undefined4 *)((int)param_5 + uVar4);
      *param_5 = local_48;
      param_5[7] = local_2c;
      uVar4 = 1;
      param_5[6] = uStack_30;
      param_5[5] = uStack_34;
      if (uVar1 != 0) {
        uVar4 = 2;
      }
      param_5[4] = local_38;
      param_5[3] = local_3c;
      param_5[2] = local_40;
      param_5[1] = local_44;
      return uVar4;
    }
  }
  else {
    uVar4 = 0x400;
    if (0x800 < param_2) {
      uVar4 = (0xffffffffU >> LZCOUNT(param_2 - 1 >> 0xb)) * 0x400 + 0x400;
    }
    if (param_2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_01857b78);
    }
    FUN_016dd606(local_138,0,0x80);
    iVar5 = 0x40;
    if (uVar4 == 0x400) {
      iVar5 = 0x20;
    }
    iVar2 = FUN_00637db8(param_1,uVar4,param_3,param_4,local_138,iVar5);
    iVar5 = FUN_00637db8(param_1 + uVar4,param_2 - uVar4,param_3 + (uVar4 >> 10),
                         param_4 + (uint)CARRY4(param_3,uVar4 >> 10),(int)local_138 + iVar5,
                         0x80 - iVar5);
    if (iVar2 == 1) {
      if (param_6 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,0x40,param_6,&DAT_01857b88);
      }
      FUN_016dd1aa(param_5,local_138,0x40);
      return 2;
    }
    uVar4 = (iVar5 + iVar2) * 0x20;
    if (0x80 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar4,0x80,&DAT_01857b98);
    }
    uVar4 = FUN_006382f8(local_138,uVar4,param_5,param_6);
  }
  return uVar4;
}

