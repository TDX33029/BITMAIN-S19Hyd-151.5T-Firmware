// FUN_01b59e4c @ 01b59e4c size=652 calls_out=7 calls_in=2
// strings: aws_lc_0_39_0_Keccak1600_Absorb_once_x4 | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | r <= SHA3_MAX_BLOCKSIZE

undefined8
FUN_01b59e4c(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            uint param_7,byte param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_2d0 [7];
  undefined1 auStack_2c9 [160];
  byte abStack_229 [168];
  byte abStack_181 [168];
  byte abStack_d9 [173];
  int local_2c;
  undefined4 local_20;
  
  if (0xa8 < param_7) {
    local_20 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("r <= SHA3_MAX_BLOCKSIZE","/aws-lc/crypto/fipsmodule/sha/keccak1600.c",0x1cd,
                 "aws_lc_0_39_0_Keccak1600_Absorb_once_x4");
  }
  iVar4 = 0;
  uVar1 = (uint)auStack_2c9 >> 4;
  local_2c = DAT_01d53560;
  while( true ) {
    uVar3 = param_6 - iVar4;
    if (uVar3 < param_7) break;
    FUN_01b1ef80(param_1,param_2 + iVar4,param_3 + iVar4,param_4 + iVar4,param_5 + iVar4,param_7);
    FUN_01b59be0(param_1);
    iVar4 = iVar4 + param_7;
  }
  FUN_01bed93e(auStack_2d0,0,0x2a0);
  FUN_01b26974(auStack_2d0,param_2 + iVar4,uVar3);
  FUN_01b26974(abStack_229 + 1,param_3 + iVar4,uVar3);
  FUN_01b26974(abStack_181 + 1,param_4 + iVar4,uVar3);
  FUN_01b26974(abStack_d9 + 1,param_5 + iVar4,uVar3);
  uVar2 = param_7 - 1;
  if (uVar3 == uVar2) {
    param_8 = param_8 | 0x80;
  }
  else {
    *(byte *)(uVar2 + uVar1 * 0x10) = *(byte *)(uVar2 + uVar1 * 0x10) | 0x80;
    abStack_229[param_7] = abStack_229[param_7] | 0x80;
    abStack_181[param_7] = abStack_181[param_7] | 0x80;
    abStack_d9[param_7] = abStack_d9[param_7] | 0x80;
  }
  *(byte *)(uVar3 + uVar1 * 0x10) = param_8 | *(byte *)(uVar3 + uVar1 * 0x10);
  abStack_229[uVar3 + 1] = param_8 | abStack_229[uVar3 + 1];
  abStack_181[uVar3 + 1] = param_8 | abStack_181[uVar3 + 1];
  abStack_d9[uVar3 + 1] = param_8 | abStack_d9[uVar3 + 1];
  FUN_01b1ef80(param_1,auStack_2d0,abStack_229 + 1,abStack_181 + 1,abStack_d9 + 1,param_7);
  FUN_01b6b174(auStack_2d0,0x2a0);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

