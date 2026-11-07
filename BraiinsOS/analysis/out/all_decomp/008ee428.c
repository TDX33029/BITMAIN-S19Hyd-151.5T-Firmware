// FUN_008ee428 @ 008ee428 size=432 calls_out=3 calls_in=5
// strings: 

void FUN_008ee428(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_c0 [64];
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined1 auStack_58 [56];
  int local_20;
  uint local_1c;
  
  FUN_016dd606(auStack_c0,0,0x40);
  local_64 = 0x5be0cd19;
  local_60 = 0;
  local_68 = 0x1f83d9ab;
  local_6c = 0x9b05688c;
  local_70 = 0x510e527f;
  local_74 = 0xa54ff53a;
  local_78 = 0x3c6ef372;
  local_7c = 0xbb67ae85;
  local_80 = 0x6a09e667;
  FUN_0062f2e4(auStack_c0,param_2,param_3);
  uVar1 = local_60;
  FUN_016dd606(auStack_58,0,0x38);
  FUN_0062f2e4(auStack_c0,&DAT_0033dcbe,1);
  uVar2 = local_60 & 0x3f;
  if (0x38 < uVar2) {
    FUN_0062f2e4(auStack_c0,auStack_58,0x38);
    uVar2 = local_60 & 0x3f;
  }
  if (0x38 < 0x38 - uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,0x38 - uVar2,0x38,&DAT_01857b48);
  }
  FUN_0062f2e4(auStack_c0,auStack_58);
  local_1c = uVar1 << 0x1b | ((uVar1 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
             ((uVar1 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar1 & 0x1fffffff) >> 0x15;
  local_20 = (uVar1 >> 0x1d) << 0x18;
  FUN_0062f2e4(auStack_c0,&local_20,8);
  param_1[7] = local_64 << 0x18 | (local_64 >> 8 & 0xff) << 0x10 | (local_64 >> 0x10 & 0xff) << 8 |
               local_64 >> 0x18;
  param_1[6] = local_68 << 0x18 | (local_68 >> 8 & 0xff) << 0x10 | (local_68 >> 0x10 & 0xff) << 8 |
               local_68 >> 0x18;
  param_1[5] = local_6c << 0x18 | (local_6c >> 8 & 0xff) << 0x10 | (local_6c >> 0x10 & 0xff) << 8 |
               local_6c >> 0x18;
  param_1[4] = local_70 << 0x18 | (local_70 >> 8 & 0xff) << 0x10 | (local_70 >> 0x10 & 0xff) << 8 |
               local_70 >> 0x18;
  param_1[3] = local_74 << 0x18 | (local_74 >> 8 & 0xff) << 0x10 | (local_74 >> 0x10 & 0xff) << 8 |
               local_74 >> 0x18;
  param_1[2] = local_78 << 0x18 | (local_78 >> 8 & 0xff) << 0x10 | (local_78 >> 0x10 & 0xff) << 8 |
               local_78 >> 0x18;
  param_1[1] = local_7c << 0x18 | (local_7c >> 8 & 0xff) << 0x10 | (local_7c >> 0x10 & 0xff) << 8 |
               local_7c >> 0x18;
  *param_1 = local_80 << 0x18 | (local_80 >> 8 & 0xff) << 0x10 | (local_80 >> 0x10 & 0xff) << 8 |
             local_80 >> 0x18;
  return;
}

