// FUN_015bd9c4 @ 015bd9c4 size=764 calls_out=7 calls_in=1
// strings: 

void FUN_015bd9c4(int param_1,byte *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_2d8 [128];
  byte local_258 [128];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [128];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_88;
  undefined4 local_80;
  undefined1 auStack_78 [84];
  
  if (0x80 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_0040f9bf,0x2f,&DAT_018aa708);
  }
  FUN_016dd606(local_2d8,0x36,0x80);
  FUN_016dd606(local_258,0x5c,0x80);
  pbVar3 = local_2d8;
  pbVar4 = local_258;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    bVar1 = *param_2;
    bVar2 = *pbVar4;
    *pbVar3 = *pbVar3 ^ bVar1;
    *pbVar4 = bVar2 ^ bVar1;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
    param_2 = param_2 + 1;
  }
  local_d0 = 0xf3bcc908;
  uStack_cc = 0x6a09e667;
  uStack_c8 = 0x84caa73b;
  uStack_c4 = 0xbb67ae85;
  uStack_c0 = 0xfe94f82b;
  local_bc = 0x3c6ef372;
  uStack_b8 = 0x5f1d36f1;
  uStack_b4 = 0xa54ff53a;
  uStack_b0 = 0xade682d1;
  uStack_ac = 0x510e527f;
  local_a8 = 0x2b3e6c1f;
  uStack_a4 = 0x9b05688c;
  uStack_a0 = 0xfb41bd6b;
  uStack_9c = 0x1f83d9ab;
  uStack_98 = 0x137e2179;
  uStack_94 = 0x5be0cd19;
  FUN_016dd606(auStack_150,0,0x80);
  FUN_016dd1aa(param_1,auStack_150,0xc0);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 **)(param_1 + 200) = &DAT_018aa798;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  FUN_014f29bc(param_1,local_2d8,0x80);
  FUN_014f29bc(param_1,param_4,param_5);
  FUN_016dd1aa(auStack_150,param_1,0xd8);
  uVar5 = *(uint *)(local_88 + 0x50);
  FUN_016dd1aa(auStack_78,param_1 + 0x80,0x50);
  if (0x80 < uVar5) {
LAB_015bdc58:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar5,0x80,&DAT_018a6dd0);
  }
  FUN_014f2c6c(&local_194,auStack_78,auStack_150,uVar5,local_80);
  uVar5 = *(uint *)(local_194 + 0x48);
  if (0x40 < uVar5) {
LAB_015bdc70:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar5,0x40,&DAT_018ab870);
  }
  if (uVar5 == 0x40) {
    local_1d8 = local_190;
    uStack_1d4 = uStack_18c;
    uStack_1d0 = uStack_188;
    uStack_1cc = uStack_184;
    uStack_1c8 = uStack_180;
    local_1c4 = local_17c;
    uStack_1c0 = uStack_178;
    uStack_1bc = uStack_174;
    uStack_1b8 = uStack_170;
    uStack_1b4 = uStack_16c;
    local_1b0 = local_168;
    uStack_1ac = uStack_164;
    uStack_1a8 = uStack_160;
    uStack_1a4 = uStack_15c;
    uStack_1a0 = uStack_158;
    uStack_19c = uStack_154;
    local_d0 = 0xf3bcc908;
    uStack_cc = 0x6a09e667;
    uStack_c8 = 0x84caa73b;
    uStack_c4 = 0xbb67ae85;
    uStack_c0 = 0xfe94f82b;
    local_bc = 0x3c6ef372;
    uStack_b8 = 0x5f1d36f1;
    uStack_b4 = 0xa54ff53a;
    uStack_b0 = 0xade682d1;
    uStack_ac = 0x510e527f;
    local_a8 = 0x2b3e6c1f;
    uStack_a4 = 0x9b05688c;
    uStack_a0 = 0xfb41bd6b;
    uStack_9c = 0x1f83d9ab;
    uStack_98 = 0x137e2179;
    uStack_94 = 0x5be0cd19;
    FUN_016dd606(auStack_150,0,0x80);
    FUN_016dd1aa(param_1,auStack_150,0xc0);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 **)(param_1 + 200) = &DAT_018aa798;
    FUN_014f29bc(param_1,local_258,0x80);
    FUN_014f29bc(param_1,&local_1d8,0x40);
    if (param_7 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,0x40,param_7,&DAT_018aa7f8);
    }
    FUN_016dd1aa(auStack_150,param_1,0xd8);
    uVar5 = *(uint *)(local_88 + 0x50);
    FUN_016dd1aa(auStack_78,param_1 + 0x80,0x50);
    if (0x80 < uVar5) goto LAB_015bdc58;
    FUN_014f2c6c(&local_194,auStack_78,auStack_150,uVar5,local_80);
    uVar5 = *(uint *)(local_194 + 0x48);
    if (0x40 < uVar5) goto LAB_015bdc70;
    if (uVar5 == 0x40) {
      FUN_016dd1aa(param_6,&local_190,0x40);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb7204(0x40,uVar5,&DAT_018aa808);
}

