// FUN_015b5ce4 @ 015b5ce4 size=460 calls_out=4 calls_in=0
// strings: 

void FUN_015b5ce4(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar3 = param_1 + 0x10;
  uVar1 = *puVar3;
  uVar2 = (uint)*(byte *)(param_1 + 0x32);
  *puVar3 = uVar1 + uVar2;
  param_1[0x11] = param_1[0x11] + (uint)CARRY4(uVar1,uVar2);
  if (uVar2 != 0x80) {
    FUN_016dd606((int)(param_1 + 0x12) + uVar2,0,0x80 - uVar2);
  }
  *(undefined1 *)(param_1 + 0x32) = 0;
  FUN_00631708(param_1,param_1 + 0x12,0xffffffff,0xffffffff);
  local_e8 = *param_1;
  uStack_e4 = param_1[1];
  uStack_e0 = param_1[2];
  uStack_dc = param_1[3];
  uStack_d8 = param_1[4];
  local_d4 = param_1[5];
  uStack_d0 = param_1[6];
  uStack_cc = param_1[7];
  uStack_c8 = param_1[8];
  uStack_c4 = param_1[9];
  local_c0 = param_1[10];
  uStack_bc = param_1[0xb];
  uStack_b8 = param_1[0xc];
  uStack_b4 = param_1[0xd];
  uStack_b0 = param_1[0xe];
  uStack_ac = param_1[0xf];
  param_1[0xd] = 0x1f83d9ab;
  param_1[0xe] = 0x137e2179;
  param_1[0xf] = 0x5be0cd19;
  param_1[7] = 0xa54ff53a;
  param_1[0xc] = 0xfb41bd6b;
  param_1[8] = 0xade682d1;
  param_1[9] = 0x510e527f;
  param_1[10] = 0x2b3e6c1f;
  param_1[0xb] = 0x9b05688c;
  param_1[2] = 0x84caa73b;
  param_1[3] = 0xbb67ae85;
  param_1[4] = 0xfe94f82b;
  param_1[5] = 0x3c6ef372;
  param_1[6] = 0x5f1d36f1;
  *param_1 = 0xf2bdc948;
  param_1[1] = 0x6a09e667;
  *puVar3 = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  local_a8 = local_e8;
  uStack_a4 = uStack_e4;
  uStack_a0 = uStack_e0;
  uStack_9c = uStack_dc;
  uStack_98 = uStack_d8;
  local_94 = local_d4;
  uStack_90 = uStack_d0;
  uStack_8c = uStack_cc;
  uStack_88 = uStack_c8;
  uStack_84 = uStack_c4;
  local_80 = local_c0;
  uStack_7c = uStack_bc;
  uStack_78 = uStack_b8;
  uStack_74 = uStack_b4;
  uStack_70 = uStack_b0;
  uStack_6c = uStack_ac;
  local_68 = local_e8;
  uStack_64 = uStack_e4;
  uStack_60 = uStack_e0;
  uStack_5c = uStack_dc;
  local_58 = uStack_d8;
  local_54 = local_d4;
  uStack_50 = uStack_d0;
  uStack_4c = uStack_cc;
  local_48 = uStack_c8;
  uStack_44 = uStack_c4;
  local_40 = local_c0;
  uStack_3c = uStack_bc;
  local_38 = uStack_b8;
  uStack_34 = uStack_b4;
  uStack_30 = uStack_b0;
  uStack_2c = uStack_ac;
  if (param_3 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,0x40,param_3,&DAT_018aa2bc);
  }
  FUN_016dd1aa(param_2,&local_e8,0x40);
  return;
}

