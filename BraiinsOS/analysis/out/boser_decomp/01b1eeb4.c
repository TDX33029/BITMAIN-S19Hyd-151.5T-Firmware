// FUN_01b1eeb4 @ 01b1eeb4 size=180 calls_out=1 calls_in=2
// strings: KeccakF1600_XORBytes | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | len <= SHA3_MAX_BLOCKSIZE | KeccakF1600_XORBytes | /aws-lc/crypto/fipsmodule/sha/keccak1600.c | (len % 8) == 0

undefined8 FUN_01b1eeb4(int param_1,uint *param_2,uint param_3)

{
  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  
  if (param_3 < 0xa9) {
    if ((param_3 & 7) == 0) {
      puVar5 = (uint *)((int)param_2 + (param_3 & 0xfffffff8));
      puVar3 = (uint *)(param_1 + -8);
      for (; puVar5 != param_2; param_2 = param_2 + 2) {
        puVar2 = puVar3 + 2;
        uVar6 = param_2[1];
        *puVar2 = *puVar2 ^ *param_2;
        puVar3[3] = puVar3[3] ^ uVar6;
        puVar3 = puVar2;
      }
      return 0;
    }
    uVar4 = 0xeb;
    pcVar1 = "(len % 8) == 0";
  }
  else {
    uVar4 = 0xea;
    pcVar1 = "len <= SHA3_MAX_BLOCKSIZE";
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar1,"/aws-lc/crypto/fipsmodule/sha/keccak1600.c",uVar4,"KeccakF1600_XORBytes");
}

