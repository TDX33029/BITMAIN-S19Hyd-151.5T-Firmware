// FUN_01110994 @ 01110994 size=356 calls_out=6 calls_in=1
// strings: BUG: digest output is not 32 bytes

void FUN_01110994(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 auStack_270 [128];
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 *local_1a8;
  undefined4 local_1a0;
  int local_194;
  undefined1 auStack_190 [64];
  undefined1 auStack_150 [200];
  int local_88;
  undefined4 local_80;
  undefined1 auStack_78 [84];
  
  local_1f0 = 0x6a09e667;
  uStack_1ec = 0xbb67ae85;
  uStack_1e8 = 0x3c6ef372;
  uStack_1e4 = 0xa54ff53a;
  uStack_1e0 = 0x510e527f;
  local_1dc = 0x9b05688c;
  uStack_1d8 = 0x1f83d9ab;
  uStack_1d4 = 0x5be0cd19;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  local_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  FUN_016dd606(auStack_270,0,0x80);
  local_1ac = 0;
  local_1b0 = 0;
  local_1a0 = 0;
  local_1a8 = &DAT_018ab800;
  FUN_014f29bc(auStack_270,param_2,0x20);
  FUN_014f29bc(auStack_270,param_3,param_4);
  FUN_016dd1aa(auStack_150,auStack_270,0xd8);
  uVar1 = *(uint *)(local_88 + 0x50);
  FUN_016dd1aa(auStack_78,&local_1f0,0x50);
  if (0x80 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x80,&DAT_018a6dd0);
  }
  FUN_014f2c6c(&local_194,auStack_78,auStack_150,uVar1,local_80);
  uVar1 = *(uint *)(local_194 + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x40,&DAT_018ab870);
  }
  if (uVar1 != 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: digest output is not 32 bytes",0x22,auStack_150,&DAT_01887038,&DAT_01887028);
  }
  FUN_016dd1aa(param_1,auStack_190,0x20);
  return;
}

