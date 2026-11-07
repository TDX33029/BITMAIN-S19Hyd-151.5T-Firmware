// FUN_017077dc @ 017077dc size=340 calls_out=1 calls_in=2
// strings: KeccakF1600_ExtractBytes | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | len <= SHA3_MAX_BLOCKSIZE

longlong FUN_017077dc(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar2;
  undefined4 *puVar1;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if (0xa8 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("len <= SHA3_MAX_BLOCKSIZE","/aws-lc/crypto/fipsmodule/sha/keccak1600.c",0x10d,
                 "KeccakF1600_ExtractBytes");
  }
  if (param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar4 = param_3 & 7;
  puVar1 = (undefined4 *)(param_1 + -8);
  while( true ) {
    puVar2 = puVar1 + 2;
    uVar7 = *puVar2;
    uVar5 = puVar1[3];
    if (uVar4 == param_3) break;
    *param_2 = uVar7;
    puVar3 = param_2 + 2;
    param_3 = param_3 - 8;
    param_2[1] = uVar5 & 0xff | (uVar5 >> 8 & 0xff) << 8 | (uVar5 >> 0x10 & 0xff) << 0x10 |
                 uVar5 & 0xff000000;
    puVar1 = puVar2;
    param_2 = puVar3;
    if (param_3 == 0) {
      return CONCAT44(puVar3,puVar2);
    }
  }
  *(char *)param_2 = (char)uVar7;
  if (uVar4 == 1) {
    return ZEXT48(param_2) << 0x20;
  }
  *(char *)((int)param_2 + 1) = (char)((uint)uVar7 >> 8);
  if (uVar4 == 2) {
    return ZEXT48(param_2) << 0x20;
  }
  *(char *)((int)param_2 + 2) = (char)((uint)uVar7 >> 0x10);
  if (uVar4 == 3) {
    return ZEXT48(param_2) << 0x20;
  }
  *(char *)((int)param_2 + 3) = (char)((uint)uVar7 >> 0x18);
  if (uVar4 == 4) {
    return ZEXT48(param_2) << 0x20;
  }
  *(char *)(param_2 + 1) = (char)uVar5;
  if (uVar4 == 5) {
    return ZEXT48(param_2) << 0x20;
  }
  uVar6 = uVar5;
  if (uVar4 == 7) {
    uVar6 = uVar5 >> 0x10;
  }
  *(char *)((int)param_2 + 5) = (char)(uVar5 >> 8);
  if (uVar4 == 7) {
    *(char *)((int)param_2 + 6) = (char)uVar6;
  }
  return 0;
}

