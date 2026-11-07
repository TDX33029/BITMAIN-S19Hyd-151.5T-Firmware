// FUN_01703d30 @ 01703d30 size=192 calls_out=1 calls_in=2
// strings: KeccakF1600_XORBytes | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | len <= SHA3_MAX_BLOCKSIZE | KeccakF1600_XORBytes | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | (len % 8) == 0

undefined8 FUN_01703d30(int param_1,uint *param_2,uint param_3)

{
  uint *puVar2;
  uint *puVar1;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  if (0xa8 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("len <= SHA3_MAX_BLOCKSIZE","/aws-lc/crypto/fipsmodule/sha/keccak1600.c",0xea,
                 "KeccakF1600_XORBytes");
  }
  if ((param_3 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("(len % 8) == 0","/aws-lc/crypto/fipsmodule/sha/keccak1600.c",0xeb,
                 "KeccakF1600_XORBytes");
  }
  if (param_3 >> 3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  puVar1 = (uint *)(param_1 + -8);
  puVar3 = param_2;
  do {
    puVar2 = puVar1 + 2;
    puVar4 = puVar3 + 2;
    uVar5 = puVar3[1];
    *puVar2 = *puVar2 ^ *puVar3;
    puVar1[3] = puVar1[3] ^ uVar5;
    puVar1 = puVar2;
    puVar3 = puVar4;
  } while (param_2 + (param_3 >> 3) * 2 != puVar4);
  return 0;
}

