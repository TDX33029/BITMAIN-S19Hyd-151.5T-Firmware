// FUN_01611424 @ 01611424 size=580 calls_out=6 calls_in=1
// strings: 

void FUN_01611424(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  undefined1 auStack_388 [128];
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 local_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 *local_2c0;
  undefined4 local_2b8;
  int local_2b0;
  undefined1 auStack_2ac [64];
  int local_26c;
  undefined1 auStack_268 [64];
  undefined1 auStack_228 [128];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 *local_160;
  undefined4 local_158;
  undefined1 auStack_150 [200];
  int local_88;
  undefined4 local_80;
  undefined1 auStack_78 [84];
  
  local_308 = 0x6a09e667;
  uStack_304 = 0xbb67ae85;
  uStack_300 = 0x3c6ef372;
  uStack_2fc = 0xa54ff53a;
  uStack_2f8 = 0x510e527f;
  local_2f4 = 0x9b05688c;
  uStack_2f0 = 0x1f83d9ab;
  uStack_2ec = 0x5be0cd19;
  uStack_2e8 = 0;
  uStack_2e4 = 0;
  local_2e0 = 0;
  uStack_2dc = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  FUN_016dd606(auStack_388,0,0x80);
  local_2c4 = 0;
  local_2c8 = 0;
  local_2b8 = 0;
  local_2c0 = &DAT_018ab800;
  FUN_014f29bc(auStack_388,param_2,param_3);
  if (param_5 != 0) {
    FUN_014f29bc(auStack_388,param_4);
  }
  FUN_016dd1aa(auStack_150,auStack_388,0xd8);
  uVar1 = *(uint *)(local_88 + 0x50);
  FUN_016dd1aa(auStack_228,&local_308,0x50);
  if (0x80 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x80,&DAT_018a6dd0);
  }
  FUN_014f2c6c(&local_26c,auStack_228,auStack_150,uVar1,local_80);
  uVar1 = *(uint *)(local_26c + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x40,&DAT_018ab870);
  }
  FUN_016dd606(auStack_228,0,0x80);
  local_1a8 = 0x6a09e667;
  uStack_1a4 = 0xbb67ae85;
  uStack_1a0 = 0x3c6ef372;
  uStack_19c = 0xa54ff53a;
  uStack_198 = 0x510e527f;
  local_194 = 0x9b05688c;
  uStack_190 = 0x1f83d9ab;
  uStack_18c = 0x5be0cd19;
  uStack_188 = 0;
  uStack_184 = 0;
  local_180 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  local_164 = 0;
  local_168 = 0;
  local_158 = 0;
  local_160 = &DAT_018ab800;
  FUN_014f29bc(auStack_228,auStack_268,uVar1);
  FUN_016dd1aa(auStack_150,auStack_228,0xd8);
  uVar1 = *(uint *)(local_88 + 0x50);
  FUN_016dd1aa(auStack_78,&local_1a8,0x50);
  if (0x80 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x80,&DAT_018a6dd0);
  }
  FUN_014f2c6c(&local_2b0,auStack_78,auStack_150,uVar1,local_80);
  uVar1 = *(uint *)(local_2b0 + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x40,&DAT_018ab870);
  }
  if (uVar1 != 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7204(0x20,uVar1,&DAT_018ab860);
  }
  FUN_016dd1aa(param_1,auStack_2ac,0x20);
  return;
}

