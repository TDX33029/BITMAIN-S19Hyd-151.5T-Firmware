// FUN_017474f4 @ 017474f4 size=440 calls_out=5 calls_in=6
// strings: aws_lc_0_39_0_aes_ctr_set_key | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | bsaes_capable() | aws_lc_0_39_0_aes_ctr_set_key | /aws-lc/crypto/fipsmodule/cipher/e_aes.c | key_bytes == 128 / 8 || key_bytes == 192 / 8 || key_bytes == 256 / 8

code * FUN_017474f4(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                   int param_5)

{
  int iVar1;
  code *pcVar2;
  
  if ((0x10 < param_5 - 0x10U) || ((0x10101U >> (param_5 - 0x10U & 0xff) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("key_bytes == 128 / 8 || key_bytes == 192 / 8 || key_bytes == 256 / 8",
                 "/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0xf6,"aws_lc_0_39_0_aes_ctr_set_key");
  }
  iVar1 = (int)(short)param_5 << 3;
  if ((DAT_018dfe48 & 4) == 0) {
    if ((DAT_018dfe48 & 1) == 0) {
      FUN_01711bf8(param_4,iVar1,param_1);
      if (param_2 != 0) {
        FUN_017473e8(param_2,param_1,&DAT_0170dd80,0);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = &DAT_0170dd80;
      }
      pcVar2 = (code *)&LAB_01714108;
    }
    else {
      FUN_0178c460(param_4,iVar1,param_1);
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = &DAT_01703d1c;
      }
      if (param_2 != 0) {
        FUN_017473e8(param_2,param_1,&DAT_01703d1c,0);
      }
      pcVar2 = FUN_0170acbc;
      if ((DAT_018dfe48 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("bsaes_capable()","/aws-lc/crypto/fipsmodule/cipher/e_aes.c",0x10b,
                     "aws_lc_0_39_0_aes_ctr_set_key");
      }
    }
  }
  else {
    FUN_01783f80(param_4,iVar1,param_1);
    if (param_2 != 0) {
      FUN_017473e8(param_2,param_1,&DAT_01703d08,1);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = &DAT_01703d08;
    }
    pcVar2 = (code *)&DAT_01704828;
  }
  return pcVar2;
}

