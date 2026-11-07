// FUN_01b2283c @ 01b2283c size=212 calls_out=1 calls_in=2
// strings: KeccakF1600_ExtractBytes | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | len <= SHA3_MAX_BLOCKSIZE

undefined8 FUN_01b2283c(int param_1,undefined1 *param_2,uint param_3)

{
  uint *puVar1;
  undefined1 *puVar3;
  undefined1 *puVar2;
  uint uVar4;
  uint uVar5;
  
  if (0xa8 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("len <= SHA3_MAX_BLOCKSIZE","/aws-lc/crypto/fipsmodule/sha/keccak1600.c",0x10d,
                 "KeccakF1600_ExtractBytes");
  }
  puVar1 = (uint *)(param_1 + -8);
  while( true ) {
    if (param_3 == 0) {
      return CONCAT44(param_2,puVar1);
    }
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    if (param_3 < 8) break;
    *param_2 = (char)uVar4;
    param_3 = param_3 - 8;
    param_2[4] = (char)uVar5;
    param_2[1] = (char)(uVar4 >> 8);
    param_2[2] = (char)(uVar4 >> 0x10);
    param_2[3] = (char)(uVar4 >> 0x18);
    param_2[5] = (char)(uVar5 >> 8);
    param_2[6] = (char)(uVar5 >> 0x10);
    param_2[7] = (char)(uVar5 >> 0x18);
    puVar1 = puVar1 + 2;
    param_2 = param_2 + 8;
  }
  puVar3 = param_2;
  do {
    puVar2 = puVar3 + 1;
    *puVar3 = (char)uVar4;
    uVar4 = uVar4 >> 8 | uVar5 << 0x18;
    uVar5 = uVar5 >> 8;
    puVar3 = puVar2;
  } while ((uint)((int)puVar2 - (int)param_2) < param_3);
  return 0;
}

