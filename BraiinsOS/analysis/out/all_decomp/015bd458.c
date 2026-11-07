// FUN_015bd458 @ 015bd458 size=788 calls_out=7 calls_in=1
// strings: 

void FUN_015bd458(int param_1,byte *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
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
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  int local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
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
  
  if (0x40 < param_3) {
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
  local_d0 = 0x6a09e667;
  uStack_cc = 0xbb67ae85;
  uStack_c8 = 0x3c6ef372;
  uStack_c4 = 0xa54ff53a;
  uStack_c0 = 0x510e527f;
  local_bc = 0x9b05688c;
  uStack_b8 = 0x1f83d9ab;
  uStack_b4 = 0x5be0cd19;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  FUN_016dd606(auStack_150,0,0x80);
  FUN_016dd1aa(param_1,auStack_150,0xc0);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 **)(param_1 + 200) = &DAT_018ab800;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  FUN_014f29bc(param_1,local_2d8,0x40);
  FUN_014f29bc(param_1,param_4,param_5);
  local_19c = 0;
  local_1a0 = 0;
  local_1a4 = 0;
  local_1a8 = 0;
  local_1ac = 0;
  local_1b0 = 0;
  local_1b4 = 0;
  local_1b8 = 0;
  FUN_016dd1aa(auStack_150,param_1,0xd8);
  uVar5 = *(uint *)(local_88 + 0x50);
  FUN_016dd1aa(auStack_78,param_1 + 0x80,0x50);
  if (0x80 < uVar5) {
LAB_015bd704:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar5,0x80,&DAT_018a6dd0);
  }
  FUN_014f2c6c(&local_194,auStack_78,auStack_150,uVar5,local_80);
  uVar5 = *(uint *)(local_194 + 0x48);
  if (0x40 < uVar5) {
LAB_015bd71c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar5,0x40,&DAT_018ab870);
  }
  if (uVar5 == 0x20) {
    local_1d8 = local_190;
    uStack_1d4 = uStack_18c;
    uStack_1d0 = uStack_188;
    uStack_1cc = uStack_184;
    local_1c8 = local_180;
    uStack_1c4 = uStack_17c;
    uStack_1c0 = uStack_178;
    uStack_1bc = uStack_174;
    local_d0 = 0x6a09e667;
    uStack_cc = 0xbb67ae85;
    uStack_c8 = 0x3c6ef372;
    uStack_c4 = 0xa54ff53a;
    uStack_c0 = 0x510e527f;
    local_bc = 0x9b05688c;
    uStack_b8 = 0x1f83d9ab;
    uStack_b4 = 0x5be0cd19;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    FUN_016dd606(auStack_150,0,0x80);
    FUN_016dd1aa(param_1,auStack_150,0xc0);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 **)(param_1 + 200) = &DAT_018ab800;
    FUN_014f29bc(param_1,local_258,0x40);
    FUN_014f29bc(param_1,&local_1d8,0x20);
    if (param_7 < 0x20) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,0x20,param_7,&DAT_018aa774);
    }
    FUN_016dd1aa(auStack_150,param_1,0xd8);
    uVar5 = *(uint *)(local_88 + 0x50);
    FUN_016dd1aa(auStack_78,param_1 + 0x80,0x50);
    if (0x80 < uVar5) goto LAB_015bd704;
    FUN_014f2c6c(&local_194,auStack_78,auStack_150,uVar5,local_80);
    uVar5 = *(uint *)(local_194 + 0x48);
    if (0x40 < uVar5) goto LAB_015bd71c;
    if (uVar5 == 0x20) {
      FUN_016dd1aa(param_6,&local_190,0x20);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb7204(0x20,uVar5,&DAT_018aa784);
}

