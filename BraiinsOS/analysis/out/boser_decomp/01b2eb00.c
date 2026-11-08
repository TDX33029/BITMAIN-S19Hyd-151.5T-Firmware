// FUN_01b2eb00 @ 01b2eb00 size=176 calls_out=5 calls_in=2
// strings: bn_resized_from_ctx | /aws-lc/crypto/fipsmodule/bn/div.c | bn_fits_in_words(bn; width)

int FUN_01b2eb00(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 4) < param_2) {
    iVar1 = FUN_01b2ea9c(param_2,param_3);
    if (((iVar1 == 0) || (iVar2 = FUN_01b2b33c(iVar1,param_1), iVar2 == 0)) ||
       (iVar2 = FUN_01b2b700(iVar1,param_2), param_1 = iVar1, iVar2 == 0)) {
      param_1 = 0;
    }
  }
  else {
    iVar1 = FUN_01b2b09c();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01be3310("bn_fits_in_words(bn, width)","/aws-lc/crypto/fipsmodule/bn/div.c",0x203,
                   "bn_resized_from_ctx");
    }
  }
  return param_1;
}

